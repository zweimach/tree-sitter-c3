#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 1
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_true = 3,
  anon_sym_false = 4,
  anon_sym_SQUOTE = 5,
  aux_sym_char_literal_token1 = 6,
  anon_sym_DQUOTE = 7,
  aux_sym__string_literal_token1 = 8,
  anon_sym_BQUOTE = 9,
  aux_sym__raw_string_literal_token1 = 10,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 11,
  aux_sym__multiline_string_literal_token1 = 12,
  sym_escape_sequence = 13,
  sym_integer_literal = 14,
  sym_float_literal = 15,
  sym_nil_literal = 16,
  anon_sym_EQ = 17,
  anon_sym_PLUS_EQ = 18,
  anon_sym_DASH_EQ = 19,
  anon_sym_STAR_EQ = 20,
  anon_sym_SLASH_EQ = 21,
  anon_sym_PERCENT_EQ = 22,
  anon_sym_STAR_PERCENT_EQ = 23,
  anon_sym_AMP_EQ = 24,
  anon_sym_PIPE_EQ = 25,
  anon_sym_CARET_EQ = 26,
  anon_sym_LT_LT_EQ = 27,
  anon_sym_GT_GT_EQ = 28,
  anon_sym_DASH = 29,
  anon_sym_STAR = 30,
  anon_sym_BANG = 31,
  anon_sym_TILDE = 32,
  anon_sym_AMP = 33,
  anon_sym_AMP_AMP = 34,
  anon_sym_AT = 35,
  anon_sym_DASH_DASH = 36,
  anon_sym_PLUS_PLUS = 37,
  anon_sym_PLUS = 38,
  anon_sym_SLASH = 39,
  anon_sym_PERCENT = 40,
  anon_sym_STAR_PERCENT = 41,
  anon_sym_PIPE_PIPE = 42,
  anon_sym_PIPE = 43,
  anon_sym_CARET = 44,
  anon_sym_EQ_EQ = 45,
  anon_sym_BANG_EQ = 46,
  anon_sym_GT = 47,
  anon_sym_GT_EQ = 48,
  anon_sym_LT_EQ = 49,
  anon_sym_LT = 50,
  anon_sym_LT_LT = 51,
  anon_sym_GT_GT = 52,
  anon_sym_bool = 53,
  anon_sym_ichar = 54,
  anon_sym_char = 55,
  anon_sym_short = 56,
  anon_sym_ushort = 57,
  anon_sym_int = 58,
  anon_sym_uint = 59,
  anon_sym_long = 60,
  anon_sym_ulong = 61,
  anon_sym_iptr = 62,
  anon_sym_uptr = 63,
  anon_sym_iptrdiff = 64,
  anon_sym_uptrdiff = 65,
  anon_sym_isize = 66,
  anon_sym_usize = 67,
  anon_sym_half = 68,
  anon_sym_float = 69,
  anon_sym_double = 70,
  anon_sym_quad = 71,
  anon_sym_const = 72,
  sym_comment = 73,
  sym_source_file = 74,
  sym__statement = 75,
  sym__empty_statement = 76,
  sym_expression_statement = 77,
  sym__declaration_statement = 78,
  sym__expression = 79,
  sym__literal = 80,
  sym_boolean_literal = 81,
  sym_char_literal = 82,
  sym_string_literal = 83,
  sym__string_literal = 84,
  sym__raw_string_literal = 85,
  sym__multiline_string_literal = 86,
  sym_assignment_expression = 87,
  sym_unary_expression = 88,
  sym__prefix_expression = 89,
  sym__postfix_expression = 90,
  sym_binary_expression = 91,
  sym__type = 92,
  sym_primitive_type = 93,
  sym__integer_type = 94,
  sym__float_type = 95,
  sym__type_identifier = 96,
  sym_pointer_type = 97,
  sym_const_declaration = 98,
  sym_var_declaration = 99,
  aux_sym_source_file_repeat1 = 100,
  aux_sym__string_literal_repeat1 = 101,
  aux_sym__raw_string_literal_repeat1 = 102,
  aux_sym__multiline_string_literal_repeat1 = 103,
  alias_sym_type_identifier = 104,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
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
  [anon_sym_const] = "const",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__empty_statement] = "_empty_statement",
  [sym_expression_statement] = "expression_statement",
  [sym__declaration_statement] = "_declaration_statement",
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
  [sym_const_declaration] = "const_declaration",
  [sym_var_declaration] = "var_declaration",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__string_literal_repeat1] = "_string_literal_repeat1",
  [aux_sym__raw_string_literal_repeat1] = "_raw_string_literal_repeat1",
  [aux_sym__multiline_string_literal_repeat1] = "_multiline_string_literal_repeat1",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [anon_sym_const] = anon_sym_const,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__empty_statement] = sym__empty_statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym__declaration_statement] = sym__declaration_statement,
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
  [sym_const_declaration] = sym_const_declaration,
  [sym_var_declaration] = sym_var_declaration,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__string_literal_repeat1] = aux_sym__string_literal_repeat1,
  [aux_sym__raw_string_literal_repeat1] = aux_sym__raw_string_literal_repeat1,
  [aux_sym__multiline_string_literal_repeat1] = aux_sym__multiline_string_literal_repeat1,
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
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_left = 1,
  field_operator = 2,
  field_right = 3,
  field_type = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 3},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [3] =
    {field_type, 0},
    {field_value, 3},
  [5] =
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
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(112);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '%') ADVANCE(122);
      if (lookahead == '&') ADVANCE(115);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == '>') ADVANCE(129);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == '^') ADVANCE(126);
      if (lookahead == '`') ADVANCE(55);
      if (lookahead == '|') ADVANCE(125);
      if (lookahead == '~') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(6)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(63);
      if (lookahead == 'U') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead == 'x') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(46);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '%') ADVANCE(122);
      if (lookahead == '&') ADVANCE(115);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == '>') ADVANCE(129);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(126);
      if (lookahead == '|') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(58);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(136);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == '0') ADVANCE(73);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '`') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(88);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == '3') ADVANCE(18);
      if (lookahead == '6') ADVANCE(22);
      if (lookahead == '8') ADVANCE(67);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(67);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(25);
      if (lookahead == '6') ADVANCE(81);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(81);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(24);
      if (lookahead == '6') ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == '4') ADVANCE(67);
      END_STATE();
    case 23:
      if (lookahead == '4') ADVANCE(81);
      END_STATE();
    case 24:
      if (lookahead == '8') ADVANCE(67);
      END_STATE();
    case 25:
      if (lookahead == '8') ADVANCE(81);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(128);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(136);
      if (lookahead == '\r') ADVANCE(137);
      END_STATE();
    case 37:
      if (eof) ADVANCE(42);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 38:
      if (eof) ADVANCE(42);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(37)
      END_STATE();
    case 39:
      if (eof) ADVANCE(42);
      if (lookahead == '\n') SKIP(41)
      END_STATE();
    case 40:
      if (eof) ADVANCE(42);
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '\r') SKIP(39)
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(111);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '&') ADVANCE(114);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == '\\') SKIP(40)
      if (lookahead == '`') ADVANCE(55);
      if (lookahead == '~') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(63);
      if (lookahead == 'U') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead == 'x') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(136);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(7);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(136);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token1);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(136);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__multiline_string_literal_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__multiline_string_literal_token1);
      if (lookahead == '"') ADVANCE(7);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__multiline_string_literal_token1);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(136);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__multiline_string_literal_token1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '1') ADVANCE(70);
      if (lookahead == '3') ADVANCE(69);
      if (lookahead == '6') ADVANCE(71);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(77);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '2') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(77);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '2') ADVANCE(72);
      if (lookahead == '6') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(77);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '4') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(77);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '8') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(77);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == 'x') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == '3') ADVANCE(18);
      if (lookahead == '6') ADVANCE(22);
      if (lookahead == '8') ADVANCE(67);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(23);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '1') ADVANCE(85);
      if (lookahead == '3') ADVANCE(84);
      if (lookahead == '6') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(94);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '2') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(94);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '2') ADVANCE(87);
      if (lookahead == '6') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(94);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '4') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(94);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '8') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(94);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'x') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(127);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_STAR_PERCENT_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '0') ADVANCE(73);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '%') ADVANCE(123);
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(128);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(116);
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == '=') ADVANCE(96);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_STAR_PERCENT);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(103);
      if (lookahead == '|') ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '>') ADVANCE(134);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(106);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(36);
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
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'h') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 'q') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(14)
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'h') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(24);
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'h') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(59);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 45:
      if (lookahead == 'z') ADVANCE(65);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_nil_literal);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 55:
      if (lookahead == 'z') ADVANCE(74);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_half);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_iptr);
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_quad);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_uptr);
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_ichar);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 88:
      if (lookahead == 'f') ADVANCE(91);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 91:
      if (lookahead == 'f') ADVANCE(93);
      END_STATE();
    case 92:
      if (lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_iptrdiff);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_uptrdiff);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 41},
  [2] = {.lex_state = 41},
  [3] = {.lex_state = 41},
  [4] = {.lex_state = 41},
  [5] = {.lex_state = 41},
  [6] = {.lex_state = 41},
  [7] = {.lex_state = 41},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 41},
  [34] = {.lex_state = 41},
  [35] = {.lex_state = 41},
  [36] = {.lex_state = 41},
  [37] = {.lex_state = 41},
  [38] = {.lex_state = 41},
  [39] = {.lex_state = 41},
  [40] = {.lex_state = 41},
  [41] = {.lex_state = 41},
  [42] = {.lex_state = 41},
  [43] = {.lex_state = 41},
  [44] = {.lex_state = 41},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [anon_sym_const] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(62),
    [sym__statement] = STATE(2),
    [sym__empty_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym__declaration_statement] = STATE(2),
    [sym__expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_boolean_literal] = STATE(12),
    [sym_char_literal] = STATE(12),
    [sym_string_literal] = STATE(12),
    [sym__string_literal] = STATE(13),
    [sym__raw_string_literal] = STATE(13),
    [sym__multiline_string_literal] = STATE(13),
    [sym_assignment_expression] = STATE(12),
    [sym_unary_expression] = STATE(12),
    [sym__prefix_expression] = STATE(14),
    [sym__postfix_expression] = STATE(14),
    [sym_binary_expression] = STATE(12),
    [sym__type] = STATE(57),
    [sym_primitive_type] = STATE(57),
    [sym__integer_type] = STATE(56),
    [sym__float_type] = STATE(56),
    [sym__type_identifier] = STATE(57),
    [sym_pointer_type] = STATE(57),
    [sym_const_declaration] = STATE(2),
    [sym_var_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_BQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(19),
    [sym_integer_literal] = ACTIONS(21),
    [sym_float_literal] = ACTIONS(21),
    [sym_nil_literal] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_AMP_AMP] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_DASH_DASH] = ACTIONS(25),
    [anon_sym_PLUS_PLUS] = ACTIONS(25),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_ichar] = ACTIONS(27),
    [anon_sym_char] = ACTIONS(27),
    [anon_sym_short] = ACTIONS(27),
    [anon_sym_ushort] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_uint] = ACTIONS(27),
    [anon_sym_long] = ACTIONS(27),
    [anon_sym_ulong] = ACTIONS(27),
    [anon_sym_iptr] = ACTIONS(27),
    [anon_sym_uptr] = ACTIONS(27),
    [anon_sym_iptrdiff] = ACTIONS(27),
    [anon_sym_uptrdiff] = ACTIONS(27),
    [anon_sym_isize] = ACTIONS(27),
    [anon_sym_usize] = ACTIONS(27),
    [anon_sym_half] = ACTIONS(27),
    [anon_sym_float] = ACTIONS(27),
    [anon_sym_double] = ACTIONS(27),
    [anon_sym_quad] = ACTIONS(27),
    [anon_sym_const] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym__empty_statement] = STATE(3),
    [sym_expression_statement] = STATE(3),
    [sym__declaration_statement] = STATE(3),
    [sym__expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_boolean_literal] = STATE(12),
    [sym_char_literal] = STATE(12),
    [sym_string_literal] = STATE(12),
    [sym__string_literal] = STATE(13),
    [sym__raw_string_literal] = STATE(13),
    [sym__multiline_string_literal] = STATE(13),
    [sym_assignment_expression] = STATE(12),
    [sym_unary_expression] = STATE(12),
    [sym__prefix_expression] = STATE(14),
    [sym__postfix_expression] = STATE(14),
    [sym_binary_expression] = STATE(12),
    [sym__type] = STATE(57),
    [sym_primitive_type] = STATE(57),
    [sym__integer_type] = STATE(56),
    [sym__float_type] = STATE(56),
    [sym__type_identifier] = STATE(57),
    [sym_pointer_type] = STATE(57),
    [sym_const_declaration] = STATE(3),
    [sym_var_declaration] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_BQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(19),
    [sym_integer_literal] = ACTIONS(21),
    [sym_float_literal] = ACTIONS(21),
    [sym_nil_literal] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_AMP_AMP] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_DASH_DASH] = ACTIONS(25),
    [anon_sym_PLUS_PLUS] = ACTIONS(25),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_ichar] = ACTIONS(27),
    [anon_sym_char] = ACTIONS(27),
    [anon_sym_short] = ACTIONS(27),
    [anon_sym_ushort] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_uint] = ACTIONS(27),
    [anon_sym_long] = ACTIONS(27),
    [anon_sym_ulong] = ACTIONS(27),
    [anon_sym_iptr] = ACTIONS(27),
    [anon_sym_uptr] = ACTIONS(27),
    [anon_sym_iptrdiff] = ACTIONS(27),
    [anon_sym_uptrdiff] = ACTIONS(27),
    [anon_sym_isize] = ACTIONS(27),
    [anon_sym_usize] = ACTIONS(27),
    [anon_sym_half] = ACTIONS(27),
    [anon_sym_float] = ACTIONS(27),
    [anon_sym_double] = ACTIONS(27),
    [anon_sym_quad] = ACTIONS(27),
    [anon_sym_const] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym__empty_statement] = STATE(3),
    [sym_expression_statement] = STATE(3),
    [sym__declaration_statement] = STATE(3),
    [sym__expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_boolean_literal] = STATE(12),
    [sym_char_literal] = STATE(12),
    [sym_string_literal] = STATE(12),
    [sym__string_literal] = STATE(13),
    [sym__raw_string_literal] = STATE(13),
    [sym__multiline_string_literal] = STATE(13),
    [sym_assignment_expression] = STATE(12),
    [sym_unary_expression] = STATE(12),
    [sym__prefix_expression] = STATE(14),
    [sym__postfix_expression] = STATE(14),
    [sym_binary_expression] = STATE(12),
    [sym__type] = STATE(57),
    [sym_primitive_type] = STATE(57),
    [sym__integer_type] = STATE(56),
    [sym__float_type] = STATE(56),
    [sym__type_identifier] = STATE(57),
    [sym_pointer_type] = STATE(57),
    [sym_const_declaration] = STATE(3),
    [sym_var_declaration] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(40),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(46),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BQUOTE] = ACTIONS(52),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(58),
    [sym_float_literal] = ACTIONS(58),
    [sym_nil_literal] = ACTIONS(58),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(64),
    [anon_sym_TILDE] = ACTIONS(64),
    [anon_sym_AMP] = ACTIONS(61),
    [anon_sym_AMP_AMP] = ACTIONS(64),
    [anon_sym_AT] = ACTIONS(64),
    [anon_sym_DASH_DASH] = ACTIONS(64),
    [anon_sym_PLUS_PLUS] = ACTIONS(64),
    [anon_sym_bool] = ACTIONS(67),
    [anon_sym_ichar] = ACTIONS(67),
    [anon_sym_char] = ACTIONS(67),
    [anon_sym_short] = ACTIONS(67),
    [anon_sym_ushort] = ACTIONS(67),
    [anon_sym_int] = ACTIONS(67),
    [anon_sym_uint] = ACTIONS(67),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_ulong] = ACTIONS(67),
    [anon_sym_iptr] = ACTIONS(67),
    [anon_sym_uptr] = ACTIONS(67),
    [anon_sym_iptrdiff] = ACTIONS(67),
    [anon_sym_uptrdiff] = ACTIONS(67),
    [anon_sym_isize] = ACTIONS(67),
    [anon_sym_usize] = ACTIONS(67),
    [anon_sym_half] = ACTIONS(67),
    [anon_sym_float] = ACTIONS(67),
    [anon_sym_double] = ACTIONS(67),
    [anon_sym_quad] = ACTIONS(67),
    [anon_sym_const] = ACTIONS(70),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 12,
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
    ACTIONS(75), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
      anon_sym_DASH,
      anon_sym_AMP,
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
      anon_sym_const,
  [49] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 12,
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
    ACTIONS(79), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
      anon_sym_DASH,
      anon_sym_AMP,
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
      anon_sym_const,
  [98] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 12,
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
    ACTIONS(83), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
      anon_sym_DASH,
      anon_sym_AMP,
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
      anon_sym_const,
  [147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 12,
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
    ACTIONS(87), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
      anon_sym_DASH,
      anon_sym_AMP,
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
      anon_sym_const,
  [196] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(93), 13,
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
    ACTIONS(91), 20,
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
  [243] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_SEMI,
    ACTIONS(100), 1,
      anon_sym_EQ,
    ACTIONS(110), 1,
      anon_sym_AMP_AMP,
    ACTIONS(114), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(104), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(112), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(118), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(120), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(108), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(106), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(116), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(102), 11,
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
  [305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 14,
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
    ACTIONS(122), 20,
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
  [347] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(106), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(128), 10,
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
    ACTIONS(126), 18,
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
  [393] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_EQ,
    ACTIONS(110), 1,
      anon_sym_AMP_AMP,
    ACTIONS(114), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(130), 1,
      anon_sym_SEMI,
    ACTIONS(104), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(112), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(118), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(120), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(108), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(106), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(116), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(102), 11,
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
  [455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 14,
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
    ACTIONS(132), 20,
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
  [497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 14,
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
  [539] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(112), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(120), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(108), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(128), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(106), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(126), 18,
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
  [591] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_AMP_AMP,
    ACTIONS(128), 1,
      anon_sym_EQ,
    ACTIONS(104), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(112), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(118), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(120), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(108), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(106), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(116), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(126), 13,
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
  [649] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_EQ,
    ACTIONS(104), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(112), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(118), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(120), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(108), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(106), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(116), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(126), 14,
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
  [705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 14,
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
    ACTIONS(140), 20,
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
  [747] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(120), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(106), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(128), 8,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(126), 18,
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
  [795] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_EQ,
    ACTIONS(110), 1,
      anon_sym_AMP_AMP,
    ACTIONS(114), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(144), 1,
      anon_sym_SEMI,
    ACTIONS(104), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(112), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(118), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(120), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(108), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(106), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(116), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(102), 11,
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
  [857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(128), 14,
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
    ACTIONS(126), 18,
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
  [901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 14,
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
    ACTIONS(146), 20,
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
  [943] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(120), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(108), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(106), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(128), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(126), 18,
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
  [993] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(152), 14,
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
    ACTIONS(150), 18,
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
  [1037] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_AMP_AMP,
    ACTIONS(114), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(156), 1,
      anon_sym_EQ,
    ACTIONS(104), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(112), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(118), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(120), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(108), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(106), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(116), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(154), 12,
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
  [1097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 14,
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
    ACTIONS(158), 20,
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
  [1139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 14,
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
    ACTIONS(162), 20,
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
  [1181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 14,
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
    ACTIONS(166), 20,
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
  [1223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 14,
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
    ACTIONS(170), 20,
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
  [1265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 14,
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
    ACTIONS(174), 20,
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
  [1307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 14,
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
    ACTIONS(178), 20,
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
  [1349] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_EQ,
    ACTIONS(110), 1,
      anon_sym_AMP_AMP,
    ACTIONS(114), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(182), 1,
      anon_sym_SEMI,
    ACTIONS(104), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(112), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(118), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(120), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(108), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(106), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_PERCENT,
    ACTIONS(116), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(102), 11,
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
  [1411] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(14), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(13), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(184), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(25), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(20), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1469] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(14), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(13), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(186), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(25), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(25), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1527] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(14), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(13), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(188), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(25), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(15), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1585] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(14), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(13), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(190), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(25), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(11), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1643] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(14), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(13), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(192), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(25), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(9), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1701] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(14), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(13), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(194), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(25), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(16), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1759] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(14), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(13), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(196), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(25), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(32), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1817] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(14), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(13), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(198), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(25), 7,
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
  [1875] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(14), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(13), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(200), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(25), 7,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    STATE(19), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1933] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(14), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(13), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(202), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(25), 7,
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
  [1991] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(14), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(13), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(204), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(25), 7,
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
  [2049] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    STATE(14), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(13), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(206), 4,
      sym_identifier,
      sym_integer_literal,
      sym_float_literal,
      sym_nil_literal,
    ACTIONS(25), 7,
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
  [2107] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(56), 2,
      sym__integer_type,
      sym__float_type,
    STATE(58), 4,
      sym__type,
      sym_primitive_type,
      sym__type_identifier,
      sym_pointer_type,
    ACTIONS(27), 19,
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
  [2145] = 4,
    ACTIONS(210), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(214), 1,
      sym_comment,
    STATE(49), 1,
      aux_sym__multiline_string_literal_repeat1,
    ACTIONS(212), 2,
      aux_sym__multiline_string_literal_token1,
      sym_escape_sequence,
  [2159] = 4,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(47), 1,
      aux_sym__multiline_string_literal_repeat1,
    ACTIONS(218), 2,
      aux_sym__multiline_string_literal_token1,
      sym_escape_sequence,
  [2173] = 4,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(223), 2,
      aux_sym__string_literal_token1,
      sym_escape_sequence,
  [2187] = 4,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(47), 1,
      aux_sym__multiline_string_literal_repeat1,
    ACTIONS(227), 2,
      aux_sym__multiline_string_literal_token1,
      sym_escape_sequence,
  [2201] = 4,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(231), 2,
      aux_sym__string_literal_token1,
      sym_escape_sequence,
  [2215] = 4,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(235), 2,
      aux_sym__string_literal_token1,
      sym_escape_sequence,
  [2229] = 4,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_BQUOTE,
    ACTIONS(240), 1,
      aux_sym__raw_string_literal_token1,
    STATE(52), 1,
      aux_sym__raw_string_literal_repeat1,
  [2242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_EQ,
    ACTIONS(89), 2,
      sym_identifier,
      anon_sym_STAR,
  [2253] = 4,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_BQUOTE,
    ACTIONS(247), 1,
      aux_sym__raw_string_literal_token1,
    STATE(52), 1,
      aux_sym__raw_string_literal_repeat1,
  [2266] = 4,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_BQUOTE,
    ACTIONS(251), 1,
      aux_sym__raw_string_literal_token1,
    STATE(54), 1,
      aux_sym__raw_string_literal_repeat1,
  [2279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 2,
      sym_identifier,
      anon_sym_STAR,
  [2287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_STAR,
  [2297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_STAR,
    ACTIONS(259), 1,
      sym_identifier,
  [2307] = 2,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(261), 2,
      aux_sym_char_literal_token1,
      sym_escape_sequence,
  [2315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 2,
      sym_identifier,
      anon_sym_STAR,
  [2323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
  [2330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
  [2337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_EQ,
  [2344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 49,
  [SMALL_STATE(6)] = 98,
  [SMALL_STATE(7)] = 147,
  [SMALL_STATE(8)] = 196,
  [SMALL_STATE(9)] = 243,
  [SMALL_STATE(10)] = 305,
  [SMALL_STATE(11)] = 347,
  [SMALL_STATE(12)] = 393,
  [SMALL_STATE(13)] = 455,
  [SMALL_STATE(14)] = 497,
  [SMALL_STATE(15)] = 539,
  [SMALL_STATE(16)] = 591,
  [SMALL_STATE(17)] = 649,
  [SMALL_STATE(18)] = 705,
  [SMALL_STATE(19)] = 747,
  [SMALL_STATE(20)] = 795,
  [SMALL_STATE(21)] = 857,
  [SMALL_STATE(22)] = 901,
  [SMALL_STATE(23)] = 943,
  [SMALL_STATE(24)] = 993,
  [SMALL_STATE(25)] = 1037,
  [SMALL_STATE(26)] = 1097,
  [SMALL_STATE(27)] = 1139,
  [SMALL_STATE(28)] = 1181,
  [SMALL_STATE(29)] = 1223,
  [SMALL_STATE(30)] = 1265,
  [SMALL_STATE(31)] = 1307,
  [SMALL_STATE(32)] = 1349,
  [SMALL_STATE(33)] = 1411,
  [SMALL_STATE(34)] = 1469,
  [SMALL_STATE(35)] = 1527,
  [SMALL_STATE(36)] = 1585,
  [SMALL_STATE(37)] = 1643,
  [SMALL_STATE(38)] = 1701,
  [SMALL_STATE(39)] = 1759,
  [SMALL_STATE(40)] = 1817,
  [SMALL_STATE(41)] = 1875,
  [SMALL_STATE(42)] = 1933,
  [SMALL_STATE(43)] = 1991,
  [SMALL_STATE(44)] = 2049,
  [SMALL_STATE(45)] = 2107,
  [SMALL_STATE(46)] = 2145,
  [SMALL_STATE(47)] = 2159,
  [SMALL_STATE(48)] = 2173,
  [SMALL_STATE(49)] = 2187,
  [SMALL_STATE(50)] = 2201,
  [SMALL_STATE(51)] = 2215,
  [SMALL_STATE(52)] = 2229,
  [SMALL_STATE(53)] = 2242,
  [SMALL_STATE(54)] = 2253,
  [SMALL_STATE(55)] = 2266,
  [SMALL_STATE(56)] = 2279,
  [SMALL_STATE(57)] = 2287,
  [SMALL_STATE(58)] = 2297,
  [SMALL_STATE(59)] = 2307,
  [SMALL_STATE(60)] = 2315,
  [SMALL_STATE(61)] = 2323,
  [SMALL_STATE(62)] = 2330,
  [SMALL_STATE(63)] = 2337,
  [SMALL_STATE(64)] = 2344,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_declaration, 6, .production_id = 4),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_declaration, 6, .production_id = 4),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5, .production_id = 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 5, .production_id = 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_declaration, 5),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_declaration, 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), REDUCE(sym__type_identifier, 1, .production_id = 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string_literal, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_string_literal, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_literal, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_literal, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefix_expression, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__prefix_expression, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expression, 3, .production_id = 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__postfix_expression, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__postfix_expression, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_literal, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_literal, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string_literal, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_string_literal, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multiline_string_literal_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_string_literal_repeat1, 2), SHIFT_REPEAT(47),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(51),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__raw_string_literal_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__raw_string_literal_repeat1, 2), SHIFT_REPEAT(52),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [267] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
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
