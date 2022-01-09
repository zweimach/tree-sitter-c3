#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 105
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 124
#define ALIAS_COUNT 1
#define TOKEN_COUNT 84
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 11

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_return = 3,
  anon_sym_true = 4,
  anon_sym_false = 5,
  anon_sym_SQUOTE = 6,
  aux_sym_char_literal_token1 = 7,
  anon_sym_DQUOTE = 8,
  aux_sym__string_literal_token1 = 9,
  anon_sym_BQUOTE = 10,
  aux_sym__raw_string_literal_token1 = 11,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 12,
  aux_sym__multiline_string_literal_token1 = 13,
  sym_escape_sequence = 14,
  sym_integer_literal = 15,
  sym_float_literal = 16,
  sym_nil_literal = 17,
  anon_sym_EQ = 18,
  anon_sym_PLUS_EQ = 19,
  anon_sym_DASH_EQ = 20,
  anon_sym_STAR_EQ = 21,
  anon_sym_SLASH_EQ = 22,
  anon_sym_PERCENT_EQ = 23,
  anon_sym_STAR_PERCENT_EQ = 24,
  anon_sym_AMP_EQ = 25,
  anon_sym_PIPE_EQ = 26,
  anon_sym_CARET_EQ = 27,
  anon_sym_LT_LT_EQ = 28,
  anon_sym_GT_GT_EQ = 29,
  anon_sym_DASH = 30,
  anon_sym_STAR = 31,
  anon_sym_BANG = 32,
  anon_sym_TILDE = 33,
  anon_sym_AMP = 34,
  anon_sym_AMP_AMP = 35,
  anon_sym_AT = 36,
  anon_sym_DASH_DASH = 37,
  anon_sym_PLUS_PLUS = 38,
  anon_sym_PLUS = 39,
  anon_sym_SLASH = 40,
  anon_sym_PERCENT = 41,
  anon_sym_STAR_PERCENT = 42,
  anon_sym_PIPE_PIPE = 43,
  anon_sym_PIPE = 44,
  anon_sym_CARET = 45,
  anon_sym_EQ_EQ = 46,
  anon_sym_BANG_EQ = 47,
  anon_sym_GT = 48,
  anon_sym_GT_EQ = 49,
  anon_sym_LT_EQ = 50,
  anon_sym_LT = 51,
  anon_sym_LT_LT = 52,
  anon_sym_GT_GT = 53,
  anon_sym_void = 54,
  anon_sym_bool = 55,
  anon_sym_ichar = 56,
  anon_sym_char = 57,
  anon_sym_short = 58,
  anon_sym_ushort = 59,
  anon_sym_int = 60,
  anon_sym_uint = 61,
  anon_sym_long = 62,
  anon_sym_ulong = 63,
  anon_sym_iptr = 64,
  anon_sym_uptr = 65,
  anon_sym_iptrdiff = 66,
  anon_sym_uptrdiff = 67,
  anon_sym_isize = 68,
  anon_sym_usize = 69,
  anon_sym_half = 70,
  anon_sym_float = 71,
  anon_sym_double = 72,
  anon_sym_quad = 73,
  anon_sym_extern = 74,
  anon_sym_fn = 75,
  anon_sym_LBRACE = 76,
  anon_sym_RBRACE = 77,
  anon_sym_LPAREN = 78,
  anon_sym_COMMA = 79,
  anon_sym_RPAREN = 80,
  anon_sym_DOT_DOT_DOT = 81,
  anon_sym_const = 82,
  sym_comment = 83,
  sym_source_file = 84,
  sym__statement = 85,
  sym__empty_statement = 86,
  sym_expression_statement = 87,
  sym__declaration_statement = 88,
  sym_return_statement = 89,
  sym__expression = 90,
  sym__literal = 91,
  sym_boolean_literal = 92,
  sym_char_literal = 93,
  sym_string_literal = 94,
  sym__string_literal = 95,
  sym__raw_string_literal = 96,
  sym__multiline_string_literal = 97,
  sym_assignment_expression = 98,
  sym_unary_expression = 99,
  sym__prefix_expression = 100,
  sym__postfix_expression = 101,
  sym_binary_expression = 102,
  sym__type = 103,
  sym_primitive_type = 104,
  sym__integer_type = 105,
  sym__float_type = 106,
  sym__type_identifier = 107,
  sym_pointer_type = 108,
  sym_failable_type = 109,
  sym_function_declaration = 110,
  sym__function_signature = 111,
  sym_compound_statement = 112,
  sym_parameter_list = 113,
  sym_parameter = 114,
  sym_variadic_parameter = 115,
  sym_attribute_list = 116,
  sym_const_declaration = 117,
  sym_var_declaration = 118,
  aux_sym_source_file_repeat1 = 119,
  aux_sym__string_literal_repeat1 = 120,
  aux_sym__raw_string_literal_repeat1 = 121,
  aux_sym__multiline_string_literal_repeat1 = 122,
  aux_sym_parameter_list_repeat1 = 123,
  alias_sym_type_identifier = 124,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_return] = "return",
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_const] = "const",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__empty_statement] = "_empty_statement",
  [sym_expression_statement] = "expression_statement",
  [sym__declaration_statement] = "_declaration_statement",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
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
  [aux_sym__string_literal_repeat1] = "_string_literal_repeat1",
  [aux_sym__raw_string_literal_repeat1] = "_raw_string_literal_repeat1",
  [aux_sym__multiline_string_literal_repeat1] = "_multiline_string_literal_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_return] = anon_sym_return,
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_const] = anon_sym_const,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__empty_statement] = sym__empty_statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym__declaration_statement] = sym__declaration_statement,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
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
  [aux_sym__string_literal_repeat1] = aux_sym__string_literal_repeat1,
  [aux_sym__raw_string_literal_repeat1] = aux_sym__raw_string_literal_repeat1,
  [aux_sym__multiline_string_literal_repeat1] = aux_sym__multiline_string_literal_repeat1,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
      if (lookahead == '!') ADVANCE(110);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '%') ADVANCE(120);
      if (lookahead == '&') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '+') ADVANCE(118);
      if (lookahead == ',') ADVANCE(136);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead == '@') ADVANCE(115);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == '^') ADVANCE(124);
      if (lookahead == '`') ADVANCE(53);
      if (lookahead == '{') ADVANCE(133);
      if (lookahead == '|') ADVANCE(123);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead == '~') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\r') ADVANCE(61);
      if (lookahead == 'U') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(56);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0) ADVANCE(57);
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
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == '0') ADVANCE(71);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
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
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '`') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(86);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(20);
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(21);
      if (lookahead == '8') ADVANCE(65);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(65);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(24);
      if (lookahead == '6') ADVANCE(79);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(79);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(23);
      if (lookahead == '6') ADVANCE(65);
      END_STATE();
    case 21:
      if (lookahead == '4') ADVANCE(65);
      END_STATE();
    case 22:
      if (lookahead == '4') ADVANCE(79);
      END_STATE();
    case 23:
      if (lookahead == '8') ADVANCE(65);
      END_STATE();
    case 24:
      if (lookahead == '8') ADVANCE(79);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
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
      if (lookahead == '!') ADVANCE(109);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '&') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '@') ADVANCE(115);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == '`') ADVANCE(53);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead == '~') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
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
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\r') ADVANCE(61);
      if (lookahead == 'U') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(140);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(140);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token1);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(140);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__multiline_string_literal_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__multiline_string_literal_token1);
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__multiline_string_literal_token1);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(140);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__multiline_string_literal_token1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '1') ADVANCE(68);
      if (lookahead == '3') ADVANCE(67);
      if (lookahead == '6') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(75);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '2') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(75);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '2') ADVANCE(70);
      if (lookahead == '6') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '4') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(75);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '8') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(75);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(76);
      if (lookahead == 'x') ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(76);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '1') ADVANCE(20);
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(21);
      if (lookahead == '8') ADVANCE(65);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(76);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(22);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '1') ADVANCE(83);
      if (lookahead == '3') ADVANCE(82);
      if (lookahead == '6') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(92);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '2') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(92);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '2') ADVANCE(85);
      if (lookahead == '6') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(92);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '4') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(92);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '8') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'x') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(125);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_STAR_PERCENT_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '0') ADVANCE(71);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '=') ADVANCE(95);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '%') ADVANCE(121);
      if (lookahead == '=') ADVANCE(96);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(114);
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == '=') ADVANCE(94);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_STAR_PERCENT);
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '|') ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(128);
      if (lookahead == '>') ADVANCE(132);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '=') ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_COMMA);
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
      if (lookahead == 'q') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(12);
      if (lookahead == 's') ADVANCE(13);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == 'h') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(29);
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(69);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(73);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 53:
      if (lookahead == 'z') ADVANCE(76);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_nil_literal);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 64:
      if (lookahead == 'z') ADVANCE(86);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_half);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_iptr);
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_quad);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 83:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_uptr);
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_ichar);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 104:
      if (lookahead == 'f') ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(109);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(110);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_iptrdiff);
      END_STATE();
    case 111:
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
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
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
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 39},
  [46] = {.lex_state = 39},
  [47] = {.lex_state = 39},
  [48] = {.lex_state = 39},
  [49] = {.lex_state = 39},
  [50] = {.lex_state = 39},
  [51] = {.lex_state = 39},
  [52] = {.lex_state = 39},
  [53] = {.lex_state = 39},
  [54] = {.lex_state = 39},
  [55] = {.lex_state = 39},
  [56] = {.lex_state = 39},
  [57] = {.lex_state = 39},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 14},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(104),
    [sym__statement] = STATE(3),
    [sym__empty_statement] = STATE(3),
    [sym_expression_statement] = STATE(3),
    [sym__declaration_statement] = STATE(3),
    [sym_return_statement] = STATE(3),
    [sym__expression] = STATE(38),
    [sym__literal] = STATE(38),
    [sym_boolean_literal] = STATE(38),
    [sym_char_literal] = STATE(38),
    [sym_string_literal] = STATE(38),
    [sym__string_literal] = STATE(19),
    [sym__raw_string_literal] = STATE(19),
    [sym__multiline_string_literal] = STATE(19),
    [sym_assignment_expression] = STATE(38),
    [sym_unary_expression] = STATE(38),
    [sym__prefix_expression] = STATE(20),
    [sym__postfix_expression] = STATE(20),
    [sym_binary_expression] = STATE(38),
    [sym__type] = STATE(79),
    [sym_primitive_type] = STATE(79),
    [sym__integer_type] = STATE(64),
    [sym__float_type] = STATE(64),
    [sym__type_identifier] = STATE(79),
    [sym_pointer_type] = STATE(79),
    [sym_failable_type] = STATE(79),
    [sym_function_declaration] = STATE(3),
    [sym__function_signature] = STATE(96),
    [sym_const_declaration] = STATE(3),
    [sym_var_declaration] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(23),
    [sym_float_literal] = ACTIONS(23),
    [sym_nil_literal] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(25),
    [anon_sym_AMP_AMP] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_DASH_DASH] = ACTIONS(27),
    [anon_sym_PLUS_PLUS] = ACTIONS(27),
    [anon_sym_void] = ACTIONS(29),
    [anon_sym_bool] = ACTIONS(29),
    [anon_sym_ichar] = ACTIONS(29),
    [anon_sym_char] = ACTIONS(29),
    [anon_sym_short] = ACTIONS(29),
    [anon_sym_ushort] = ACTIONS(29),
    [anon_sym_int] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(29),
    [anon_sym_long] = ACTIONS(29),
    [anon_sym_ulong] = ACTIONS(29),
    [anon_sym_iptr] = ACTIONS(29),
    [anon_sym_uptr] = ACTIONS(29),
    [anon_sym_iptrdiff] = ACTIONS(29),
    [anon_sym_uptrdiff] = ACTIONS(29),
    [anon_sym_isize] = ACTIONS(29),
    [anon_sym_usize] = ACTIONS(29),
    [anon_sym_half] = ACTIONS(29),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_double] = ACTIONS(29),
    [anon_sym_quad] = ACTIONS(29),
    [anon_sym_extern] = ACTIONS(31),
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_const] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym__empty_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym__declaration_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym__expression] = STATE(38),
    [sym__literal] = STATE(38),
    [sym_boolean_literal] = STATE(38),
    [sym_char_literal] = STATE(38),
    [sym_string_literal] = STATE(38),
    [sym__string_literal] = STATE(19),
    [sym__raw_string_literal] = STATE(19),
    [sym__multiline_string_literal] = STATE(19),
    [sym_assignment_expression] = STATE(38),
    [sym_unary_expression] = STATE(38),
    [sym__prefix_expression] = STATE(20),
    [sym__postfix_expression] = STATE(20),
    [sym_binary_expression] = STATE(38),
    [sym__type] = STATE(79),
    [sym_primitive_type] = STATE(79),
    [sym__integer_type] = STATE(64),
    [sym__float_type] = STATE(64),
    [sym__type_identifier] = STATE(79),
    [sym_pointer_type] = STATE(79),
    [sym_failable_type] = STATE(79),
    [sym_function_declaration] = STATE(2),
    [sym__function_signature] = STATE(96),
    [sym_const_declaration] = STATE(2),
    [sym_var_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_SEMI] = ACTIONS(42),
    [anon_sym_return] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(48),
    [anon_sym_false] = ACTIONS(48),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(54),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(60),
    [sym_integer_literal] = ACTIONS(63),
    [sym_float_literal] = ACTIONS(63),
    [sym_nil_literal] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(66),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(69),
    [anon_sym_AMP] = ACTIONS(66),
    [anon_sym_AMP_AMP] = ACTIONS(69),
    [anon_sym_AT] = ACTIONS(69),
    [anon_sym_DASH_DASH] = ACTIONS(69),
    [anon_sym_PLUS_PLUS] = ACTIONS(69),
    [anon_sym_void] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_ichar] = ACTIONS(72),
    [anon_sym_char] = ACTIONS(72),
    [anon_sym_short] = ACTIONS(72),
    [anon_sym_ushort] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(72),
    [anon_sym_uint] = ACTIONS(72),
    [anon_sym_long] = ACTIONS(72),
    [anon_sym_ulong] = ACTIONS(72),
    [anon_sym_iptr] = ACTIONS(72),
    [anon_sym_uptr] = ACTIONS(72),
    [anon_sym_iptrdiff] = ACTIONS(72),
    [anon_sym_uptrdiff] = ACTIONS(72),
    [anon_sym_isize] = ACTIONS(72),
    [anon_sym_usize] = ACTIONS(72),
    [anon_sym_half] = ACTIONS(72),
    [anon_sym_float] = ACTIONS(72),
    [anon_sym_double] = ACTIONS(72),
    [anon_sym_quad] = ACTIONS(72),
    [anon_sym_extern] = ACTIONS(75),
    [anon_sym_fn] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_const] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym__empty_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym__declaration_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym__expression] = STATE(38),
    [sym__literal] = STATE(38),
    [sym_boolean_literal] = STATE(38),
    [sym_char_literal] = STATE(38),
    [sym_string_literal] = STATE(38),
    [sym__string_literal] = STATE(19),
    [sym__raw_string_literal] = STATE(19),
    [sym__multiline_string_literal] = STATE(19),
    [sym_assignment_expression] = STATE(38),
    [sym_unary_expression] = STATE(38),
    [sym__prefix_expression] = STATE(20),
    [sym__postfix_expression] = STATE(20),
    [sym_binary_expression] = STATE(38),
    [sym__type] = STATE(79),
    [sym_primitive_type] = STATE(79),
    [sym__integer_type] = STATE(64),
    [sym__float_type] = STATE(64),
    [sym__type_identifier] = STATE(79),
    [sym_pointer_type] = STATE(79),
    [sym_failable_type] = STATE(79),
    [sym_function_declaration] = STATE(2),
    [sym__function_signature] = STATE(96),
    [sym_const_declaration] = STATE(2),
    [sym_var_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(86),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(23),
    [sym_float_literal] = ACTIONS(23),
    [sym_nil_literal] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(25),
    [anon_sym_AMP_AMP] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_DASH_DASH] = ACTIONS(27),
    [anon_sym_PLUS_PLUS] = ACTIONS(27),
    [anon_sym_void] = ACTIONS(29),
    [anon_sym_bool] = ACTIONS(29),
    [anon_sym_ichar] = ACTIONS(29),
    [anon_sym_char] = ACTIONS(29),
    [anon_sym_short] = ACTIONS(29),
    [anon_sym_ushort] = ACTIONS(29),
    [anon_sym_int] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(29),
    [anon_sym_long] = ACTIONS(29),
    [anon_sym_ulong] = ACTIONS(29),
    [anon_sym_iptr] = ACTIONS(29),
    [anon_sym_uptr] = ACTIONS(29),
    [anon_sym_iptrdiff] = ACTIONS(29),
    [anon_sym_uptrdiff] = ACTIONS(29),
    [anon_sym_isize] = ACTIONS(29),
    [anon_sym_usize] = ACTIONS(29),
    [anon_sym_half] = ACTIONS(29),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_double] = ACTIONS(29),
    [anon_sym_quad] = ACTIONS(29),
    [anon_sym_extern] = ACTIONS(31),
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_const] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__statement] = STATE(5),
    [sym__empty_statement] = STATE(5),
    [sym_expression_statement] = STATE(5),
    [sym__declaration_statement] = STATE(5),
    [sym_return_statement] = STATE(5),
    [sym__expression] = STATE(38),
    [sym__literal] = STATE(38),
    [sym_boolean_literal] = STATE(38),
    [sym_char_literal] = STATE(38),
    [sym_string_literal] = STATE(38),
    [sym__string_literal] = STATE(19),
    [sym__raw_string_literal] = STATE(19),
    [sym__multiline_string_literal] = STATE(19),
    [sym_assignment_expression] = STATE(38),
    [sym_unary_expression] = STATE(38),
    [sym__prefix_expression] = STATE(20),
    [sym__postfix_expression] = STATE(20),
    [sym_binary_expression] = STATE(38),
    [sym__type] = STATE(79),
    [sym_primitive_type] = STATE(79),
    [sym__integer_type] = STATE(64),
    [sym__float_type] = STATE(64),
    [sym__type_identifier] = STATE(79),
    [sym_pointer_type] = STATE(79),
    [sym_failable_type] = STATE(79),
    [sym_function_declaration] = STATE(5),
    [sym__function_signature] = STATE(96),
    [sym_const_declaration] = STATE(5),
    [sym_var_declaration] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(88),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(23),
    [sym_float_literal] = ACTIONS(23),
    [sym_nil_literal] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(25),
    [anon_sym_AMP_AMP] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_DASH_DASH] = ACTIONS(27),
    [anon_sym_PLUS_PLUS] = ACTIONS(27),
    [anon_sym_void] = ACTIONS(29),
    [anon_sym_bool] = ACTIONS(29),
    [anon_sym_ichar] = ACTIONS(29),
    [anon_sym_char] = ACTIONS(29),
    [anon_sym_short] = ACTIONS(29),
    [anon_sym_ushort] = ACTIONS(29),
    [anon_sym_int] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(29),
    [anon_sym_long] = ACTIONS(29),
    [anon_sym_ulong] = ACTIONS(29),
    [anon_sym_iptr] = ACTIONS(29),
    [anon_sym_uptr] = ACTIONS(29),
    [anon_sym_iptrdiff] = ACTIONS(29),
    [anon_sym_uptrdiff] = ACTIONS(29),
    [anon_sym_isize] = ACTIONS(29),
    [anon_sym_usize] = ACTIONS(29),
    [anon_sym_half] = ACTIONS(29),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_double] = ACTIONS(29),
    [anon_sym_quad] = ACTIONS(29),
    [anon_sym_extern] = ACTIONS(31),
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(90),
    [anon_sym_const] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__statement] = STATE(2),
    [sym__empty_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym__declaration_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym__expression] = STATE(38),
    [sym__literal] = STATE(38),
    [sym_boolean_literal] = STATE(38),
    [sym_char_literal] = STATE(38),
    [sym_string_literal] = STATE(38),
    [sym__string_literal] = STATE(19),
    [sym__raw_string_literal] = STATE(19),
    [sym__multiline_string_literal] = STATE(19),
    [sym_assignment_expression] = STATE(38),
    [sym_unary_expression] = STATE(38),
    [sym__prefix_expression] = STATE(20),
    [sym__postfix_expression] = STATE(20),
    [sym_binary_expression] = STATE(38),
    [sym__type] = STATE(79),
    [sym_primitive_type] = STATE(79),
    [sym__integer_type] = STATE(64),
    [sym__float_type] = STATE(64),
    [sym__type_identifier] = STATE(79),
    [sym_pointer_type] = STATE(79),
    [sym_failable_type] = STATE(79),
    [sym_function_declaration] = STATE(2),
    [sym__function_signature] = STATE(96),
    [sym_const_declaration] = STATE(2),
    [sym_var_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(86),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(23),
    [sym_float_literal] = ACTIONS(23),
    [sym_nil_literal] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(25),
    [anon_sym_AMP_AMP] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_DASH_DASH] = ACTIONS(27),
    [anon_sym_PLUS_PLUS] = ACTIONS(27),
    [anon_sym_void] = ACTIONS(29),
    [anon_sym_bool] = ACTIONS(29),
    [anon_sym_ichar] = ACTIONS(29),
    [anon_sym_char] = ACTIONS(29),
    [anon_sym_short] = ACTIONS(29),
    [anon_sym_ushort] = ACTIONS(29),
    [anon_sym_int] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(29),
    [anon_sym_long] = ACTIONS(29),
    [anon_sym_ulong] = ACTIONS(29),
    [anon_sym_iptr] = ACTIONS(29),
    [anon_sym_uptr] = ACTIONS(29),
    [anon_sym_iptrdiff] = ACTIONS(29),
    [anon_sym_uptrdiff] = ACTIONS(29),
    [anon_sym_isize] = ACTIONS(29),
    [anon_sym_usize] = ACTIONS(29),
    [anon_sym_half] = ACTIONS(29),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_double] = ACTIONS(29),
    [anon_sym_quad] = ACTIONS(29),
    [anon_sym_extern] = ACTIONS(31),
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(92),
    [anon_sym_const] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 13,
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
      anon_sym_RBRACE,
    ACTIONS(96), 33,
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
  [54] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 13,
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
      anon_sym_RBRACE,
    ACTIONS(100), 33,
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
  [108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 13,
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
      anon_sym_RBRACE,
    ACTIONS(104), 33,
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
  [162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 13,
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
      anon_sym_RBRACE,
    ACTIONS(108), 33,
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
  [216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 13,
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
      anon_sym_RBRACE,
    ACTIONS(112), 33,
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
  [270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 13,
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
      anon_sym_RBRACE,
    ACTIONS(116), 33,
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
  [324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 13,
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
      anon_sym_RBRACE,
    ACTIONS(120), 33,
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
  [378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 13,
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
      anon_sym_RBRACE,
    ACTIONS(124), 33,
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
  [432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 13,
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
      anon_sym_RBRACE,
    ACTIONS(128), 33,
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
  [486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 13,
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
      anon_sym_RBRACE,
    ACTIONS(132), 33,
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
  [540] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(140), 1,
      anon_sym_STAR,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(138), 13,
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
    ACTIONS(136), 20,
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
  [590] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(149), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(147), 10,
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
    ACTIONS(145), 19,
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
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
  [637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(155), 14,
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
    ACTIONS(153), 19,
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
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
  [682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 14,
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
    ACTIONS(157), 21,
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
      anon_sym_RPAREN,
  [725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 14,
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
    ACTIONS(161), 21,
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
      anon_sym_RPAREN,
  [768] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_EQ,
    ACTIONS(173), 1,
      anon_sym_AMP_AMP,
    ACTIONS(175), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(151), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(169), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(171), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(149), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(177), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(165), 13,
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
      anon_sym_RPAREN,
  [829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 14,
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
    ACTIONS(183), 21,
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
      anon_sym_RPAREN,
  [872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 14,
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
    ACTIONS(187), 21,
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
      anon_sym_RPAREN,
  [915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 14,
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
    ACTIONS(191), 21,
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
      anon_sym_RPAREN,
  [958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 14,
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
    ACTIONS(195), 21,
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
      anon_sym_RPAREN,
  [1001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 14,
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
    ACTIONS(199), 21,
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
      anon_sym_RPAREN,
  [1044] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(169), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(181), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(147), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(171), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(149), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(145), 19,
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
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
  [1097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 14,
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
    ACTIONS(203), 21,
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
      anon_sym_RPAREN,
  [1140] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(181), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(171), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(149), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(147), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(145), 19,
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
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
  [1191] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_EQ,
    ACTIONS(173), 1,
      anon_sym_AMP_AMP,
    ACTIONS(151), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(169), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(171), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(149), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(177), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(145), 14,
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
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [1250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 14,
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
    ACTIONS(207), 21,
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
      anon_sym_RPAREN,
  [1293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 14,
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
    ACTIONS(211), 21,
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
      anon_sym_RPAREN,
  [1336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 14,
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
    ACTIONS(215), 21,
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
      anon_sym_RPAREN,
  [1379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(147), 14,
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
    ACTIONS(145), 19,
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
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
  [1424] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(181), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(149), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(147), 8,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(145), 19,
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
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
  [1473] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_EQ,
    ACTIONS(151), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(169), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(171), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(149), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(177), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(145), 15,
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
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [1530] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_AMP_AMP,
    ACTIONS(175), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(151), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(169), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(171), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(149), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(177), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(223), 11,
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
  [1592] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_AMP_AMP,
    ACTIONS(175), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    ACTIONS(151), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(169), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(171), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(149), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(177), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(223), 11,
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
  [1654] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_AMP_AMP,
    ACTIONS(175), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(227), 1,
      anon_sym_SEMI,
    ACTIONS(151), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(169), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(171), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(149), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(177), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(223), 11,
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
  [1716] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_AMP_AMP,
    ACTIONS(175), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    ACTIONS(151), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(169), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(171), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(149), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(177), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(223), 11,
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
  [1778] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_AMP_AMP,
    ACTIONS(175), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(231), 1,
      anon_sym_SEMI,
    ACTIONS(151), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(169), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(171), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(149), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(177), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(223), 11,
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
  [1840] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_AMP_AMP,
    ACTIONS(175), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(233), 1,
      anon_sym_SEMI,
    ACTIONS(151), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(169), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(171), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(149), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(177), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(223), 11,
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
  [1902] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(237), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(20), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(19), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(235), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(27), 7,
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
  [1963] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    ACTIONS(243), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(64), 2,
      sym__integer_type,
      sym__float_type,
    STATE(87), 2,
      sym_parameter,
      sym_variadic_parameter,
    STATE(63), 5,
      sym__type,
      sym_primitive_type,
      sym__type_identifier,
      sym_pointer_type,
      sym_failable_type,
    ACTIONS(29), 20,
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
  [2013] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(20), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(19), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(245), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(27), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(27), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2071] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(20), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(19), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(247), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(27), 7,
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
  [2129] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(20), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(19), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(249), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(27), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(40), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2187] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(20), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(19), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(251), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(27), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(18), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2245] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(20), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(19), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(253), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(27), 7,
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
  [2303] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(20), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(19), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(255), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(27), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(34), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2361] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(20), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(19), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(257), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(27), 7,
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
  [2419] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(20), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(19), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(259), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(27), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(36), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2477] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(20), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(19), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(261), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(27), 7,
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
  [2535] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(20), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(19), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(263), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(27), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(30), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2593] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(20), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(19), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(265), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(27), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(17), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2651] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(20), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(19), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(267), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(27), 7,
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
  [2709] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(20), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(19), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(269), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(27), 7,
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
  [2767] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(243), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(64), 2,
      sym__integer_type,
      sym__float_type,
    STATE(95), 2,
      sym_parameter,
      sym_variadic_parameter,
    STATE(63), 5,
      sym__type,
      sym_primitive_type,
      sym__type_identifier,
      sym_pointer_type,
      sym_failable_type,
    ACTIONS(29), 20,
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
  [2814] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym_identifier,
    STATE(64), 2,
      sym__integer_type,
      sym__float_type,
    STATE(86), 5,
      sym__type,
      sym_primitive_type,
      sym__type_identifier,
      sym_pointer_type,
      sym_failable_type,
    ACTIONS(29), 20,
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
  [2854] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    STATE(64), 2,
      sym__integer_type,
      sym__float_type,
    STATE(76), 5,
      sym__type,
      sym_primitive_type,
      sym__type_identifier,
      sym_pointer_type,
      sym_failable_type,
    ACTIONS(29), 20,
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
  [2894] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_AT,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      sym_parameter_list,
    STATE(89), 1,
      sym_attribute_list,
    ACTIONS(273), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 6,
      sym_identifier,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [2926] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_STAR,
    ACTIONS(283), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(285), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 6,
      sym_identifier,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [2958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 6,
      sym_identifier,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [2970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 6,
      sym_identifier,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [2982] = 4,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(297), 2,
      aux_sym__string_literal_token1,
      sym_escape_sequence,
  [2996] = 4,
    ACTIONS(299), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(72), 1,
      aux_sym__multiline_string_literal_repeat1,
    ACTIONS(303), 2,
      aux_sym__multiline_string_literal_token1,
      sym_escape_sequence,
  [3010] = 4,
    ACTIONS(299), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(307), 2,
      aux_sym__string_literal_token1,
      sym_escape_sequence,
  [3024] = 4,
    ACTIONS(299), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(70), 1,
      aux_sym__multiline_string_literal_repeat1,
    ACTIONS(312), 2,
      aux_sym__multiline_string_literal_token1,
      sym_escape_sequence,
  [3038] = 4,
    ACTIONS(299), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(317), 2,
      aux_sym__string_literal_token1,
      sym_escape_sequence,
  [3052] = 4,
    ACTIONS(299), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(70), 1,
      aux_sym__multiline_string_literal_repeat1,
    ACTIONS(321), 2,
      aux_sym__multiline_string_literal_token1,
      sym_escape_sequence,
  [3066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_AT,
    STATE(88), 1,
      sym_attribute_list,
    ACTIONS(323), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_EQ,
    ACTIONS(134), 3,
      sym_identifier,
      anon_sym_STAR,
      anon_sym_BANG,
  [3092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 3,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_LBRACE,
  [3101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_STAR,
    ACTIONS(283), 1,
      anon_sym_BANG,
    ACTIONS(329), 1,
      sym_identifier,
  [3114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_parameter_list_repeat1,
  [3127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 3,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_LBRACE,
  [3136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_STAR,
    ACTIONS(283), 1,
      anon_sym_BANG,
    ACTIONS(338), 1,
      sym_identifier,
  [3149] = 4,
    ACTIONS(299), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_BQUOTE,
    ACTIONS(342), 1,
      aux_sym__raw_string_literal_token1,
    STATE(82), 1,
      aux_sym__raw_string_literal_repeat1,
  [3162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_parameter_list_repeat1,
  [3175] = 4,
    ACTIONS(299), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_BQUOTE,
    ACTIONS(350), 1,
      aux_sym__raw_string_literal_token1,
    STATE(85), 1,
      aux_sym__raw_string_literal_repeat1,
  [3188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(352), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 3,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_LBRACE,
  [3208] = 4,
    ACTIONS(299), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_BQUOTE,
    ACTIONS(360), 1,
      aux_sym__raw_string_literal_token1,
    STATE(85), 1,
      aux_sym__raw_string_literal_repeat1,
  [3221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_STAR,
    ACTIONS(283), 1,
      anon_sym_BANG,
    ACTIONS(363), 1,
      sym_identifier,
  [3234] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_parameter_list_repeat1,
  [3247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_fn,
    STATE(102), 1,
      sym__function_signature,
  [3273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3289] = 2,
    ACTIONS(299), 1,
      sym_comment,
    ACTIONS(377), 2,
      aux_sym_char_literal_token1,
      sym_escape_sequence,
  [3297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_compound_statement,
  [3323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [3331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_EQ,
  [3338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_SQUOTE,
  [3345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym_identifier,
  [3352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym_identifier,
  [3359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_SEMI,
  [3366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_EQ,
  [3373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 54,
  [SMALL_STATE(8)] = 108,
  [SMALL_STATE(9)] = 162,
  [SMALL_STATE(10)] = 216,
  [SMALL_STATE(11)] = 270,
  [SMALL_STATE(12)] = 324,
  [SMALL_STATE(13)] = 378,
  [SMALL_STATE(14)] = 432,
  [SMALL_STATE(15)] = 486,
  [SMALL_STATE(16)] = 540,
  [SMALL_STATE(17)] = 590,
  [SMALL_STATE(18)] = 637,
  [SMALL_STATE(19)] = 682,
  [SMALL_STATE(20)] = 725,
  [SMALL_STATE(21)] = 768,
  [SMALL_STATE(22)] = 829,
  [SMALL_STATE(23)] = 872,
  [SMALL_STATE(24)] = 915,
  [SMALL_STATE(25)] = 958,
  [SMALL_STATE(26)] = 1001,
  [SMALL_STATE(27)] = 1044,
  [SMALL_STATE(28)] = 1097,
  [SMALL_STATE(29)] = 1140,
  [SMALL_STATE(30)] = 1191,
  [SMALL_STATE(31)] = 1250,
  [SMALL_STATE(32)] = 1293,
  [SMALL_STATE(33)] = 1336,
  [SMALL_STATE(34)] = 1379,
  [SMALL_STATE(35)] = 1424,
  [SMALL_STATE(36)] = 1473,
  [SMALL_STATE(37)] = 1530,
  [SMALL_STATE(38)] = 1592,
  [SMALL_STATE(39)] = 1654,
  [SMALL_STATE(40)] = 1716,
  [SMALL_STATE(41)] = 1778,
  [SMALL_STATE(42)] = 1840,
  [SMALL_STATE(43)] = 1902,
  [SMALL_STATE(44)] = 1963,
  [SMALL_STATE(45)] = 2013,
  [SMALL_STATE(46)] = 2071,
  [SMALL_STATE(47)] = 2129,
  [SMALL_STATE(48)] = 2187,
  [SMALL_STATE(49)] = 2245,
  [SMALL_STATE(50)] = 2303,
  [SMALL_STATE(51)] = 2361,
  [SMALL_STATE(52)] = 2419,
  [SMALL_STATE(53)] = 2477,
  [SMALL_STATE(54)] = 2535,
  [SMALL_STATE(55)] = 2593,
  [SMALL_STATE(56)] = 2651,
  [SMALL_STATE(57)] = 2709,
  [SMALL_STATE(58)] = 2767,
  [SMALL_STATE(59)] = 2814,
  [SMALL_STATE(60)] = 2854,
  [SMALL_STATE(61)] = 2894,
  [SMALL_STATE(62)] = 2914,
  [SMALL_STATE(63)] = 2926,
  [SMALL_STATE(64)] = 2946,
  [SMALL_STATE(65)] = 2958,
  [SMALL_STATE(66)] = 2970,
  [SMALL_STATE(67)] = 2982,
  [SMALL_STATE(68)] = 2996,
  [SMALL_STATE(69)] = 3010,
  [SMALL_STATE(70)] = 3024,
  [SMALL_STATE(71)] = 3038,
  [SMALL_STATE(72)] = 3052,
  [SMALL_STATE(73)] = 3066,
  [SMALL_STATE(74)] = 3080,
  [SMALL_STATE(75)] = 3092,
  [SMALL_STATE(76)] = 3101,
  [SMALL_STATE(77)] = 3114,
  [SMALL_STATE(78)] = 3127,
  [SMALL_STATE(79)] = 3136,
  [SMALL_STATE(80)] = 3149,
  [SMALL_STATE(81)] = 3162,
  [SMALL_STATE(82)] = 3175,
  [SMALL_STATE(83)] = 3188,
  [SMALL_STATE(84)] = 3199,
  [SMALL_STATE(85)] = 3208,
  [SMALL_STATE(86)] = 3221,
  [SMALL_STATE(87)] = 3234,
  [SMALL_STATE(88)] = 3247,
  [SMALL_STATE(89)] = 3255,
  [SMALL_STATE(90)] = 3263,
  [SMALL_STATE(91)] = 3273,
  [SMALL_STATE(92)] = 3281,
  [SMALL_STATE(93)] = 3289,
  [SMALL_STATE(94)] = 3297,
  [SMALL_STATE(95)] = 3305,
  [SMALL_STATE(96)] = 3313,
  [SMALL_STATE(97)] = 3323,
  [SMALL_STATE(98)] = 3331,
  [SMALL_STATE(99)] = 3338,
  [SMALL_STATE(100)] = 3345,
  [SMALL_STATE(101)] = 3352,
  [SMALL_STATE(102)] = 3359,
  [SMALL_STATE(103)] = 3366,
  [SMALL_STATE(104)] = 3373,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2, .production_id = 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 2, .production_id = 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_declaration, 6, .production_id = 10),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_declaration, 6, .production_id = 10),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5, .production_id = 9),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 5, .production_id = 9),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, .production_id = 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_declaration, 5),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_declaration, 5),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), REDUCE(sym__type_identifier, 1, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefix_expression, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__prefix_expression, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 5),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expression, 3, .production_id = 5),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string_literal, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_string_literal, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_literal, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_literal, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__postfix_expression, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__postfix_expression, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_literal, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_literal, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string_literal, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_string_literal, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_signature, 3, .production_id = 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_failable_type, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(69),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multiline_string_literal_repeat1, 2),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_string_literal_repeat1, 2), SHIFT_REPEAT(70),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_signature, 4, .production_id = 6),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(58),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__raw_string_literal_repeat1, 2),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__raw_string_literal_repeat1, 2), SHIFT_REPEAT(85),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_signature, 5, .production_id = 8),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_signature, 4, .production_id = 7),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variadic_parameter, 1),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variadic_parameter, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 5),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [397] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
