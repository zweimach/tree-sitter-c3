#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 1
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_SEMI = 1,
  sym_identifier = 2,
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
  anon_sym_bool = 38,
  anon_sym_ichar = 39,
  anon_sym_char = 40,
  anon_sym_short = 41,
  anon_sym_ushort = 42,
  anon_sym_int = 43,
  anon_sym_uint = 44,
  anon_sym_long = 45,
  anon_sym_ulong = 46,
  anon_sym_iptr = 47,
  anon_sym_uptr = 48,
  anon_sym_iptrdiff = 49,
  anon_sym_uptrdiff = 50,
  anon_sym_isize = 51,
  anon_sym_usize = 52,
  anon_sym_half = 53,
  anon_sym_float = 54,
  anon_sym_double = 55,
  anon_sym_quad = 56,
  anon_sym_const = 57,
  sym_comment = 58,
  sym_source_file = 59,
  sym__statement = 60,
  sym__empty_statement = 61,
  sym__expression_statement = 62,
  sym__declaration_statement = 63,
  sym__expression = 64,
  sym__literal = 65,
  sym_boolean_literal = 66,
  sym_char_literal = 67,
  sym_string_literal = 68,
  sym__string_literal = 69,
  sym__raw_string_literal = 70,
  sym__multiline_string_literal = 71,
  sym_assignment_expression = 72,
  sym_unary_expression = 73,
  sym__prefix_expression = 74,
  sym__postfix_expression = 75,
  sym__type = 76,
  sym_primitive_type = 77,
  sym__integer_type = 78,
  sym__float_type = 79,
  sym__type_identifier = 80,
  sym_pointer_type = 81,
  sym_const_declaration = 82,
  sym_var_declaration = 83,
  aux_sym_source_file_repeat1 = 84,
  aux_sym__string_literal_repeat1 = 85,
  aux_sym__raw_string_literal_repeat1 = 86,
  aux_sym__multiline_string_literal_repeat1 = 87,
  alias_sym_type_identifier = 88,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [sym_identifier] = "identifier",
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
  [sym__expression_statement] = "_expression_statement",
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
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_identifier] = sym_identifier,
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
  [sym__expression_statement] = sym__expression_statement,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [sym__expression_statement] = {
    .visible = false,
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
      if (eof) ADVANCE(61);
      if (lookahead == '!') ADVANCE(206);
      if (lookahead == '"') ADVANCE(144);
      if (lookahead == '%') ADVANCE(38);
      if (lookahead == '&') ADVANCE(209);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == '*') ADVANCE(205);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '0') ADVANCE(166);
      if (lookahead == ';') ADVANCE(62);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '=') ADVANCE(189);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '\\') SKIP(57)
      if (lookahead == '^') ADVANCE(40);
      if (lookahead == '`') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'h') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 'q') ADVANCE(132);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == 'u') ADVANCE(92);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '~') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(12)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(13)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(14)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(157);
      if (lookahead == '\r') ADVANCE(156);
      if (lookahead == 'U') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '/') ADVANCE(146);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(139);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(206);
      if (lookahead == '"') ADVANCE(144);
      if (lookahead == '&') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == '*') ADVANCE(204);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == '-') ADVANCE(202);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '0') ADVANCE(166);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '`') ADVANCE(148);
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == '~') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(206);
      if (lookahead == '%') ADVANCE(38);
      if (lookahead == '&') ADVANCE(210);
      if (lookahead == '*') ADVANCE(205);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(62);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '=') ADVANCE(189);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '^') ADVANCE(40);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'h') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 'q') ADVANCE(132);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(92);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '~') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(206);
      if (lookahead == '%') ADVANCE(38);
      if (lookahead == '&') ADVANCE(210);
      if (lookahead == '*') ADVANCE(205);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(62);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '=') ADVANCE(189);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '^') ADVANCE(40);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '~') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(151);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(236);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == '=') ADVANCE(193);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(204);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '=') ADVANCE(189);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 23:
      if (lookahead == '+') ADVANCE(214);
      if (lookahead == '0') ADVANCE(166);
      if (lookahead == '=') ADVANCE(190);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 24:
      if (lookahead == '+') ADVANCE(214);
      if (lookahead == '0') ADVANCE(166);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(149);
      if (lookahead == '`') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(149);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 27:
      if (lookahead == '0') ADVANCE(181);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 28:
      if (lookahead == '1') ADVANCE(32);
      if (lookahead == '3') ADVANCE(29);
      if (lookahead == '6') ADVANCE(33);
      if (lookahead == '8') ADVANCE(160);
      END_STATE();
    case 29:
      if (lookahead == '2') ADVANCE(160);
      END_STATE();
    case 30:
      if (lookahead == '2') ADVANCE(36);
      if (lookahead == '6') ADVANCE(174);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(174);
      END_STATE();
    case 32:
      if (lookahead == '2') ADVANCE(35);
      if (lookahead == '6') ADVANCE(160);
      END_STATE();
    case 33:
      if (lookahead == '4') ADVANCE(160);
      END_STATE();
    case 34:
      if (lookahead == '4') ADVANCE(174);
      END_STATE();
    case 35:
      if (lookahead == '8') ADVANCE(160);
      END_STATE();
    case 36:
      if (lookahead == '8') ADVANCE(174);
      END_STATE();
    case 37:
      if (lookahead == '<') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == '=') ADVANCE(194);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(190);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(198);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(197);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(195);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(199);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(200);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(44);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(236);
      if (lookahead == '\r') ADVANCE(237);
      END_STATE();
    case 56:
      if (eof) ADVANCE(61);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 57:
      if (eof) ADVANCE(61);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(56)
      END_STATE();
    case 58:
      if (eof) ADVANCE(61);
      if (lookahead == '\n') SKIP(60)
      END_STATE();
    case 59:
      if (eof) ADVANCE(61);
      if (lookahead == '\n') SKIP(60)
      if (lookahead == '\r') SKIP(58)
      END_STATE();
    case 60:
      if (eof) ADVANCE(61);
      if (lookahead == '!') ADVANCE(206);
      if (lookahead == '"') ADVANCE(144);
      if (lookahead == '&') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == '*') ADVANCE(204);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == '-') ADVANCE(202);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '0') ADVANCE(166);
      if (lookahead == ';') ADVANCE(62);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '\\') SKIP(59)
      if (lookahead == '`') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'h') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 'q') ADVANCE(132);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == 'u') ADVANCE(92);
      if (lookahead == '~') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == 'p') ADVANCE(128);
      if (lookahead == 's') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == 'p') ADVANCE(129);
      if (lookahead == 's') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(135);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\n') ADVANCE(157);
      if (lookahead == '\r') ADVANCE(156);
      if (lookahead == 'U') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(236);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\\') ADVANCE(7);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(15);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(236);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\\') ADVANCE(7);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token1);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token1);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(236);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__multiline_string_literal_token1);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__multiline_string_literal_token1);
      if (lookahead == '"') ADVANCE(15);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__multiline_string_literal_token1);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(236);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__multiline_string_literal_token1);
      if (lookahead == '\\') ADVANCE(7);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(7);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '1') ADVANCE(163);
      if (lookahead == '3') ADVANCE(162);
      if (lookahead == '6') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(170);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '2') ADVANCE(170);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(170);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '2') ADVANCE(165);
      if (lookahead == '6') ADVANCE(170);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(170);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '4') ADVANCE(170);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(170);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '8') ADVANCE(170);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(170);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead == 'x') ADVANCE(170);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '1') ADVANCE(32);
      if (lookahead == '3') ADVANCE(29);
      if (lookahead == '6') ADVANCE(33);
      if (lookahead == '8') ADVANCE(160);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '1') ADVANCE(30);
      if (lookahead == '3') ADVANCE(31);
      if (lookahead == '6') ADVANCE(34);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '1') ADVANCE(178);
      if (lookahead == '3') ADVANCE(177);
      if (lookahead == '6') ADVANCE(179);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(187);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '2') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(187);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '2') ADVANCE(180);
      if (lookahead == '6') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(187);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '4') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(187);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '8') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(187);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'x') ADVANCE(187);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(183);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_nil_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_STAR_PERCENT_EQ);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '0') ADVANCE(166);
      if (lookahead == '=') ADVANCE(191);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '0') ADVANCE(166);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(191);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '%') ADVANCE(42);
      if (lookahead == '=') ADVANCE(192);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(211);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(211);
      if (lookahead == '=') ADVANCE(196);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '=') ADVANCE(196);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_ichar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_uint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_iptr);
      if (lookahead == 'd') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_uptr);
      if (lookahead == 'd') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_iptrdiff);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_uptrdiff);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_isize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_usize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_half);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_quad);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(236);
      if (lookahead == '\\') ADVANCE(55);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 60},
  [2] = {.lex_state = 60},
  [3] = {.lex_state = 60},
  [4] = {.lex_state = 60},
  [5] = {.lex_state = 60},
  [6] = {.lex_state = 60},
  [7] = {.lex_state = 60},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 26},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 26},
  [41] = {.lex_state = 26},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 22},
  [46] = {.lex_state = 22},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
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
    [sym_source_file] = STATE(50),
    [sym__statement] = STATE(2),
    [sym__empty_statement] = STATE(2),
    [sym__expression_statement] = STATE(2),
    [sym__declaration_statement] = STATE(2),
    [sym__expression] = STATE(28),
    [sym__literal] = STATE(28),
    [sym_boolean_literal] = STATE(28),
    [sym_char_literal] = STATE(28),
    [sym_string_literal] = STATE(28),
    [sym__string_literal] = STATE(21),
    [sym__raw_string_literal] = STATE(21),
    [sym__multiline_string_literal] = STATE(21),
    [sym_assignment_expression] = STATE(28),
    [sym_unary_expression] = STATE(28),
    [sym__prefix_expression] = STATE(16),
    [sym__postfix_expression] = STATE(16),
    [sym__type] = STATE(46),
    [sym_primitive_type] = STATE(46),
    [sym__integer_type] = STATE(45),
    [sym__float_type] = STATE(45),
    [sym__type_identifier] = STATE(46),
    [sym_pointer_type] = STATE(46),
    [sym_const_declaration] = STATE(2),
    [sym_var_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
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
    [sym__expression_statement] = STATE(3),
    [sym__declaration_statement] = STATE(3),
    [sym__expression] = STATE(28),
    [sym__literal] = STATE(28),
    [sym_boolean_literal] = STATE(28),
    [sym_char_literal] = STATE(28),
    [sym_string_literal] = STATE(28),
    [sym__string_literal] = STATE(21),
    [sym__raw_string_literal] = STATE(21),
    [sym__multiline_string_literal] = STATE(21),
    [sym_assignment_expression] = STATE(28),
    [sym_unary_expression] = STATE(28),
    [sym__prefix_expression] = STATE(16),
    [sym__postfix_expression] = STATE(16),
    [sym__type] = STATE(46),
    [sym_primitive_type] = STATE(46),
    [sym__integer_type] = STATE(45),
    [sym__float_type] = STATE(45),
    [sym__type_identifier] = STATE(46),
    [sym_pointer_type] = STATE(46),
    [sym_const_declaration] = STATE(3),
    [sym_var_declaration] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(33),
    [sym_identifier] = ACTIONS(9),
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
    [sym__expression_statement] = STATE(3),
    [sym__declaration_statement] = STATE(3),
    [sym__expression] = STATE(28),
    [sym__literal] = STATE(28),
    [sym_boolean_literal] = STATE(28),
    [sym_char_literal] = STATE(28),
    [sym_string_literal] = STATE(28),
    [sym__string_literal] = STATE(21),
    [sym__raw_string_literal] = STATE(21),
    [sym__multiline_string_literal] = STATE(21),
    [sym_assignment_expression] = STATE(28),
    [sym_unary_expression] = STATE(28),
    [sym__prefix_expression] = STATE(16),
    [sym__postfix_expression] = STATE(16),
    [sym__type] = STATE(46),
    [sym_primitive_type] = STATE(46),
    [sym__integer_type] = STATE(45),
    [sym__float_type] = STATE(45),
    [sym__type_identifier] = STATE(46),
    [sym_pointer_type] = STATE(46),
    [sym_const_declaration] = STATE(3),
    [sym_var_declaration] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(37),
    [sym_identifier] = ACTIONS(40),
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
  [196] = 12,
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
    STATE(16), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(21), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(89), 4,
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
    STATE(24), 7,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
  [253] = 12,
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
    STATE(16), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(21), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(91), 4,
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
    STATE(19), 7,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
  [310] = 12,
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
    STATE(16), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(21), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(93), 4,
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
    STATE(15), 7,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
  [367] = 12,
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
    STATE(16), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(21), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(95), 4,
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
    STATE(17), 7,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
  [424] = 12,
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
    STATE(16), 2,
      sym__prefix_expression,
      sym__postfix_expression,
    STATE(21), 3,
      sym__string_literal,
      sym__raw_string_literal,
      sym__multiline_string_literal,
    ACTIONS(97), 4,
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
    STATE(27), 7,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
  [481] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_identifier,
    STATE(45), 2,
      sym__integer_type,
      sym__float_type,
    STATE(44), 4,
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
  [519] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_STAR,
    ACTIONS(105), 2,
      anon_sym_DASH,
      anon_sym_AMP,
    ACTIONS(101), 16,
      anon_sym_SEMI,
      anon_sym_EQ,
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
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AT,
  [551] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(114), 3,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(110), 13,
      anon_sym_SEMI,
      anon_sym_EQ,
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
  [580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(116), 16,
      anon_sym_SEMI,
      anon_sym_EQ,
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
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AT,
  [607] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_SEMI,
    ACTIONS(112), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(114), 3,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(122), 12,
      anon_sym_EQ,
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
  [638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(124), 16,
      anon_sym_SEMI,
      anon_sym_EQ,
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
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AT,
  [665] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_SEMI,
    ACTIONS(112), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(114), 3,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(122), 12,
      anon_sym_EQ,
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
  [696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(130), 16,
      anon_sym_SEMI,
      anon_sym_EQ,
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
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AT,
  [723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(134), 16,
      anon_sym_SEMI,
      anon_sym_EQ,
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
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AT,
  [750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(138), 16,
      anon_sym_SEMI,
      anon_sym_EQ,
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
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AT,
  [777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(142), 16,
      anon_sym_SEMI,
      anon_sym_EQ,
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
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AT,
  [804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(114), 3,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(146), 13,
      anon_sym_SEMI,
      anon_sym_EQ,
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
  [833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(148), 16,
      anon_sym_SEMI,
      anon_sym_EQ,
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
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AT,
  [860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(152), 16,
      anon_sym_SEMI,
      anon_sym_EQ,
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
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AT,
  [887] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_SEMI,
    ACTIONS(112), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(114), 3,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(122), 12,
      anon_sym_EQ,
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
  [918] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_SEMI,
    ACTIONS(112), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(114), 3,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(122), 12,
      anon_sym_EQ,
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
  [949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(160), 16,
      anon_sym_SEMI,
      anon_sym_EQ,
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
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AT,
  [976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(164), 16,
      anon_sym_SEMI,
      anon_sym_EQ,
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
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AT,
  [1003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(168), 16,
      anon_sym_SEMI,
      anon_sym_EQ,
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
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AT,
  [1030] = 4,
    ACTIONS(172), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(176), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym__multiline_string_literal_repeat1,
    ACTIONS(174), 2,
      aux_sym__multiline_string_literal_token1,
      sym_escape_sequence,
  [1044] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(180), 2,
      aux_sym__string_literal_token1,
      sym_escape_sequence,
  [1058] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(34), 1,
      aux_sym__multiline_string_literal_repeat1,
    ACTIONS(185), 2,
      aux_sym__multiline_string_literal_token1,
      sym_escape_sequence,
  [1072] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(190), 2,
      aux_sym__string_literal_token1,
      sym_escape_sequence,
  [1086] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(32), 1,
      aux_sym__multiline_string_literal_repeat1,
    ACTIONS(194), 2,
      aux_sym__multiline_string_literal_token1,
      sym_escape_sequence,
  [1100] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(198), 2,
      aux_sym__string_literal_token1,
      sym_escape_sequence,
  [1114] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_BQUOTE,
    ACTIONS(202), 1,
      aux_sym__raw_string_literal_token1,
    STATE(38), 1,
      aux_sym__raw_string_literal_repeat1,
  [1127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_EQ,
    ACTIONS(103), 2,
      sym_identifier,
      anon_sym_STAR,
  [1138] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_BQUOTE,
    ACTIONS(209), 1,
      aux_sym__raw_string_literal_token1,
    STATE(38), 1,
      aux_sym__raw_string_literal_repeat1,
  [1151] = 4,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_BQUOTE,
    ACTIONS(213), 1,
      aux_sym__raw_string_literal_token1,
    STATE(40), 1,
      aux_sym__raw_string_literal_repeat1,
  [1164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 2,
      sym_identifier,
      anon_sym_STAR,
  [1172] = 2,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(217), 2,
      aux_sym_char_literal_token1,
      sym_escape_sequence,
  [1180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_STAR,
  [1190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 2,
      sym_identifier,
      anon_sym_STAR,
  [1198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_STAR,
    ACTIONS(225), 1,
      sym_identifier,
  [1208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_EQ,
  [1215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_EQ,
  [1222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
  [1229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 49,
  [SMALL_STATE(6)] = 98,
  [SMALL_STATE(7)] = 147,
  [SMALL_STATE(8)] = 196,
  [SMALL_STATE(9)] = 253,
  [SMALL_STATE(10)] = 310,
  [SMALL_STATE(11)] = 367,
  [SMALL_STATE(12)] = 424,
  [SMALL_STATE(13)] = 481,
  [SMALL_STATE(14)] = 519,
  [SMALL_STATE(15)] = 551,
  [SMALL_STATE(16)] = 580,
  [SMALL_STATE(17)] = 607,
  [SMALL_STATE(18)] = 638,
  [SMALL_STATE(19)] = 665,
  [SMALL_STATE(20)] = 696,
  [SMALL_STATE(21)] = 723,
  [SMALL_STATE(22)] = 750,
  [SMALL_STATE(23)] = 777,
  [SMALL_STATE(24)] = 804,
  [SMALL_STATE(25)] = 833,
  [SMALL_STATE(26)] = 860,
  [SMALL_STATE(27)] = 887,
  [SMALL_STATE(28)] = 918,
  [SMALL_STATE(29)] = 949,
  [SMALL_STATE(30)] = 976,
  [SMALL_STATE(31)] = 1003,
  [SMALL_STATE(32)] = 1030,
  [SMALL_STATE(33)] = 1044,
  [SMALL_STATE(34)] = 1058,
  [SMALL_STATE(35)] = 1072,
  [SMALL_STATE(36)] = 1086,
  [SMALL_STATE(37)] = 1100,
  [SMALL_STATE(38)] = 1114,
  [SMALL_STATE(39)] = 1127,
  [SMALL_STATE(40)] = 1138,
  [SMALL_STATE(41)] = 1151,
  [SMALL_STATE(42)] = 1164,
  [SMALL_STATE(43)] = 1172,
  [SMALL_STATE(44)] = 1180,
  [SMALL_STATE(45)] = 1190,
  [SMALL_STATE(46)] = 1198,
  [SMALL_STATE(47)] = 1208,
  [SMALL_STATE(48)] = 1215,
  [SMALL_STATE(49)] = 1222,
  [SMALL_STATE(50)] = 1229,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_statement, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_declaration, 6, .production_id = 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_declaration, 6, .production_id = 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5, .production_id = 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 5, .production_id = 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_declaration, 5),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_declaration, 5),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), REDUCE(sym__type_identifier, 1, .production_id = 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string_literal, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_string_literal, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_literal, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_literal, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefix_expression, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_literal, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_literal, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string_literal, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_string_literal, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__postfix_expression, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__postfix_expression, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(33),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multiline_string_literal_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_string_literal_repeat1, 2), SHIFT_REPEAT(34),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__raw_string_literal_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__raw_string_literal_repeat1, 2), SHIFT_REPEAT(38),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [233] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
