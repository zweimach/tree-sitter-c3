/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  // () [] . ++ --
  postfix: 10,
  // @ * & && ~ ! + - ++ --
  prefix: 9,
  // * / % *%
  multiplicative: 8,
  // << >>
  shift: 7,
  // ^ | &
  bitwise: 6,
  // + -
  additive: 5,
  // == != >= <= > <
  comparative: 4,
  // &&
  and: 3,
  // ||
  or: 2,
  // ?:
  ternary: 1,
  // == *= /= %= *%= += -= <<= >>= &= ^= |=
  assign: 0,
};

module.exports = grammar({
  name: "c3",

  extras: ($) => [/\s|\\\r?\n/, $.comment],

  inline: ($) => [
    $._top_level_item,
    $._statement,
    $._empty_statement,
    $._declaration_statement,
    $._path,
    $._type_path,
    $._expression,
    $._initializer,
    $._literal,
    $._string_literal,
    $._raw_string_literal,
    $._multiline_string_literal,
    $._prefix_expression,
    $._postfix_expression,
    $._type,
    $._integer_type,
    $._float_type,
    $._function_signature,
    $._var_declaration,
    $._struct_declaration,
    $._field_struct_declaration,
  ],

  conflicts: ($) => [
    [$._argument_list, $.argument_list],
    [$._parameter_list, $.parameter_list],
  ],

  word: ($) => $.identifier,

  rules: {
    source_file: ($) => repeat($._top_level_item),

    _top_level_item: ($) =>
      seq(optional($.visiblitiy_modifier), choice($._statement)),

    // Statements

    _statement: ($) =>
      choice(
        $._empty_statement,
        $.expression_statement,
        $._declaration_statement,
        $.return_statement,
        $.if_statement,
        $.while_statement,
        $.for_statement,
        $.defer_statement
      ),

    _empty_statement: ($) => ";",

    expression_statement: ($) => seq($._expression, ";"),

    _declaration_statement: ($) =>
      choice(
        $.module_declaration,
        $.import_declaration,
        $.function_declaration,
        $.const_declaration,
        $.var_declaration,
        $.define_declaration,
        $.struct_declaration,
        $.union_declaration,
        $.enum_declaration,
        $.error_declaration
      ),

    return_statement: ($) => seq("return", optional($._expression), ";"),

    if_statement: ($) =>
      prec.left(
        seq(
          "if",
          field("condition", $.parenthesized_expression),
          field("consecuence", choice($._statement, $.compound_statement)),
          field(
            "alternative",
            optional(seq("else", choice($._statement, $.compound_statement)))
          )
        )
      ),

    while_statement: ($) =>
      seq(
        "while",
        field(
          "condition",
          choice($.parenthesized_expression, $.parenthesized_declaration)
        ),
        field("body", choice($._statement, $.compound_statement))
      ),

    parenthesized_declaration: ($) => seq("(", $._var_declaration, ")"),

    for_statement: ($) =>
      seq(
        "for",
        "(",
        field(
          "initializer",
          choice($.var_declaration, seq(optional($.assignment_expression), ";"))
        ),
        field("condition", optional($._expression)),
        ";",
        field("update", optional($._expression)),
        ")",
        field("body", choice($._statement, $.compound_statement))
      ),

    defer_statement: ($) =>
      seq("defer", choice($._statement, $.compound_statement)),

    // Identifiers

    _path: ($) => choice($.scoped_identifier, $.identifier),

    _type_path: ($) => choice($.scoped_type_identifier, $.type_identifier),

    identifier: ($) => /[a-z_]\w*/,

    scoped_identifier: ($) =>
      seq(field("path", $._path), "::", field("name", $.identifier)),

    type_identifier: ($) => /_?[A-Z]\w*/,

    scoped_type_identifier: ($) =>
      seq(field("path", $._path), "::", field("type", $.type_identifier)),

    const_identifier: ($) => /_?[A-Z][A-Z0-9_]*/,

    // Expressions

    _expression: ($) =>
      choice(
        $._literal,
        $.assignment_expression,
        $.unary_expression,
        $.binary_expression,
        $.parenthesized_expression,
        $.range_expression,
        $.subscript_expression,
        $.call_expression,
        $.field_expression,
        $.try_expression,
        $.catch_expression,
        $.identifier,
        $.scoped_identifier
      ),

    visiblitiy_modifier: ($) => choice("private", "public"),

    _initializer: ($) => choice($._expression, $.initializer_list),

    initializer_list: ($) =>
      seq("{", commaSep($._expression), optional(","), "}"),

    _literal: ($) =>
      choice(
        $.boolean_literal,
        $.char_literal,
        $.string_literal,
        $.integer_literal,
        $.float_literal,
        $.nil_literal
      ),

    boolean_literal: ($) => choice("true", "false"),

    char_literal: ($) =>
      seq("'", choice(token.immediate(/[^\n']/), $.escape_sequence), "'"),

    string_literal: ($) =>
      choice(
        $._string_literal,
        $._raw_string_literal,
        $._multiline_string_literal
      ),

    _string_literal: ($) =>
      seq(
        '"',
        repeat(choice(token.immediate(/[^\\"\n]/), $.escape_sequence)),
        '"'
      ),

    _raw_string_literal: ($) => seq("`", repeat(token.immediate(/[^`]/)), "`"),

    _multiline_string_literal: ($) =>
      seq(
        '"""',
        repeat(choice(token.immediate(/[^\\]/), $.escape_sequence)),
        '"""'
      ),

    escape_sequence: ($) =>
      token(
        prec(
          1,
          seq(
            "\\",
            choice(
              /[^xuU]/,
              /\d{2,3}/,
              /x[0-9a-fA-F_]{2}/,
              /u[0-9a-fA-F_]{4}/,
              /U[0-9a-fA-F_]{8}/
            )
          )
        )
      ),

    integer_literal: ($) =>
      token(
        seq(
          optional(/[-\+]/),
          choice(/[0-9][0-9_]*/, /0x[0-9a-fA-F_]*/, /0o[0-7_]*/, /0b[01_]*/),
          optional(
            choice(
              "u",
              ...[8, 16, 32, 64, 128].map((n) => `i${n}`),
              ...[8, 16, 32, 64, 128].map((n) => `u${n}`)
            )
          )
        )
      ),

    float_literal: ($) =>
      token(
        seq(
          optional(/[-\+]/),
          choice(/[0-9][0-9_]*/, /0x[0-9a-fA-F_]*/),
          optional(seq(".", choice(/[0-9][0-9_]*/, /0x[0-9a-fA-F_]*/))),
          optional(seq(/[eEpP]/, optional(seq(optional(/[-\+]/), /[0-9]+/)))),
          optional(choice("f", ...[16, 32, 64, 128].map((n) => `f${n}`)))
        )
      ),

    nil_literal: ($) => "nil",

    assignment_expression: ($) =>
      prec.left(
        PREC.assign,
        seq(
          field("left", $._expression),
          field(
            "operator",
            choice(
              "=",
              "+=",
              "-=",
              "*=",
              "/=",
              "%=",
              "*%=",
              "&=",
              "|=",
              "^=",
              "<<=",
              ">>="
            )
          ),
          field("right", $._expression)
        )
      ),

    unary_expression: ($) =>
      choice($._prefix_expression, $._postfix_expression),

    _prefix_expression: ($) =>
      prec(
        PREC.prefix,
        seq(
          choice("-", "*", "!", "~", "&", "&&", "@", "--", "++"),
          $._expression
        )
      ),

    _postfix_expression: ($) =>
      prec(PREC.postfix, seq($._expression, choice("++", "--"))),

    binary_expression: ($) => {
      /** @type {[string, number][]} */
      const table = [
        ["+", PREC.additive],
        ["-", PREC.additive],
        ["*", PREC.multiplicative],
        ["/", PREC.multiplicative],
        ["%", PREC.multiplicative],
        ["*%", PREC.multiplicative],
        ["||", PREC.or],
        ["&&", PREC.and],
        ["|", PREC.bitwise],
        ["^", PREC.bitwise],
        ["&", PREC.bitwise],
        ["==", PREC.comparative],
        ["!=", PREC.comparative],
        [">", PREC.comparative],
        [">=", PREC.comparative],
        ["<=", PREC.comparative],
        ["<", PREC.comparative],
        ["<<", PREC.shift],
        [">>", PREC.shift],
      ];

      return choice(
        ...table.map(([operator, precedence]) => {
          return prec.left(
            precedence,
            seq(
              field("left", $._expression),
              field("operator", operator),
              field("right", $._expression)
            )
          );
        })
      );
    },

    parenthesized_expression: ($) => seq("(", choice($._expression), ")"),

    range_expression: ($) =>
      prec.left(seq(optional($._expression), "..", optional($._expression))),

    subscript_expression: ($) =>
      prec(
        PREC.postfix,
        seq(
          field("value", $._expression),
          "[",
          field("index", $._expression),
          "]"
        )
      ),

    call_expression: ($) =>
      prec(
        PREC.postfix,
        seq(
          field("function", $._expression),
          field("arguments", choice($.argument_list, $._argument_list))
        )
      ),

    _argument_list: ($) => seq("(", ")"),

    argument_list: ($) => seq("(", commaSep($._expression), ")"),

    field_expression: ($) =>
      seq(
        field("value", prec(PREC.postfix, seq($._expression, "."))),
        field("field", $.identifier)
      ),

    try_expression: ($) => prec.left(1, seq("try", $._expression)),

    catch_expression: ($) => prec.left(1, seq("catch", $._expression)),

    // Types

    _type: ($) =>
      choice(
        $.primitive_type,
        $.type_identifier,
        $.pointer_type,
        $.failable_type,
        $.array_type,
        $.scoped_type_identifier
      ),

    primitive_type: ($) => choice($._integer_type, $._float_type, "void"),

    _integer_type: ($) =>
      choice(
        "bool",
        "ichar",
        "char",
        "short",
        "ushort",
        "int",
        "uint",
        "long",
        "ulong",
        "iptr",
        "uptr",
        "iptrdiff",
        "uptrdiff",
        "isize",
        "usize"
      ),

    _float_type: ($) => choice("half", "float", "double", "quad"),

    pointer_type: ($) => prec.dynamic(1, prec.right(seq($._type, "*"))),

    function_pointer_type: ($) =>
      seq(
        "fn",
        field("return_type", $._type),
        field("parameters", choice($.parameter_list, $._parameter_list))
      ),

    failable_type: ($) => prec.left(seq($._type, "!")),

    array_type: ($) =>
      prec.left(
        seq($._type, "[", optional(choice($.integer_literal, "*")), "]")
      ),

    // Declarations

    module_declaration: ($) =>
      seq(
        "module",
        field("name", $._path),
        field("parameters", optional($.generic_parameter_list))
      ),

    generic_parameter_list: ($) => seq("<", commaSep($._type), ">"),

    import_declaration: ($) => seq("import", $._path),

    function_declaration: ($) =>
      choice(
        seq("extern", $._function_signature, ";"),
        seq($._function_signature, field("body", $.compound_statement))
      ),

    _function_signature: ($) =>
      seq(
        "fn",
        field("return_type", $._type),
        optional(seq(field("type", $.type_identifier), ".")),
        field("name", $.identifier),
        field("parameters", choice($.parameter_list, $._parameter_list)),
        field("attributes", optional($.attribute_list))
      ),

    compound_statement: ($) => seq("{", repeat($._statement), "}"),

    _parameter_list: ($) => seq("(", ")"),

    parameter_list: ($) =>
      seq("(", commaSep(choice($.parameter, $.variadic_parameter)), ")"),

    parameter: ($) =>
      seq(
        $._type,
        optional(seq($.identifier, optional(seq("=", $._initializer))))
      ),

    variadic_parameter: ($) => choice("...", seq($._type, "...", $.identifier)),

    attribute_list: ($) => repeat1($.attribute),

    attribute: ($) =>
      seq("@", $.identifier, optional(seq("(", $._expression, ")"))),

    const_declaration: ($) =>
      seq(
        "const",
        field("type", optional($._type)),
        $.identifier,
        "=",
        $._initializer,
        ";"
      ),

    var_declaration: ($) => seq($._var_declaration, ";"),

    _var_declaration: ($) =>
      seq(
        field("type", $._type),
        $.identifier,
        optional(seq("=", field("value", $._initializer)))
      ),

    define_declaration: ($) =>
      seq(
        "define",
        choice(
          seq($.identifier, "=", $._path),
          seq($.identifier, "=", $._path, $.generic_parameter_list),
          seq($.type_identifier, "=", optional("distinct"), $._type),
          seq($.type_identifier, "=", $._type_path, $.generic_parameter_list),
          seq($.type_identifier, "=", $.function_pointer_type)
        ),
        ";"
      ),

    struct_declaration: ($) => seq("struct", $._struct_declaration),

    union_declaration: ($) => seq("union", $._struct_declaration),

    _struct_declaration: ($) =>
      seq(
        field("name", $.type_identifier),
        field("attributes", optional($.attribute_list)),
        field("body", $.field_declaration_list)
      ),

    field_declaration_list: ($) =>
      seq(
        "{",
        repeat(
          choice(
            $.field_declaration,
            $.field_struct_declaration,
            $.field_union_declaration
          )
        ),
        "}"
      ),

    field_declaration: ($) =>
      seq(
        optional("inline"),
        field("type", $._type),
        field("name", $.identifier),
        field("attributes", optional($.attribute_list)),
        ";"
      ),

    field_struct_declaration: ($) => seq("struct", $._field_struct_declaration),

    field_union_declaration: ($) => seq("union", $._field_struct_declaration),

    _field_struct_declaration: ($) =>
      seq(
        field("name", optional($.identifier)),
        field("attributes", optional($.attribute_list)),
        field("body", $.field_declaration_list)
      ),

    enum_declaration: ($) =>
      seq(
        "enum",
        field("name", $.type_identifier),
        optional(seq(":", field("base_type", $._type))),
        field("attributes", optional($.attribute_list)),
        field("body", $.enumerator_list)
      ),

    enumerator_list: ($) =>
      seq("{", commaSep($.enumerator), optional(","), "}"),

    enumerator: ($) =>
      seq(
        field("name", $.const_identifier),
        optional(seq("=", field("value", $._expression)))
      ),

    error_declaration: ($) =>
      seq(
        "errtype",
        field("name", $.type_identifier),
        field("attributes", optional($.attribute_list)),
        field("body", $.enumerator_list)
      ),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: ($) =>
      token(
        choice(
          seq("//", /(\\(.|\r?\n)|[^\\\n])*/),
          seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")
        )
      ),
  },
});

/**
 * @param {RuleOrLiteral} rule
 * @returns {ChoiceRule}
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}

/**
 * @param {RuleOrLiteral} rule
 * @returns {SeqRule}
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}
