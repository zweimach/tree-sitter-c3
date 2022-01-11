#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 125
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 1
#define TOKEN_COUNT 85
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 11

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_return = 3,
  anon_sym_private = 4,
  anon_sym_LBRACE = 5,
  anon_sym_COMMA = 6,
  anon_sym_RBRACE = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  anon_sym_SQUOTE = 10,
  aux_sym_char_literal_token1 = 11,
  anon_sym_DQUOTE = 12,
  aux_sym__string_literal_token1 = 13,
  anon_sym_BQUOTE = 14,
  aux_sym__raw_string_literal_token1 = 15,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 16,
  aux_sym__multiline_string_literal_token1 = 17,
  sym_escape_sequence = 18,
  sym_integer_literal = 19,
  sym_float_literal = 20,
  sym_nil_literal = 21,
  anon_sym_EQ = 22,
  anon_sym_PLUS_EQ = 23,
  anon_sym_DASH_EQ = 24,
  anon_sym_STAR_EQ = 25,
  anon_sym_SLASH_EQ = 26,
  anon_sym_PERCENT_EQ = 27,
  anon_sym_STAR_PERCENT_EQ = 28,
  anon_sym_AMP_EQ = 29,
  anon_sym_PIPE_EQ = 30,
  anon_sym_CARET_EQ = 31,
  anon_sym_LT_LT_EQ = 32,
  anon_sym_GT_GT_EQ = 33,
  anon_sym_DASH = 34,
  anon_sym_STAR = 35,
  anon_sym_BANG = 36,
  anon_sym_TILDE = 37,
  anon_sym_AMP = 38,
  anon_sym_AMP_AMP = 39,
  anon_sym_AT = 40,
  anon_sym_DASH_DASH = 41,
  anon_sym_PLUS_PLUS = 42,
  anon_sym_PLUS = 43,
  anon_sym_SLASH = 44,
  anon_sym_PERCENT = 45,
  anon_sym_STAR_PERCENT = 46,
  anon_sym_PIPE_PIPE = 47,
  anon_sym_PIPE = 48,
  anon_sym_CARET = 49,
  anon_sym_EQ_EQ = 50,
  anon_sym_BANG_EQ = 51,
  anon_sym_GT = 52,
  anon_sym_GT_EQ = 53,
  anon_sym_LT_EQ = 54,
  anon_sym_LT = 55,
  anon_sym_LT_LT = 56,
  anon_sym_GT_GT = 57,
  anon_sym_void = 58,
  anon_sym_bool = 59,
  anon_sym_ichar = 60,
  anon_sym_char = 61,
  anon_sym_short = 62,
  anon_sym_ushort = 63,
  anon_sym_int = 64,
  anon_sym_uint = 65,
  anon_sym_long = 66,
  anon_sym_ulong = 67,
  anon_sym_iptr = 68,
  anon_sym_uptr = 69,
  anon_sym_iptrdiff = 70,
  anon_sym_uptrdiff = 71,
  anon_sym_isize = 72,
  anon_sym_usize = 73,
  anon_sym_half = 74,
  anon_sym_float = 75,
  anon_sym_double = 76,
  anon_sym_quad = 77,
  anon_sym_extern = 78,
  anon_sym_fn = 79,
  anon_sym_LPAREN = 80,
  anon_sym_RPAREN = 81,
  anon_sym_DOT_DOT_DOT = 82,
  anon_sym_const = 83,
  sym_comment = 84,
  sym_source_file = 85,
  sym__top_level_item = 86,
  sym__statement = 87,
  sym__empty_statement = 88,
  sym_expression_statement = 89,
  sym__declaration_statement = 90,
  sym_return_statement = 91,
  sym__expression = 92,
  sym_visiblitiy_modifier = 93,
  sym__initializer = 94,
  sym_initializer_list = 95,
  sym__literal = 96,
  sym_boolean_literal = 97,
  sym_char_literal = 98,
  sym_string_literal = 99,
  sym__string_literal = 100,
  sym__raw_string_literal = 101,
  sym__multiline_string_literal = 102,
  sym_assignment_expression = 103,
  sym_unary_expression = 104,
  sym__prefix_expression = 105,
  sym__postfix_expression = 106,
  sym_binary_expression = 107,
  sym__type = 108,
  sym_primitive_type = 109,
  sym__integer_type = 110,
  sym__float_type = 111,
  sym__type_identifier = 112,
  sym_pointer_type = 113,
  sym_failable_type = 114,
  sym_function_declaration = 115,
  sym__function_signature = 116,
  sym_compound_statement = 117,
  sym_parameter_list = 118,
  sym_parameter = 119,
  sym_variadic_parameter = 120,
  sym_attribute_list = 121,
  sym_const_declaration = 122,
  sym_var_declaration = 123,
  aux_sym_source_file_repeat1 = 124,
  aux_sym_initializer_list_repeat1 = 125,
  aux_sym__string_literal_repeat1 = 126,
  aux_sym__raw_string_literal_repeat1 = 127,
  aux_sym__multiline_string_literal_repeat1 = 128,
  aux_sym_compound_statement_repeat1 = 129,
  aux_sym_parameter_list_repeat1 = 130,
  alias_sym_type_identifier = 131,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_return] = "return",
  [anon_sym_private] = "private",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_literal_token1] = "char_literal_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_literal_token1] = "_string_literal_token1",
  [anon_sym_BQUOTE] = "`",
  [aux_sym__raw_string_literal_token1] = "_raw_string_literal_token1",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym__multiline_string_literal_token1] = "_multiline_string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_integer_literal] = "integer_literal",
  [sym_float_literal] = "float_literal",
  [sym_nil_literal] = "nil_literal",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_STAR_PERCENT_EQ] = "*%=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_AMP] = "&",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_AT] = "@",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_STAR_PERCENT] = "*%",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_void] = "void",
  [anon_sym_bool] = "bool",
  [anon_sym_ichar] = "ichar",
  [anon_sym_char] = "char",
  [anon_sym_short] = "short",
  [anon_sym_ushort] = "ushort",
  [anon_sym_int] = "int",
  [anon_sym_uint] = "uint",
  [anon_sym_long] = "long",
  [anon_sym_ulong] = "ulong",
  [anon_sym_iptr] = "iptr",
  [anon_sym_uptr] = "uptr",
  [anon_sym_iptrdiff] = "iptrdiff",
  [anon_sym_uptrdiff] = "uptrdiff",
  [anon_sym_isize] = "isize",
  [anon_sym_usize] = "usize",
  [anon_sym_half] = "half",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_quad] = "quad",
  [anon_sym_extern] = "extern",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_const] = "const",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__top_level_item] = "_top_level_item",
  [sym__statement] = "_statement",
  [sym__empty_statement] = "_empty_statement",
  [sym_expression_statement] = "expression_statement",
  [sym__declaration_statement] = "_declaration_statement",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [sym_visiblitiy_modifier] = "visiblitiy_modifier",
  [sym__initializer] = "_initializer",
  [sym_initializer_list] = "initializer_list",
  [sym__literal] = "_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_char_literal] = "char_literal",
  [sym_string_literal] = "string_literal",
  [sym__string_literal] = "_string_literal",
  [sym__raw_string_literal] = "_raw_string_literal",
  [sym__multiline_string_literal] = "_multiline_string_literal",
  [sym_assignment_expression] = "assignment_expression",
  [sym_unary_expression] = "unary_expression",
  [sym__prefix_expression] = "_prefix_expression",
  [sym__postfix_expression] = "_postfix_expression",
  [sym_binary_expression] = "binary_expression",
  [sym__type] = "_type",
  [sym_primitive_type] = "primitive_type",
  [sym__integer_type] = "_integer_type",
  [sym__float_type] = "_float_type",
  [sym__type_identifier] = "_type_identifier",
  [sym_pointer_type] = "pointer_type",
  [sym_failable_type] = "failable_type",
  [sym_function_declaration] = "function_declaration",
  [sym__function_signature] = "_function_signature",
  [sym_compound_statement] = "compound_statement",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_variadic_parameter] = "variadic_parameter",
  [sym_attribute_list] = "attribute_list",
  [sym_const_declaration] = "const_declaration",
  [sym_var_declaration] = "var_declaration",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_initializer_list_repeat1] = "initializer_list_repeat1",
  [aux_sym__string_literal_repeat1] = "_string_literal_repeat1",
  [aux_sym__raw_string_literal_repeat1] = "_raw_string_literal_repeat1",
  [aux_sym__multiline_string_literal_repeat1] = "_multiline_string_literal_repeat1",
  [aux_sym_compound_statement_repeat1] = "compound_statement_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_literal_token1] = aux_sym_char_literal_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_literal_token1] = aux_sym__string_literal_token1,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym__raw_string_literal_token1] = aux_sym__raw_string_literal_token1,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym__multiline_string_literal_token1] = aux_sym__multiline_string_literal_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_integer_literal] = sym_integer_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_nil_literal] = sym_nil_literal,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_STAR_PERCENT_EQ] = anon_sym_STAR_PERCENT_EQ,
  [anon_sym_AMP_EQ] = anon_sym_AMP_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_LT_LT_EQ] = anon_sym_LT_LT_EQ,
  [anon_sym_GT_GT_EQ] = anon_sym_GT_GT_EQ,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_STAR_PERCENT] = anon_sym_STAR_PERCENT,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_ichar] = anon_sym_ichar,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_short] = anon_sym_short,
  [anon_sym_ushort] = anon_sym_ushort,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_uint] = anon_sym_uint,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_ulong] = anon_sym_ulong,
  [anon_sym_iptr] = anon_sym_iptr,
  [anon_sym_uptr] = anon_sym_uptr,
  [anon_sym_iptrdiff] = anon_sym_iptrdiff,
  [anon_sym_uptrdiff] = anon_sym_uptrdiff,
  [anon_sym_isize] = anon_sym_isize,
  [anon_sym_usize] = anon_sym_usize,
  [anon_sym_half] = anon_sym_half,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_quad] = anon_sym_quad,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_const] = anon_sym_const,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__top_level_item] = sym__top_level_item,
  [sym__statement] = sym__statement,
  [sym__empty_statement] = sym__empty_statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym__declaration_statement] = sym__declaration_statement,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [sym_visiblitiy_modifier] = sym_visiblitiy_modifier,
  [sym__initializer] = sym__initializer,
  [sym_initializer_list] = sym_initializer_list,
  [sym__literal] = sym__literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_char_literal] = sym_char_literal,
  [sym_string_literal] = sym_string_literal,
  [sym__string_literal] = sym__string_literal,
  [sym__raw_string_literal] = sym__raw_string_literal,
  [sym__multiline_string_literal] = sym__multiline_string_literal,
  [sym_assignment_expression] = sym_assignment_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym__prefix_expression] = sym__prefix_expression,
  [sym__postfix_expression] = sym__postfix_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym__type] = sym__type,
  [sym_primitive_type] = sym_primitive_type,
  [sym__integer_type] = sym__integer_type,
  [sym__float_type] = sym__float_type,
  [sym__type_identifier] = sym__type_identifier,
  [sym_pointer_type] = sym_pointer_type,
  [sym_failable_type] = sym_failable_type,
  [sym_function_declaration] = sym_function_declaration,
  [sym__function_signature] = sym__function_signature,
  [sym_compound_statement] = sym_compound_statement,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_variadic_parameter] = sym_variadic_parameter,
  [sym_attribute_list] = sym_attribute_list,
  [sym_const_declaration] = sym_const_declaration,
  [sym_var_declaration] = sym_var_declaration,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_initializer_list_repeat1] = aux_sym_initializer_list_repeat1,
  [aux_sym__string_literal_repeat1] = aux_sym__string_literal_repeat1,
  [aux_sym__raw_string_literal_repeat1] = aux_sym__raw_string_literal_repeat1,
  [aux_sym__multiline_string_literal_repeat1] = aux_sym__multiline_string_literal_repeat1,
  [aux_sym_compound_statement_repeat1] = aux_sym_compound_statement_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [alias_sym_type_identifier] = alias_sym_type_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__raw_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__multiline_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_nil_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ichar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ushort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ulong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iptrdiff] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uptrdiff] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_half] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_item] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__empty_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_visiblitiy_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym__initializer] = {
    .visible = false,
    .named = true,
  },
  [sym_initializer_list] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__raw_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__prefix_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__postfix_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym__integer_type] = {
    .visible = false,
    .named = true,
  },
  [sym__float_type] = {
    .visible = false,
    .named = true,
  },
  [sym__type_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_pointer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_failable_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__function_signature] = {
    .visible = false,
    .named = true,
  },
  [sym_compound_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_variadic_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_list] = {
    .visible = true,
    .named = true,
  },
  [sym_const_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_var_declaration] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_initializer_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__raw_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multiline_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_attributes = 1,
  field_body = 2,
  field_left = 3,
  field_name = 4,
  field_operator = 5,
  field_parameters = 6,
  field_return_type = 7,
  field_right = 8,
  field_type = 9,
  field_value = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_attributes] = "attributes",
  [field_body] = "body",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_return_type] = "return_type",
  [field_right] = "right",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 5},
  [3] = {.index = 5, .length = 4},
  [4] = {.index = 9, .length = 2},
  [5] = {.index = 11, .length = 3},
  [6] = {.index = 14, .length = 3},
  [7] = {.index = 17, .length = 3},
  [8] = {.index = 20, .length = 4},
  [9] = {.index = 24, .length = 2},
  [10] = {.index = 26, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_attributes, 0, .inherited = true},
    {field_body, 1},
    {field_name, 0, .inherited = true},
    {field_parameters, 0, .inherited = true},
    {field_return_type, 0, .inherited = true},
  [5] =
    {field_attributes, 1, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_parameters, 1, .inherited = true},
    {field_return_type, 1, .inherited = true},
  [9] =
    {field_name, 2},
    {field_return_type, 1},
  [11] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [14] =
    {field_name, 2},
    {field_parameters, 3},
    {field_return_type, 1},
  [17] =
    {field_attributes, 3},
    {field_name, 2},
    {field_return_type, 1},
  [20] =
    {field_attributes, 4},
    {field_name, 2},
    {field_parameters, 3},
    {field_return_type, 1},
  [24] =
    {field_type, 0},
    {field_value, 3},
  [26] =
    {field_type, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_type_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      if (lookahead == '!') ADVANCE(113);
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '%') ADVANCE(123);
      if (lookahead == '&') ADVANCE(116);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '(') ADVANCE(136);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '>') ADVANCE(130);
      if (lookahead == '@') ADVANCE(118);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == '^') ADVANCE(127);
      if (lookahead == '`') ADVANCE(56);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '~') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\r') ADVANCE(64);
      if (lookahead == 'U') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(47);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(140);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == '0') ADVANCE(74);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(138);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == '`') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(89);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(20);
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(21);
      if (lookahead == '8') ADVANCE(68);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(24);
      if (lookahead == '6') ADVANCE(82);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(82);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(23);
      if (lookahead == '6') ADVANCE(68);
      END_STATE();
    case 21:
      if (lookahead == '4') ADVANCE(68);
      END_STATE();
    case 22:
      if (lookahead == '4') ADVANCE(82);
      END_STATE();
    case 23:
      if (lookahead == '8') ADVANCE(68);
      END_STATE();
    case 24:
      if (lookahead == '8') ADVANCE(82);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 35:
      if (eof) ADVANCE(40);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 36:
      if (eof) ADVANCE(40);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(35)
      END_STATE();
    case 37:
      if (eof) ADVANCE(40);
      if (lookahead == '\n') SKIP(39)
      END_STATE();
    case 38:
      if (eof) ADVANCE(40);
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '\r') SKIP(37)
      END_STATE();
    case 39:
      if (eof) ADVANCE(40);
      if (lookahead == '!') ADVANCE(112);
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '&') ADVANCE(115);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '@') ADVANCE(118);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == '`') ADVANCE(56);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '~') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\r') ADVANCE(64);
      if (lookahead == 'U') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(140);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(140);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token1);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(140);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__multiline_string_literal_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__multiline_string_literal_token1);
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__multiline_string_literal_token1);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(140);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__multiline_string_literal_token1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '1') ADVANCE(71);
      if (lookahead == '3') ADVANCE(70);
      if (lookahead == '6') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '2') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(78);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '2') ADVANCE(73);
      if (lookahead == '6') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '4') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(78);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '8') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(78);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == 'x') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '1') ADVANCE(20);
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(21);
      if (lookahead == '8') ADVANCE(68);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(22);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '1') ADVANCE(86);
      if (lookahead == '3') ADVANCE(85);
      if (lookahead == '6') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(95);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '2') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(95);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '2') ADVANCE(88);
      if (lookahead == '6') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(95);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '4') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(95);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '8') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(95);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'x') ADVANCE(95);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(128);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_STAR_PERCENT_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '0') ADVANCE(74);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '%') ADVANCE(124);
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(129);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(117);
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_STAR_PERCENT);
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(104);
      if (lookahead == '|') ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(131);
      if (lookahead == '>') ADVANCE(135);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(106);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(107);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(34);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\\') SKIP(1)
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'h') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'q') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == 'v') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(18)
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == 'h') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 'p') ADVANCE(30);
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(52);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 55:
      if (lookahead == 'z') ADVANCE(79);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_nil_literal);
      END_STATE();
    case 58:
      if (lookahead == 'v') ADVANCE(81);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 67:
      if (lookahead == 'z') ADVANCE(90);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_half);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_iptr);
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_quad);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_uptr);
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_ichar);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(114);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 116:
      if (lookahead == 'f') ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_iptrdiff);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_uptrdiff);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 39},
  [2] = {.lex_state = 39},
  [3] = {.lex_state = 39},
  [4] = {.lex_state = 39},
  [5] = {.lex_state = 39},
  [6] = {.lex_state = 39},
  [7] = {.lex_state = 39},
  [8] = {.lex_state = 39},
  [9] = {.lex_state = 39},
  [10] = {.lex_state = 39},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 39},
  [13] = {.lex_state = 39},
  [14] = {.lex_state = 39},
  [15] = {.lex_state = 39},
  [16] = {.lex_state = 39},
  [17] = {.lex_state = 39},
  [18] = {.lex_state = 39},
  [19] = {.lex_state = 39},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 39},
  [44] = {.lex_state = 39},
  [45] = {.lex_state = 39},
  [46] = {.lex_state = 39},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 39},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 39},
  [53] = {.lex_state = 39},
  [54] = {.lex_state = 39},
  [55] = {.lex_state = 39},
  [56] = {.lex_state = 39},
  [57] = {.lex_state = 39},
  [58] = {.lex_state = 39},
  [59] = {.lex_state = 39},
  [60] = {.lex_state = 39},
  [61] = {.lex_state = 39},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 39},
  [64] = {.lex_state = 39},
  [65] = {.lex_state = 39},
  [66] = {.lex_state = 39},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 14},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [sym_nil_literal] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_STAR_PERCENT] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_ichar] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_ushort] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_uint] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_ulong] = ACTIONS(1),
    [anon_sym_iptr] = ACTIONS(1),
    [anon_sym_uptr] = ACTIONS(1),
    [anon_sym_iptrdiff] = ACTIONS(1),
    [anon_sym_uptrdiff] = ACTIONS(1),
    [anon_sym_isize] = ACTIONS(1),
    [anon_sym_usize] = ACTIONS(1),
    [anon_sym_half] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_quad] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(120),
    [sym__top_level_item] = STATE(3),
    [sym__statement] = STATE(3),
    [sym__empty_statement] = STATE(3),
    [sym_expression_statement] = STATE(3),
    [sym__declaration_statement] = STATE(3),
    [sym_return_statement] = STATE(3),
    [sym__expression] = STATE(51),
    [sym_visiblitiy_modifier] = STATE(7),
    [sym__literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [sym_char_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [sym__string_literal] = STATE(26),
    [sym__raw_string_literal] = STATE(26),
    [sym__multiline_string_literal] = STATE(26),
    [sym_assignment_expression] = STATE(51),
    [sym_unary_expression] = STATE(51),
    [sym__prefix_expression] = STATE(27),
    [sym__postfix_expression] = STATE(27),
    [sym_binary_expression] = STATE(51),
    [sym__type] = STATE(95),
    [sym_primitive_type] = STATE(95),
    [sym__integer_type] = STATE(71),
    [sym__float_type] = STATE(71),
    [sym__type_identifier] = STATE(95),
    [sym_pointer_type] = STATE(95),
    [sym_failable_type] = STATE(95),
    [sym_function_declaration] = STATE(3),
    [sym__function_signature] = STATE(107),
    [sym_const_declaration] = STATE(3),
    [sym_var_declaration] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_private] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [sym_integer_literal] = ACTIONS(25),
    [sym_float_literal] = ACTIONS(25),
    [sym_nil_literal] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AMP_AMP] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_DASH_DASH] = ACTIONS(29),
    [anon_sym_PLUS_PLUS] = ACTIONS(29),
    [anon_sym_void] = ACTIONS(31),
    [anon_sym_bool] = ACTIONS(31),
    [anon_sym_ichar] = ACTIONS(31),
    [anon_sym_char] = ACTIONS(31),
    [anon_sym_short] = ACTIONS(31),
    [anon_sym_ushort] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(31),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_long] = ACTIONS(31),
    [anon_sym_ulong] = ACTIONS(31),
    [anon_sym_iptr] = ACTIONS(31),
    [anon_sym_uptr] = ACTIONS(31),
    [anon_sym_iptrdiff] = ACTIONS(31),
    [anon_sym_uptrdiff] = ACTIONS(31),
    [anon_sym_isize] = ACTIONS(31),
    [anon_sym_usize] = ACTIONS(31),
    [anon_sym_half] = ACTIONS(31),
    [anon_sym_float] = ACTIONS(31),
    [anon_sym_double] = ACTIONS(31),
    [anon_sym_quad] = ACTIONS(31),
    [anon_sym_extern] = ACTIONS(33),
    [anon_sym_fn] = ACTIONS(35),
    [anon_sym_const] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__top_level_item] = STATE(2),
    [sym__statement] = STATE(2),
    [sym__empty_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym__declaration_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym__expression] = STATE(51),
    [sym_visiblitiy_modifier] = STATE(7),
    [sym__literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [sym_char_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [sym__string_literal] = STATE(26),
    [sym__raw_string_literal] = STATE(26),
    [sym__multiline_string_literal] = STATE(26),
    [sym_assignment_expression] = STATE(51),
    [sym_unary_expression] = STATE(51),
    [sym__prefix_expression] = STATE(27),
    [sym__postfix_expression] = STATE(27),
    [sym_binary_expression] = STATE(51),
    [sym__type] = STATE(95),
    [sym_primitive_type] = STATE(95),
    [sym__integer_type] = STATE(71),
    [sym__float_type] = STATE(71),
    [sym__type_identifier] = STATE(95),
    [sym_pointer_type] = STATE(95),
    [sym_failable_type] = STATE(95),
    [sym_function_declaration] = STATE(2),
    [sym__function_signature] = STATE(107),
    [sym_const_declaration] = STATE(2),
    [sym_var_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_identifier] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(44),
    [anon_sym_return] = ACTIONS(47),
    [anon_sym_private] = ACTIONS(50),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [anon_sym_BQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(68),
    [sym_float_literal] = ACTIONS(68),
    [sym_nil_literal] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_BANG] = ACTIONS(74),
    [anon_sym_TILDE] = ACTIONS(74),
    [anon_sym_AMP] = ACTIONS(71),
    [anon_sym_AMP_AMP] = ACTIONS(74),
    [anon_sym_AT] = ACTIONS(74),
    [anon_sym_DASH_DASH] = ACTIONS(74),
    [anon_sym_PLUS_PLUS] = ACTIONS(74),
    [anon_sym_void] = ACTIONS(77),
    [anon_sym_bool] = ACTIONS(77),
    [anon_sym_ichar] = ACTIONS(77),
    [anon_sym_char] = ACTIONS(77),
    [anon_sym_short] = ACTIONS(77),
    [anon_sym_ushort] = ACTIONS(77),
    [anon_sym_int] = ACTIONS(77),
    [anon_sym_uint] = ACTIONS(77),
    [anon_sym_long] = ACTIONS(77),
    [anon_sym_ulong] = ACTIONS(77),
    [anon_sym_iptr] = ACTIONS(77),
    [anon_sym_uptr] = ACTIONS(77),
    [anon_sym_iptrdiff] = ACTIONS(77),
    [anon_sym_uptrdiff] = ACTIONS(77),
    [anon_sym_isize] = ACTIONS(77),
    [anon_sym_usize] = ACTIONS(77),
    [anon_sym_half] = ACTIONS(77),
    [anon_sym_float] = ACTIONS(77),
    [anon_sym_double] = ACTIONS(77),
    [anon_sym_quad] = ACTIONS(77),
    [anon_sym_extern] = ACTIONS(80),
    [anon_sym_fn] = ACTIONS(83),
    [anon_sym_const] = ACTIONS(86),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__top_level_item] = STATE(2),
    [sym__statement] = STATE(2),
    [sym__empty_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym__declaration_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym__expression] = STATE(51),
    [sym_visiblitiy_modifier] = STATE(7),
    [sym__literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [sym_char_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [sym__string_literal] = STATE(26),
    [sym__raw_string_literal] = STATE(26),
    [sym__multiline_string_literal] = STATE(26),
    [sym_assignment_expression] = STATE(51),
    [sym_unary_expression] = STATE(51),
    [sym__prefix_expression] = STATE(27),
    [sym__postfix_expression] = STATE(27),
    [sym_binary_expression] = STATE(51),
    [sym__type] = STATE(95),
    [sym_primitive_type] = STATE(95),
    [sym__integer_type] = STATE(71),
    [sym__float_type] = STATE(71),
    [sym__type_identifier] = STATE(95),
    [sym_pointer_type] = STATE(95),
    [sym_failable_type] = STATE(95),
    [sym_function_declaration] = STATE(2),
    [sym__function_signature] = STATE(107),
    [sym_const_declaration] = STATE(2),
    [sym_var_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_private] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [sym_integer_literal] = ACTIONS(25),
    [sym_float_literal] = ACTIONS(25),
    [sym_nil_literal] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AMP_AMP] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_DASH_DASH] = ACTIONS(29),
    [anon_sym_PLUS_PLUS] = ACTIONS(29),
    [anon_sym_void] = ACTIONS(31),
    [anon_sym_bool] = ACTIONS(31),
    [anon_sym_ichar] = ACTIONS(31),
    [anon_sym_char] = ACTIONS(31),
    [anon_sym_short] = ACTIONS(31),
    [anon_sym_ushort] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(31),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_long] = ACTIONS(31),
    [anon_sym_ulong] = ACTIONS(31),
    [anon_sym_iptr] = ACTIONS(31),
    [anon_sym_uptr] = ACTIONS(31),
    [anon_sym_iptrdiff] = ACTIONS(31),
    [anon_sym_uptrdiff] = ACTIONS(31),
    [anon_sym_isize] = ACTIONS(31),
    [anon_sym_usize] = ACTIONS(31),
    [anon_sym_half] = ACTIONS(31),
    [anon_sym_float] = ACTIONS(31),
    [anon_sym_double] = ACTIONS(31),
    [anon_sym_quad] = ACTIONS(31),
    [anon_sym_extern] = ACTIONS(33),
    [anon_sym_fn] = ACTIONS(35),
    [anon_sym_const] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__statement] = STATE(4),
    [sym__empty_statement] = STATE(4),
    [sym_expression_statement] = STATE(4),
    [sym__declaration_statement] = STATE(4),
    [sym_return_statement] = STATE(4),
    [sym__expression] = STATE(51),
    [sym__literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [sym_char_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [sym__string_literal] = STATE(26),
    [sym__raw_string_literal] = STATE(26),
    [sym__multiline_string_literal] = STATE(26),
    [sym_assignment_expression] = STATE(51),
    [sym_unary_expression] = STATE(51),
    [sym__prefix_expression] = STATE(27),
    [sym__postfix_expression] = STATE(27),
    [sym_binary_expression] = STATE(51),
    [sym__type] = STATE(95),
    [sym_primitive_type] = STATE(95),
    [sym__integer_type] = STATE(71),
    [sym__float_type] = STATE(71),
    [sym__type_identifier] = STATE(95),
    [sym_pointer_type] = STATE(95),
    [sym_failable_type] = STATE(95),
    [sym_function_declaration] = STATE(4),
    [sym__function_signature] = STATE(107),
    [sym_const_declaration] = STATE(4),
    [sym_var_declaration] = STATE(4),
    [aux_sym_compound_statement_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(96),
    [anon_sym_return] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(102),
    [anon_sym_true] = ACTIONS(104),
    [anon_sym_false] = ACTIONS(104),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(116),
    [sym_integer_literal] = ACTIONS(119),
    [sym_float_literal] = ACTIONS(119),
    [sym_nil_literal] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_STAR] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_TILDE] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(122),
    [anon_sym_AMP_AMP] = ACTIONS(125),
    [anon_sym_AT] = ACTIONS(125),
    [anon_sym_DASH_DASH] = ACTIONS(125),
    [anon_sym_PLUS_PLUS] = ACTIONS(125),
    [anon_sym_void] = ACTIONS(128),
    [anon_sym_bool] = ACTIONS(128),
    [anon_sym_ichar] = ACTIONS(128),
    [anon_sym_char] = ACTIONS(128),
    [anon_sym_short] = ACTIONS(128),
    [anon_sym_ushort] = ACTIONS(128),
    [anon_sym_int] = ACTIONS(128),
    [anon_sym_uint] = ACTIONS(128),
    [anon_sym_long] = ACTIONS(128),
    [anon_sym_ulong] = ACTIONS(128),
    [anon_sym_iptr] = ACTIONS(128),
    [anon_sym_uptr] = ACTIONS(128),
    [anon_sym_iptrdiff] = ACTIONS(128),
    [anon_sym_uptrdiff] = ACTIONS(128),
    [anon_sym_isize] = ACTIONS(128),
    [anon_sym_usize] = ACTIONS(128),
    [anon_sym_half] = ACTIONS(128),
    [anon_sym_float] = ACTIONS(128),
    [anon_sym_double] = ACTIONS(128),
    [anon_sym_quad] = ACTIONS(128),
    [anon_sym_extern] = ACTIONS(131),
    [anon_sym_fn] = ACTIONS(134),
    [anon_sym_const] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__statement] = STATE(4),
    [sym__empty_statement] = STATE(4),
    [sym_expression_statement] = STATE(4),
    [sym__declaration_statement] = STATE(4),
    [sym_return_statement] = STATE(4),
    [sym__expression] = STATE(51),
    [sym__literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [sym_char_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [sym__string_literal] = STATE(26),
    [sym__raw_string_literal] = STATE(26),
    [sym__multiline_string_literal] = STATE(26),
    [sym_assignment_expression] = STATE(51),
    [sym_unary_expression] = STATE(51),
    [sym__prefix_expression] = STATE(27),
    [sym__postfix_expression] = STATE(27),
    [sym_binary_expression] = STATE(51),
    [sym__type] = STATE(95),
    [sym_primitive_type] = STATE(95),
    [sym__integer_type] = STATE(71),
    [sym__float_type] = STATE(71),
    [sym__type_identifier] = STATE(95),
    [sym_pointer_type] = STATE(95),
    [sym_failable_type] = STATE(95),
    [sym_function_declaration] = STATE(4),
    [sym__function_signature] = STATE(107),
    [sym_const_declaration] = STATE(4),
    [sym_var_declaration] = STATE(4),
    [aux_sym_compound_statement_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(140),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(142),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [sym_integer_literal] = ACTIONS(25),
    [sym_float_literal] = ACTIONS(25),
    [sym_nil_literal] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AMP_AMP] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_DASH_DASH] = ACTIONS(29),
    [anon_sym_PLUS_PLUS] = ACTIONS(29),
    [anon_sym_void] = ACTIONS(31),
    [anon_sym_bool] = ACTIONS(31),
    [anon_sym_ichar] = ACTIONS(31),
    [anon_sym_char] = ACTIONS(31),
    [anon_sym_short] = ACTIONS(31),
    [anon_sym_ushort] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(31),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_long] = ACTIONS(31),
    [anon_sym_ulong] = ACTIONS(31),
    [anon_sym_iptr] = ACTIONS(31),
    [anon_sym_uptr] = ACTIONS(31),
    [anon_sym_iptrdiff] = ACTIONS(31),
    [anon_sym_uptrdiff] = ACTIONS(31),
    [anon_sym_isize] = ACTIONS(31),
    [anon_sym_usize] = ACTIONS(31),
    [anon_sym_half] = ACTIONS(31),
    [anon_sym_float] = ACTIONS(31),
    [anon_sym_double] = ACTIONS(31),
    [anon_sym_quad] = ACTIONS(31),
    [anon_sym_extern] = ACTIONS(33),
    [anon_sym_fn] = ACTIONS(35),
    [anon_sym_const] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__statement] = STATE(5),
    [sym__empty_statement] = STATE(5),
    [sym_expression_statement] = STATE(5),
    [sym__declaration_statement] = STATE(5),
    [sym_return_statement] = STATE(5),
    [sym__expression] = STATE(51),
    [sym__literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [sym_char_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [sym__string_literal] = STATE(26),
    [sym__raw_string_literal] = STATE(26),
    [sym__multiline_string_literal] = STATE(26),
    [sym_assignment_expression] = STATE(51),
    [sym_unary_expression] = STATE(51),
    [sym__prefix_expression] = STATE(27),
    [sym__postfix_expression] = STATE(27),
    [sym_binary_expression] = STATE(51),
    [sym__type] = STATE(95),
    [sym_primitive_type] = STATE(95),
    [sym__integer_type] = STATE(71),
    [sym__float_type] = STATE(71),
    [sym__type_identifier] = STATE(95),
    [sym_pointer_type] = STATE(95),
    [sym_failable_type] = STATE(95),
    [sym_function_declaration] = STATE(5),
    [sym__function_signature] = STATE(107),
    [sym_const_declaration] = STATE(5),
    [sym_var_declaration] = STATE(5),
    [aux_sym_compound_statement_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(146),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [sym_integer_literal] = ACTIONS(25),
    [sym_float_literal] = ACTIONS(25),
    [sym_nil_literal] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AMP_AMP] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_DASH_DASH] = ACTIONS(29),
    [anon_sym_PLUS_PLUS] = ACTIONS(29),
    [anon_sym_void] = ACTIONS(31),
    [anon_sym_bool] = ACTIONS(31),
    [anon_sym_ichar] = ACTIONS(31),
    [anon_sym_char] = ACTIONS(31),
    [anon_sym_short] = ACTIONS(31),
    [anon_sym_ushort] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(31),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_long] = ACTIONS(31),
    [anon_sym_ulong] = ACTIONS(31),
    [anon_sym_iptr] = ACTIONS(31),
    [anon_sym_uptr] = ACTIONS(31),
    [anon_sym_iptrdiff] = ACTIONS(31),
    [anon_sym_uptrdiff] = ACTIONS(31),
    [anon_sym_isize] = ACTIONS(31),
    [anon_sym_usize] = ACTIONS(31),
    [anon_sym_half] = ACTIONS(31),
    [anon_sym_float] = ACTIONS(31),
    [anon_sym_double] = ACTIONS(31),
    [anon_sym_quad] = ACTIONS(31),
    [anon_sym_extern] = ACTIONS(33),
    [anon_sym_fn] = ACTIONS(35),
    [anon_sym_const] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__statement] = STATE(18),
    [sym__empty_statement] = STATE(18),
    [sym_expression_statement] = STATE(18),
    [sym__declaration_statement] = STATE(18),
    [sym_return_statement] = STATE(18),
    [sym__expression] = STATE(51),
    [sym__literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [sym_char_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [sym__string_literal] = STATE(26),
    [sym__raw_string_literal] = STATE(26),
    [sym__multiline_string_literal] = STATE(26),
    [sym_assignment_expression] = STATE(51),
    [sym_unary_expression] = STATE(51),
    [sym__prefix_expression] = STATE(27),
    [sym__postfix_expression] = STATE(27),
    [sym_binary_expression] = STATE(51),
    [sym__type] = STATE(95),
    [sym_primitive_type] = STATE(95),
    [sym__integer_type] = STATE(71),
    [sym__float_type] = STATE(71),
    [sym__type_identifier] = STATE(95),
    [sym_pointer_type] = STATE(95),
    [sym_failable_type] = STATE(95),
    [sym_function_declaration] = STATE(18),
    [sym__function_signature] = STATE(107),
    [sym_const_declaration] = STATE(18),
    [sym_var_declaration] = STATE(18),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(148),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [sym_integer_literal] = ACTIONS(25),
    [sym_float_literal] = ACTIONS(25),
    [sym_nil_literal] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_AMP_AMP] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_DASH_DASH] = ACTIONS(29),
    [anon_sym_PLUS_PLUS] = ACTIONS(29),
    [anon_sym_void] = ACTIONS(31),
    [anon_sym_bool] = ACTIONS(31),
    [anon_sym_ichar] = ACTIONS(31),
    [anon_sym_char] = ACTIONS(31),
    [anon_sym_short] = ACTIONS(31),
    [anon_sym_ushort] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(31),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_long] = ACTIONS(31),
    [anon_sym_ulong] = ACTIONS(31),
    [anon_sym_iptr] = ACTIONS(31),
    [anon_sym_uptr] = ACTIONS(31),
    [anon_sym_iptrdiff] = ACTIONS(31),
    [anon_sym_uptrdiff] = ACTIONS(31),
    [anon_sym_isize] = ACTIONS(31),
    [anon_sym_usize] = ACTIONS(31),
    [anon_sym_half] = ACTIONS(31),
    [anon_sym_float] = ACTIONS(31),
    [anon_sym_double] = ACTIONS(31),
    [anon_sym_quad] = ACTIONS(31),
    [anon_sym_extern] = ACTIONS(33),
    [anon_sym_fn] = ACTIONS(35),
    [anon_sym_const] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(152), 34,
      anon_sym_return,
      sym_identifier,
      anon_sym_private,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_ichar,
      anon_sym_char,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_iptr,
      anon_sym_uptr,
      anon_sym_iptrdiff,
      anon_sym_uptrdiff,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_half,
      anon_sym_float,
      anon_sym_double,
      anon_sym_quad,
      anon_sym_extern,
      anon_sym_fn,
      anon_sym_const,
  [55] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(156), 34,
      anon_sym_return,
      sym_identifier,
      anon_sym_private,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_ichar,
      anon_sym_char,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_iptr,
      anon_sym_uptr,
      anon_sym_iptrdiff,
      anon_sym_uptrdiff,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_half,
      anon_sym_float,
      anon_sym_double,
      anon_sym_quad,
      anon_sym_extern,
      anon_sym_fn,
      anon_sym_const,
  [110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(160), 34,
      anon_sym_return,
      sym_identifier,
      anon_sym_private,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_ichar,
      anon_sym_char,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_iptr,
      anon_sym_uptr,
      anon_sym_iptrdiff,
      anon_sym_uptrdiff,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_half,
      anon_sym_float,
      anon_sym_double,
      anon_sym_quad,
      anon_sym_extern,
      anon_sym_fn,
      anon_sym_const,
  [165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(164), 34,
      anon_sym_return,
      sym_identifier,
      anon_sym_private,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_ichar,
      anon_sym_char,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_iptr,
      anon_sym_uptr,
      anon_sym_iptrdiff,
      anon_sym_uptrdiff,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_half,
      anon_sym_float,
      anon_sym_double,
      anon_sym_quad,
      anon_sym_extern,
      anon_sym_fn,
      anon_sym_const,
  [220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(168), 34,
      anon_sym_return,
      sym_identifier,
      anon_sym_private,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_ichar,
      anon_sym_char,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_iptr,
      anon_sym_uptr,
      anon_sym_iptrdiff,
      anon_sym_uptrdiff,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_half,
      anon_sym_float,
      anon_sym_double,
      anon_sym_quad,
      anon_sym_extern,
      anon_sym_fn,
      anon_sym_const,
  [275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(172), 34,
      anon_sym_return,
      sym_identifier,
      anon_sym_private,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_ichar,
      anon_sym_char,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_iptr,
      anon_sym_uptr,
      anon_sym_iptrdiff,
      anon_sym_uptrdiff,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_half,
      anon_sym_float,
      anon_sym_double,
      anon_sym_quad,
      anon_sym_extern,
      anon_sym_fn,
      anon_sym_const,
  [330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(176), 34,
      anon_sym_return,
      sym_identifier,
      anon_sym_private,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_ichar,
      anon_sym_char,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_iptr,
      anon_sym_uptr,
      anon_sym_iptrdiff,
      anon_sym_uptrdiff,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_half,
      anon_sym_float,
      anon_sym_double,
      anon_sym_quad,
      anon_sym_extern,
      anon_sym_fn,
      anon_sym_const,
  [385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(180), 34,
      anon_sym_return,
      sym_identifier,
      anon_sym_private,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_ichar,
      anon_sym_char,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_iptr,
      anon_sym_uptr,
      anon_sym_iptrdiff,
      anon_sym_uptrdiff,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_half,
      anon_sym_float,
      anon_sym_double,
      anon_sym_quad,
      anon_sym_extern,
      anon_sym_fn,
      anon_sym_const,
  [440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(184), 34,
      anon_sym_return,
      sym_identifier,
      anon_sym_private,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_ichar,
      anon_sym_char,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_iptr,
      anon_sym_uptr,
      anon_sym_iptrdiff,
      anon_sym_uptrdiff,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_half,
      anon_sym_float,
      anon_sym_double,
      anon_sym_quad,
      anon_sym_extern,
      anon_sym_fn,
      anon_sym_const,
  [495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(188), 34,
      anon_sym_return,
      sym_identifier,
      anon_sym_private,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_ichar,
      anon_sym_char,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_iptr,
      anon_sym_uptr,
      anon_sym_iptrdiff,
      anon_sym_uptrdiff,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_half,
      anon_sym_float,
      anon_sym_double,
      anon_sym_quad,
      anon_sym_extern,
      anon_sym_fn,
      anon_sym_const,
  [550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(192), 34,
      anon_sym_return,
      sym_identifier,
      anon_sym_private,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_ichar,
      anon_sym_char,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_iptr,
      anon_sym_uptr,
      anon_sym_iptrdiff,
      anon_sym_uptrdiff,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_half,
      anon_sym_float,
      anon_sym_double,
      anon_sym_quad,
      anon_sym_extern,
      anon_sym_fn,
      anon_sym_const,
  [604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 11,
      anon_sym_SEMI,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(194), 33,
      anon_sym_return,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_ichar,
      anon_sym_char,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_iptr,
      anon_sym_uptr,
      anon_sym_iptrdiff,
      anon_sym_uptrdiff,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_half,
      anon_sym_float,
      anon_sym_double,
      anon_sym_quad,
      anon_sym_extern,
      anon_sym_fn,
      anon_sym_const,
  [656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 14,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(198), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
  [701] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(212), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(214), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(204), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(210), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(208), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(202), 21,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
  [756] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(214), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(210), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(208), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(204), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(202), 21,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
  [809] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_EQ,
    ACTIONS(220), 1,
      anon_sym_AMP_AMP,
    ACTIONS(222), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(206), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(212), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(214), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(210), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(208), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(224), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(216), 15,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_RPAREN,
  [872] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(214), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(208), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(204), 8,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(202), 21,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
  [923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 14,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(228), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
  [968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 14,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(232), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
  [1013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 14,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(236), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
  [1058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 14,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(240), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
  [1103] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(204), 14,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(202), 21,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
  [1150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 14,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(244), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
  [1195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 14,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(248), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
  [1240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 14,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(252), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
  [1285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 14,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(256), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
  [1330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 14,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(260), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
  [1375] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_EQ,
    ACTIONS(206), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(212), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(214), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(210), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(208), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(224), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(202), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [1434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 14,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(264), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
  [1479] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_EQ,
    ACTIONS(220), 1,
      anon_sym_AMP_AMP,
    ACTIONS(206), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(212), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(214), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(210), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(208), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(224), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(202), 16,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [1540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(270), 14,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(268), 21,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
  [1587] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(208), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(204), 10,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(202), 21,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
  [1636] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(278), 1,
      anon_sym_STAR,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(276), 13,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(274), 20,
      anon_sym_SEMI,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1686] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_AMP_AMP,
    ACTIONS(222), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_EQ,
    ACTIONS(206), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(212), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(214), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(210), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(283), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(208), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(224), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(287), 11,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
  [1750] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_AMP_AMP,
    ACTIONS(222), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_EQ,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      aux_sym_initializer_list_repeat1,
    ACTIONS(206), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(212), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(214), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(210), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(208), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(224), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(287), 11,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
  [1818] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(27), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(121), 2,
      sym__initializer,
      sym_initializer_list,
    STATE(26), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(293), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(29), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(41), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1883] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(27), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(115), 2,
      sym__initializer,
      sym_initializer_list,
    STATE(26), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(293), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(29), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(41), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1948] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(27), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(123), 2,
      sym__initializer,
      sym_initializer_list,
    STATE(26), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(293), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(29), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(41), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2013] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(27), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(113), 2,
      sym__initializer,
      sym_initializer_list,
    STATE(26), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(293), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(29), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(41), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2078] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_AMP_AMP,
    ACTIONS(222), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_EQ,
    ACTIONS(206), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(212), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(214), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(297), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(210), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(208), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(224), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(287), 11,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
  [2141] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(27), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(26), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(299), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(29), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(42), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2205] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_AMP_AMP,
    ACTIONS(222), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_EQ,
    ACTIONS(305), 1,
      anon_sym_SEMI,
    ACTIONS(206), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(212), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(214), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(210), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(208), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(224), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(287), 11,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
  [2267] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_AMP_AMP,
    ACTIONS(222), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_EQ,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    ACTIONS(206), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(212), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(214), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(210), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(208), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(224), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(287), 11,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
  [2329] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_AMP_AMP,
    ACTIONS(222), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(285), 1,
      anon_sym_EQ,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(206), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(212), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(214), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(226), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(210), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(208), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(224), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(287), 11,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
  [2391] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(27), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(26), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(311), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(29), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(47), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2452] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(27), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(26), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(311), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(29), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(47), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2513] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(319), 1,
      anon_sym_SEMI,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(27), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(26), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(317), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(29), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(49), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2574] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(27), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(26), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(321), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(29), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(24), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2632] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(27), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(26), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(311), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(29), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(47), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2690] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(27), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(26), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(323), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(29), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(35), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2748] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(27), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(26), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(325), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(29), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(37), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2806] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(27), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(26), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(327), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(29), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(21), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2864] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(27), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(26), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(329), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(29), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(39), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2922] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(27), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(26), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(331), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(29), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(29), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2980] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    ACTIONS(337), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(71), 2,
      sym__integer_type,
      sym__float_type,
    STATE(93), 2,
      sym_parameter,
      sym_variadic_parameter,
    STATE(73), 5,
      sym__type,
      sym_primitive_type,
      sym__type_identifier,
      sym_pointer_type,
      sym_failable_type,
    ACTIONS(31), 20,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_ichar,
      anon_sym_char,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_iptr,
      anon_sym_uptr,
      anon_sym_iptrdiff,
      anon_sym_uptrdiff,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_half,
      anon_sym_float,
      anon_sym_double,
      anon_sym_quad,
  [3030] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(27), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(26), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(339), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(29), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(38), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [3088] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(27), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(26), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(341), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(29), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(50), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [3146] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(27), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(26), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(343), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(29), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(23), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [3204] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(27), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(26), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(345), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(29), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(22), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [3262] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(337), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(71), 2,
      sym__integer_type,
      sym__float_type,
    STATE(104), 2,
      sym_parameter,
      sym_variadic_parameter,
    STATE(73), 5,
      sym__type,
      sym_primitive_type,
      sym__type_identifier,
      sym_pointer_type,
      sym_failable_type,
    ACTIONS(31), 20,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_ichar,
      anon_sym_char,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_iptr,
      anon_sym_uptr,
      anon_sym_iptrdiff,
      anon_sym_uptrdiff,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_half,
      anon_sym_float,
      anon_sym_double,
      anon_sym_quad,
  [3309] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym_identifier,
    STATE(71), 2,
      sym__integer_type,
      sym__float_type,
    STATE(103), 5,
      sym__type,
      sym_primitive_type,
      sym__type_identifier,
      sym_pointer_type,
      sym_failable_type,
    ACTIONS(31), 20,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_ichar,
      anon_sym_char,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_iptr,
      anon_sym_uptr,
      anon_sym_iptrdiff,
      anon_sym_uptrdiff,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_half,
      anon_sym_float,
      anon_sym_double,
      anon_sym_quad,
  [3349] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym_identifier,
    STATE(71), 2,
      sym__integer_type,
      sym__float_type,
    STATE(94), 5,
      sym__type,
      sym_primitive_type,
      sym__type_identifier,
      sym_pointer_type,
      sym_failable_type,
    ACTIONS(31), 20,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_ichar,
      anon_sym_char,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_iptr,
      anon_sym_uptr,
      anon_sym_iptrdiff,
      anon_sym_uptrdiff,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_half,
      anon_sym_float,
      anon_sym_double,
      anon_sym_quad,
  [3389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 6,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [3401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 6,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [3413] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_AT,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_parameter_list,
    STATE(106), 1,
      sym_attribute_list,
    ACTIONS(353), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3433] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym_identifier,
    ACTIONS(363), 1,
      anon_sym_STAR,
    ACTIONS(365), 1,
      anon_sym_BANG,
    ACTIONS(367), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(361), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 6,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [3465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 6,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [3477] = 4,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(375), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(373), 2,
      aux_sym__string_literal_token1,
      sym_escape_sequence,
  [3491] = 4,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      aux_sym__multiline_string_literal_repeat1,
    ACTIONS(379), 2,
      aux_sym__multiline_string_literal_token1,
      sym_escape_sequence,
  [3505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_EQ,
    ACTIONS(272), 3,
      sym_identifier,
      anon_sym_STAR,
      anon_sym_BANG,
  [3517] = 4,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(386), 2,
      aux_sym__string_literal_token1,
      sym_escape_sequence,
  [3531] = 4,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(81), 1,
      aux_sym__multiline_string_literal_repeat1,
    ACTIONS(390), 2,
      aux_sym__multiline_string_literal_token1,
      sym_escape_sequence,
  [3545] = 4,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(77), 1,
      aux_sym__multiline_string_literal_repeat1,
    ACTIONS(394), 2,
      aux_sym__multiline_string_literal_token1,
      sym_escape_sequence,
  [3559] = 4,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(398), 2,
      aux_sym__string_literal_token1,
      sym_escape_sequence,
  [3573] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_AT,
    STATE(109), 1,
      sym_attribute_list,
    ACTIONS(401), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_AT,
  [3596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_AT,
  [3605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_initializer_list_repeat1,
  [3627] = 4,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_BQUOTE,
    ACTIONS(414), 1,
      aux_sym__raw_string_literal_token1,
    STATE(88), 1,
      aux_sym__raw_string_literal_repeat1,
  [3640] = 4,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_BQUOTE,
    ACTIONS(419), 1,
      aux_sym__raw_string_literal_token1,
    STATE(100), 1,
      aux_sym__raw_string_literal_repeat1,
  [3653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3673] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_COMMA,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_parameter_list_repeat1,
  [3686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_parameter_list_repeat1,
  [3699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_STAR,
    ACTIONS(365), 1,
      anon_sym_BANG,
    ACTIONS(436), 1,
      sym_identifier,
  [3712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_STAR,
    ACTIONS(365), 1,
      anon_sym_BANG,
    ACTIONS(438), 1,
      sym_identifier,
  [3725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3734] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_initializer_list_repeat1,
  [3747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_parameter_list_repeat1,
  [3769] = 4,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_BQUOTE,
    ACTIONS(450), 1,
      aux_sym__raw_string_literal_token1,
    STATE(88), 1,
      aux_sym__raw_string_literal_repeat1,
  [3782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_AT,
  [3791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_EQ,
    ACTIONS(454), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_STAR,
    ACTIONS(365), 1,
      anon_sym_BANG,
    ACTIONS(458), 1,
      sym_identifier,
  [3815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3823] = 2,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(460), 2,
      aux_sym_char_literal_token1,
      sym_escape_sequence,
  [3831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_compound_statement,
  [3849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_fn,
    STATE(122), 1,
      sym__function_signature,
  [3875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_identifier,
  [3906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_SEMI,
  [3913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_EQ,
  [3920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_SQUOTE,
  [3927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
  [3934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_identifier,
  [3941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
  [3948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_SEMI,
  [3955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_SEMI,
  [3962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_SEMI,
  [3969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 55,
  [SMALL_STATE(10)] = 110,
  [SMALL_STATE(11)] = 165,
  [SMALL_STATE(12)] = 220,
  [SMALL_STATE(13)] = 275,
  [SMALL_STATE(14)] = 330,
  [SMALL_STATE(15)] = 385,
  [SMALL_STATE(16)] = 440,
  [SMALL_STATE(17)] = 495,
  [SMALL_STATE(18)] = 550,
  [SMALL_STATE(19)] = 604,
  [SMALL_STATE(20)] = 656,
  [SMALL_STATE(21)] = 701,
  [SMALL_STATE(22)] = 756,
  [SMALL_STATE(23)] = 809,
  [SMALL_STATE(24)] = 872,
  [SMALL_STATE(25)] = 923,
  [SMALL_STATE(26)] = 968,
  [SMALL_STATE(27)] = 1013,
  [SMALL_STATE(28)] = 1058,
  [SMALL_STATE(29)] = 1103,
  [SMALL_STATE(30)] = 1150,
  [SMALL_STATE(31)] = 1195,
  [SMALL_STATE(32)] = 1240,
  [SMALL_STATE(33)] = 1285,
  [SMALL_STATE(34)] = 1330,
  [SMALL_STATE(35)] = 1375,
  [SMALL_STATE(36)] = 1434,
  [SMALL_STATE(37)] = 1479,
  [SMALL_STATE(38)] = 1540,
  [SMALL_STATE(39)] = 1587,
  [SMALL_STATE(40)] = 1636,
  [SMALL_STATE(41)] = 1686,
  [SMALL_STATE(42)] = 1750,
  [SMALL_STATE(43)] = 1818,
  [SMALL_STATE(44)] = 1883,
  [SMALL_STATE(45)] = 1948,
  [SMALL_STATE(46)] = 2013,
  [SMALL_STATE(47)] = 2078,
  [SMALL_STATE(48)] = 2141,
  [SMALL_STATE(49)] = 2205,
  [SMALL_STATE(50)] = 2267,
  [SMALL_STATE(51)] = 2329,
  [SMALL_STATE(52)] = 2391,
  [SMALL_STATE(53)] = 2452,
  [SMALL_STATE(54)] = 2513,
  [SMALL_STATE(55)] = 2574,
  [SMALL_STATE(56)] = 2632,
  [SMALL_STATE(57)] = 2690,
  [SMALL_STATE(58)] = 2748,
  [SMALL_STATE(59)] = 2806,
  [SMALL_STATE(60)] = 2864,
  [SMALL_STATE(61)] = 2922,
  [SMALL_STATE(62)] = 2980,
  [SMALL_STATE(63)] = 3030,
  [SMALL_STATE(64)] = 3088,
  [SMALL_STATE(65)] = 3146,
  [SMALL_STATE(66)] = 3204,
  [SMALL_STATE(67)] = 3262,
  [SMALL_STATE(68)] = 3309,
  [SMALL_STATE(69)] = 3349,
  [SMALL_STATE(70)] = 3389,
  [SMALL_STATE(71)] = 3401,
  [SMALL_STATE(72)] = 3413,
  [SMALL_STATE(73)] = 3433,
  [SMALL_STATE(74)] = 3453,
  [SMALL_STATE(75)] = 3465,
  [SMALL_STATE(76)] = 3477,
  [SMALL_STATE(77)] = 3491,
  [SMALL_STATE(78)] = 3505,
  [SMALL_STATE(79)] = 3517,
  [SMALL_STATE(80)] = 3531,
  [SMALL_STATE(81)] = 3545,
  [SMALL_STATE(82)] = 3559,
  [SMALL_STATE(83)] = 3573,
  [SMALL_STATE(84)] = 3587,
  [SMALL_STATE(85)] = 3596,
  [SMALL_STATE(86)] = 3605,
  [SMALL_STATE(87)] = 3614,
  [SMALL_STATE(88)] = 3627,
  [SMALL_STATE(89)] = 3640,
  [SMALL_STATE(90)] = 3653,
  [SMALL_STATE(91)] = 3664,
  [SMALL_STATE(92)] = 3673,
  [SMALL_STATE(93)] = 3686,
  [SMALL_STATE(94)] = 3699,
  [SMALL_STATE(95)] = 3712,
  [SMALL_STATE(96)] = 3725,
  [SMALL_STATE(97)] = 3734,
  [SMALL_STATE(98)] = 3747,
  [SMALL_STATE(99)] = 3756,
  [SMALL_STATE(100)] = 3769,
  [SMALL_STATE(101)] = 3782,
  [SMALL_STATE(102)] = 3791,
  [SMALL_STATE(103)] = 3802,
  [SMALL_STATE(104)] = 3815,
  [SMALL_STATE(105)] = 3823,
  [SMALL_STATE(106)] = 3831,
  [SMALL_STATE(107)] = 3839,
  [SMALL_STATE(108)] = 3849,
  [SMALL_STATE(109)] = 3857,
  [SMALL_STATE(110)] = 3865,
  [SMALL_STATE(111)] = 3875,
  [SMALL_STATE(112)] = 3883,
  [SMALL_STATE(113)] = 3891,
  [SMALL_STATE(114)] = 3899,
  [SMALL_STATE(115)] = 3906,
  [SMALL_STATE(116)] = 3913,
  [SMALL_STATE(117)] = 3920,
  [SMALL_STATE(118)] = 3927,
  [SMALL_STATE(119)] = 3934,
  [SMALL_STATE(120)] = 3941,
  [SMALL_STATE(121)] = 3948,
  [SMALL_STATE(122)] = 3955,
  [SMALL_STATE(123)] = 3962,
  [SMALL_STATE(124)] = 3969,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(105),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(40),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(4),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(54),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(33),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(105),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(76),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(89),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(80),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(51),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(63),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(63),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(71),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(110),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(69),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(68),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_declaration, 6, .production_id = 10),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_declaration, 6, .production_id = 10),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5, .production_id = 9),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 5, .production_id = 9),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_declaration, 5),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_declaration, 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, .production_id = 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2, .production_id = 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 2, .production_id = 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_item, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__top_level_item, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visiblitiy_modifier, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visiblitiy_modifier, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_literal, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_literal, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 5),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expression, 3, .production_id = 5),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string_literal, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_string_literal, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__postfix_expression, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__postfix_expression, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string_literal, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_string_literal, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_literal, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_literal, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefix_expression, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__prefix_expression, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), REDUCE(sym__type_identifier, 1, .production_id = 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__initializer, 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_initializer_list_repeat1, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_signature, 3, .production_id = 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_failable_type, 2),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multiline_string_literal_repeat1, 2),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_string_literal_repeat1, 2), SHIFT_REPEAT(77),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(82),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_signature, 4, .production_id = 6),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initializer_list, 5),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_initializer_list_repeat1, 2), SHIFT_REPEAT(56),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__raw_string_literal_repeat1, 2),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__raw_string_literal_repeat1, 2), SHIFT_REPEAT(88),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initializer_list, 4),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(67),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initializer_list, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initializer_list, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_signature, 4, .production_id = 7),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variadic_parameter, 3),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_signature, 5, .production_id = 8),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variadic_parameter, 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 5),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [488] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_c3(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
