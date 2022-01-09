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

  conflicts: ($) => [[$._type_identifier, $._expression]],

  word: ($) => $.identifier,

  rules: {
    source_file: ($) => repeat($._statement),

    _statement: ($) =>
      choice(
        $._empty_statement,
        $.expression_statement,
        $._declaration_statement
      ),

    _empty_statement: ($) => ";",

    expression_statement: ($) => seq($._expression, ";"),

    _declaration_statement: ($) =>
      choice($.const_declaration, $.var_declaration),

    // Expressions

    _expression: ($) =>
      choice(
        $._literal,
        $.assignment_expression,
        $.unary_expression,
        $.binary_expression,
        prec.left($.identifier)
      ),

    identifier: ($) => /[a-zA-Z_]\w*/,

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

    // Types

    _type: ($) => choice($.primitive_type, $._type_identifier, $.pointer_type),

    primitive_type: ($) => choice($._integer_type, $._float_type),

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

    _type_identifier: ($) => alias($.identifier, $.type_identifier),

    pointer_type: ($) => prec.left(seq($._type, "*")),

    // Declarations

    const_declaration: ($) =>
      seq(
        "const",
        optional(field("type", $._type)),
        $.identifier,
        "=",
        $._expression,
        ";"
      ),

    var_declaration: ($) =>
      seq(
        field("type", $._type),
        $.identifier,
        "=",
        field("value", $._expression),
        ";"
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
