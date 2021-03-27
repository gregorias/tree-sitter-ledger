#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 266
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 98
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_SEMI = 2,
  anon_sym_STAR = 3,
  aux_sym_comment_token1 = 4,
  anon_sym_account = 5,
  anon_sym_commodity = 6,
  anon_sym_include = 7,
  aux_sym_word_directive_token1 = 8,
  anon_sym_end = 9,
  anon_sym_alias = 10,
  aux_sym_word_directive_token2 = 11,
  anon_sym_EQ = 12,
  anon_sym_def = 13,
  anon_sym_year = 14,
  aux_sym_word_directive_token3 = 15,
  anon_sym_bucket = 16,
  anon_sym_A = 17,
  anon_sym_Y = 18,
  anon_sym_N = 19,
  anon_sym_D = 20,
  anon_sym_C = 21,
  anon_sym_P = 22,
  aux_sym_alias_subdirective_token1 = 23,
  anon_sym_assert = 24,
  anon_sym_check = 25,
  anon_sym_default = 26,
  aux_sym_default_subdirective_token1 = 27,
  anon_sym_eval = 28,
  anon_sym_format = 29,
  anon_sym_nomarket = 30,
  anon_sym_note = 31,
  anon_sym_payee = 32,
  anon_sym_i = 33,
  anon_sym_I = 34,
  anon_sym_o = 35,
  anon_sym_O = 36,
  sym_single_date = 37,
  sym_time = 38,
  anon_sym_BANG = 39,
  sym_payee = 40,
  aux_sym_note_token1 = 41,
  anon_sym_LPAREN = 42,
  anon_sym_RPAREN = 43,
  anon_sym_LBRACK = 44,
  anon_sym_RBRACK = 45,
  aux_sym_account_name_token1 = 46,
  sym_account_name_part = 47,
  anon_sym_DASH = 48,
  aux_sym_quantity_token1 = 49,
  aux_sym_commodity_token1 = 50,
  aux_sym_commodity_token2 = 51,
  anon_sym_AT = 52,
  anon_sym_AT_AT = 53,
  anon_sym_ = 54,
  anon_sym_TAB = 55,
  anon_sym_2 = 56,
  anon_sym_TAB2 = 57,
  sym_source_file = 58,
  sym_journal_item = 59,
  sym_comment = 60,
  sym_directive = 61,
  sym_account_directive = 62,
  sym_account_subdirective = 63,
  sym_commodity_directive = 64,
  sym_commodity_subdirective = 65,
  sym_word_directive = 66,
  sym_char_directive = 67,
  sym_alias_subdirective = 68,
  sym_assert_subdirective = 69,
  sym_check_subdirective = 70,
  sym_default_subdirective = 71,
  sym_eval_subdirective = 72,
  sym_format_subdirective = 73,
  sym_nomarket_subdirective = 74,
  sym_note_subdirective = 75,
  sym_payee_subdirective = 76,
  sym_check_in = 77,
  sym_check_out = 78,
  sym_xact = 79,
  sym_plain_xact = 80,
  sym_date = 81,
  sym_status = 82,
  sym_note = 83,
  sym_posting = 84,
  sym_account = 85,
  sym_account_name = 86,
  sym_amount = 87,
  sym_quantity = 88,
  sym_commodity = 89,
  sym_price = 90,
  sym_balance_assertion = 91,
  aux_sym_source_file_repeat1 = 92,
  aux_sym_account_directive_repeat1 = 93,
  aux_sym_commodity_directive_repeat1 = 94,
  aux_sym_plain_xact_repeat1 = 95,
  aux_sym_account_name_repeat1 = 96,
  aux_sym_whitespace_repeat1 = 97,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_STAR] = "*",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_account] = "account",
  [anon_sym_commodity] = "commodity",
  [anon_sym_include] = "include",
  [aux_sym_word_directive_token1] = "word_directive_token1",
  [anon_sym_end] = "end",
  [anon_sym_alias] = "alias",
  [aux_sym_word_directive_token2] = "word_directive_token2",
  [anon_sym_EQ] = "=",
  [anon_sym_def] = "def",
  [anon_sym_year] = "year",
  [aux_sym_word_directive_token3] = "word_directive_token3",
  [anon_sym_bucket] = "bucket",
  [anon_sym_A] = "A",
  [anon_sym_Y] = "Y",
  [anon_sym_N] = "N",
  [anon_sym_D] = "D",
  [anon_sym_C] = "C",
  [anon_sym_P] = "P",
  [aux_sym_alias_subdirective_token1] = "alias_subdirective_token1",
  [anon_sym_assert] = "assert",
  [anon_sym_check] = "check",
  [anon_sym_default] = "default",
  [aux_sym_default_subdirective_token1] = "default_subdirective_token1",
  [anon_sym_eval] = "eval",
  [anon_sym_format] = "format",
  [anon_sym_nomarket] = "nomarket",
  [anon_sym_note] = "note",
  [anon_sym_payee] = "payee",
  [anon_sym_i] = "i",
  [anon_sym_I] = "I",
  [anon_sym_o] = "o",
  [anon_sym_O] = "O",
  [sym_single_date] = "single_date",
  [sym_time] = "time",
  [anon_sym_BANG] = "!",
  [sym_payee] = "payee",
  [aux_sym_note_token1] = "note_token1",
  [anon_sym_LPAREN] = "",
  [anon_sym_RPAREN] = "",
  [anon_sym_LBRACK] = "",
  [anon_sym_RBRACK] = "",
  [aux_sym_account_name_token1] = "account_name_token1",
  [sym_account_name_part] = "account_name_part",
  [anon_sym_DASH] = "-",
  [aux_sym_quantity_token1] = "quantity_token1",
  [aux_sym_commodity_token1] = "commodity_token1",
  [aux_sym_commodity_token2] = "commodity_token2",
  [anon_sym_AT] = "@",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_] = " ",
  [anon_sym_TAB] = "\t",
  [anon_sym_2] = "  ",
  [anon_sym_TAB2] = " \t",
  [sym_source_file] = "source_file",
  [sym_journal_item] = "journal_item",
  [sym_comment] = "comment",
  [sym_directive] = "directive",
  [sym_account_directive] = "account_directive",
  [sym_account_subdirective] = "account_subdirective",
  [sym_commodity_directive] = "commodity_directive",
  [sym_commodity_subdirective] = "commodity_subdirective",
  [sym_word_directive] = "word_directive",
  [sym_char_directive] = "char_directive",
  [sym_alias_subdirective] = "alias_subdirective",
  [sym_assert_subdirective] = "assert_subdirective",
  [sym_check_subdirective] = "check_subdirective",
  [sym_default_subdirective] = "default_subdirective",
  [sym_eval_subdirective] = "eval_subdirective",
  [sym_format_subdirective] = "format_subdirective",
  [sym_nomarket_subdirective] = "nomarket_subdirective",
  [sym_note_subdirective] = "note_subdirective",
  [sym_payee_subdirective] = "payee_subdirective",
  [sym_check_in] = "check_in",
  [sym_check_out] = "check_out",
  [sym_xact] = "xact",
  [sym_plain_xact] = "plain_xact",
  [sym_date] = "date",
  [sym_status] = "status",
  [sym_note] = "note",
  [sym_posting] = "posting",
  [sym_account] = "account",
  [sym_account_name] = "",
  [sym_amount] = "amount",
  [sym_quantity] = "quantity",
  [sym_commodity] = "commodity",
  [sym_price] = "price",
  [sym_balance_assertion] = "balance_assertion",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_account_directive_repeat1] = "account_directive_repeat1",
  [aux_sym_commodity_directive_repeat1] = "commodity_directive_repeat1",
  [aux_sym_plain_xact_repeat1] = "plain_xact_repeat1",
  [aux_sym_account_name_repeat1] = "account_name_repeat1",
  [aux_sym_whitespace_repeat1] = "whitespace_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_account] = anon_sym_account,
  [anon_sym_commodity] = anon_sym_commodity,
  [anon_sym_include] = anon_sym_include,
  [aux_sym_word_directive_token1] = aux_sym_word_directive_token1,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_alias] = anon_sym_alias,
  [aux_sym_word_directive_token2] = aux_sym_word_directive_token2,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_year] = anon_sym_year,
  [aux_sym_word_directive_token3] = aux_sym_word_directive_token3,
  [anon_sym_bucket] = anon_sym_bucket,
  [anon_sym_A] = anon_sym_A,
  [anon_sym_Y] = anon_sym_Y,
  [anon_sym_N] = anon_sym_N,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_C] = anon_sym_C,
  [anon_sym_P] = anon_sym_P,
  [aux_sym_alias_subdirective_token1] = aux_sym_alias_subdirective_token1,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_check] = anon_sym_check,
  [anon_sym_default] = anon_sym_default,
  [aux_sym_default_subdirective_token1] = aux_sym_default_subdirective_token1,
  [anon_sym_eval] = anon_sym_eval,
  [anon_sym_format] = anon_sym_format,
  [anon_sym_nomarket] = anon_sym_nomarket,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_payee] = anon_sym_payee,
  [anon_sym_i] = anon_sym_i,
  [anon_sym_I] = anon_sym_I,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_O] = anon_sym_O,
  [sym_single_date] = sym_single_date,
  [sym_time] = sym_time,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_payee] = sym_payee,
  [aux_sym_note_token1] = aux_sym_note_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACK] = anon_sym_LPAREN,
  [anon_sym_RBRACK] = anon_sym_LPAREN,
  [aux_sym_account_name_token1] = aux_sym_account_name_token1,
  [sym_account_name_part] = sym_account_name_part,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_quantity_token1] = aux_sym_quantity_token1,
  [aux_sym_commodity_token1] = aux_sym_commodity_token1,
  [aux_sym_commodity_token2] = aux_sym_commodity_token2,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_] = anon_sym_,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_TAB2] = anon_sym_TAB2,
  [sym_source_file] = sym_source_file,
  [sym_journal_item] = sym_journal_item,
  [sym_comment] = sym_comment,
  [sym_directive] = sym_directive,
  [sym_account_directive] = sym_account_directive,
  [sym_account_subdirective] = sym_account_subdirective,
  [sym_commodity_directive] = sym_commodity_directive,
  [sym_commodity_subdirective] = sym_commodity_subdirective,
  [sym_word_directive] = sym_word_directive,
  [sym_char_directive] = sym_char_directive,
  [sym_alias_subdirective] = sym_alias_subdirective,
  [sym_assert_subdirective] = sym_assert_subdirective,
  [sym_check_subdirective] = sym_check_subdirective,
  [sym_default_subdirective] = sym_default_subdirective,
  [sym_eval_subdirective] = sym_eval_subdirective,
  [sym_format_subdirective] = sym_format_subdirective,
  [sym_nomarket_subdirective] = sym_nomarket_subdirective,
  [sym_note_subdirective] = sym_note_subdirective,
  [sym_payee_subdirective] = sym_payee_subdirective,
  [sym_check_in] = sym_check_in,
  [sym_check_out] = sym_check_out,
  [sym_xact] = sym_xact,
  [sym_plain_xact] = sym_plain_xact,
  [sym_date] = sym_date,
  [sym_status] = sym_status,
  [sym_note] = sym_note,
  [sym_posting] = sym_posting,
  [sym_account] = sym_account,
  [sym_account_name] = anon_sym_LPAREN,
  [sym_amount] = sym_amount,
  [sym_quantity] = sym_quantity,
  [sym_commodity] = sym_commodity,
  [sym_price] = sym_price,
  [sym_balance_assertion] = sym_balance_assertion,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_account_directive_repeat1] = aux_sym_account_directive_repeat1,
  [aux_sym_commodity_directive_repeat1] = aux_sym_commodity_directive_repeat1,
  [aux_sym_plain_xact_repeat1] = aux_sym_plain_xact_repeat1,
  [aux_sym_account_name_repeat1] = aux_sym_account_name_repeat1,
  [aux_sym_whitespace_repeat1] = aux_sym_whitespace_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_account] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commodity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_directive_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_year] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_directive_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_bucket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_N] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_C] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_P] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_alias_subdirective_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_default_subdirective_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_eval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_format] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nomarket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_payee] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_I] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_O] = {
    .visible = true,
    .named = false,
  },
  [sym_single_date] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_payee] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_note_token1] = {
    .visible = false,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_account_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_account_name_part] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quantity_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commodity_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commodity_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB2] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_journal_item] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_account_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_account_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_word_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_char_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_assert_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_check_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_default_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_eval_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_format_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_nomarket_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_note_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_payee_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_check_in] = {
    .visible = true,
    .named = true,
  },
  [sym_check_out] = {
    .visible = true,
    .named = true,
  },
  [sym_xact] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_xact] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_status] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_posting] = {
    .visible = true,
    .named = true,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [sym_account_name] = {
    .visible = true,
    .named = false,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity] = {
    .visible = true,
    .named = true,
  },
  [sym_price] = {
    .visible = true,
    .named = true,
  },
  [sym_balance_assertion] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_account_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commodity_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_plain_xact_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_account_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_whitespace_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_account_name_part_character_set_1(int32_t c) {
  return (c < 6784
    ? (c < 3086
      ? (c < 2417
        ? (c < 1488
          ? (c < 750
            ? (c < 188
              ? (c < 170
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 181
                  ? (c >= 178 && c <= 179)
                  : (c <= 181 || (c >= 185 && c <= 186)))))
              : (c <= 190 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 910
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : (c <= 906 || c == 908))))
              : (c <= 929 || (c < 1329
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 2036
            ? (c < 1774
              ? (c < 1646
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1632 && c <= 1641)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : (c <= 1749 || (c >= 1765 && c <= 1766)))))
              : (c <= 1788 || (c < 1869
                ? (c < 1808
                  ? c == 1791
                  : (c <= 1808 || (c >= 1810 && c <= 1839)))
                : (c <= 1957 || (c < 1984
                  ? c == 1969
                  : c <= 2026)))))
            : (c <= 2037 || (c < 2208
              ? (c < 2084
                ? (c < 2048
                  ? c == 2042
                  : (c <= 2069 || c == 2074))
                : (c <= 2084 || (c < 2112
                  ? c == 2088
                  : (c <= 2136 || (c >= 2144 && c <= 2154)))))
              : (c <= 2228 || (c < 2384
                ? (c < 2308
                  ? (c >= 2230 && c <= 2247)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2406
                  ? (c >= 2392 && c <= 2401)
                  : c <= 2415)))))))))
        : (c <= 2432 || (c < 2741
          ? (c < 2575
            ? (c < 2510
              ? (c < 2474
                ? (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))
                : (c <= 2480 || (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))))
              : (c <= 2510 || (c < 2548
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2529 || (c >= 2534 && c <= 2545)))
                : (c <= 2553 || (c < 2565
                  ? c == 2556
                  : c <= 2570)))))
            : (c <= 2576 || (c < 2662
              ? (c < 2613
                ? (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))))
              : (c <= 2671 || (c < 2707
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)))))))
          : (c <= 2745 || (c < 2918
            ? (c < 2835
              ? (c < 2790
                ? (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))
                : (c <= 2799 || (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))))
              : (c <= 2856 || (c < 2877
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2877 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)))))
            : (c <= 2927 || (c < 2974
              ? (c < 2958
                ? (c < 2947
                  ? (c >= 2929 && c <= 2935)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))
                : (c <= 2960 || (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))))
              : (c <= 2975 || (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3077
                  ? (c >= 3046 && c <= 3058)
                  : c <= 3084)))))))))))
      : (c <= 3088 || (c < 4197
        ? (c < 3507
          ? (c < 3294
            ? (c < 3200
              ? (c < 3160
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3174
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3183 || (c >= 3192 && c <= 3198)))))
              : (c <= 3200 || (c < 3242
                ? (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)))))
            : (c <= 3294 || (c < 3406
              ? (c < 3332
                ? (c < 3302
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))
                : (c <= 3340 || (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3386 || c == 3389))))
              : (c <= 3406 || (c < 3450
                ? (c < 3416
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3448)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))))))
          : (c <= 3515 || (c < 3773
            ? (c < 3713
              ? (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3664 && c <= 3673)))))
              : (c <= 3714 || (c < 3749
                ? (c < 3718
                  ? c == 3716
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : c <= 3763)))))
            : (c <= 3773 || (c < 3913
              ? (c < 3804
                ? (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3792 && c <= 3801)))
                : (c <= 3807 || (c < 3872
                  ? c == 3840
                  : (c <= 3891 || (c >= 3904 && c <= 3911)))))
              : (c <= 3948 || (c < 4176
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : (c <= 4138 || (c >= 4159 && c <= 4169)))
                : (c <= 4181 || (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : c <= 4193)))))))))
        : (c <= 4198 || (c < 5743
          ? (c < 4746
            ? (c < 4304
              ? (c < 4240
                ? (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : (c <= 4225 || c == 4238))
                : (c <= 4249 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))))
              : (c <= 4346 || (c < 4696
                ? (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : c <= 4744)))))
            : (c <= 4749 || (c < 4882
              ? (c < 4800
                ? (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))
                : (c <= 4800 || (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : (c <= 4822 || (c >= 4824 && c <= 4880)))))
              : (c <= 4885 || (c < 5024
                ? (c < 4969
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 4988 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : c <= 5740)))))))
          : (c <= 5759 || (c < 6160
            ? (c < 5984
              ? (c < 5888
                ? (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))
                : (c <= 5900 || (c < 5920
                  ? (c >= 5902 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))))
              : (c <= 5996 || (c < 6108
                ? (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : (c <= 6067 || c == 6103))
                : (c <= 6108 || (c < 6128
                  ? (c >= 6112 && c <= 6121)
                  : c <= 6137)))))
            : (c <= 6169 || (c < 6470
              ? (c < 6314
                ? (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : (c <= 6276 || (c >= 6279 && c <= 6312)))
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))
              : (c <= 6509 || (c < 6608
                ? (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))
                : (c <= 6618 || (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : c <= 6740)))))))))))))
    : (c <= 6793 || (c < 43138
      ? (c < 11312
        ? (c < 8126
          ? (c < 7406
            ? (c < 7168
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7072 || (c >= 7086 && c <= 7141)))))
              : (c <= 7203 || (c < 7312
                ? (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8016
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))
              : (c <= 8023 || (c < 8031
                ? (c < 8027
                  ? c == 8025
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : c <= 8124)))))))
          : (c <= 8126 || (c < 8469
            ? (c < 8304
              ? (c < 8150
                ? (c < 8134
                  ? (c >= 8130 && c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))))
              : (c <= 8305 || (c < 8450
                ? (c < 8319
                  ? (c >= 8308 && c <= 8313)
                  : (c <= 8329 || (c >= 8336 && c <= 8348)))
                : (c <= 8450 || (c < 8458
                  ? c == 8455
                  : c <= 8467)))))
            : (c <= 8469 || (c < 8517
              ? (c < 8488
                ? (c < 8484
                  ? (c >= 8473 && c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))
              : (c <= 8521 || (c < 9450
                ? (c < 8528
                  ? c == 8526
                  : (c <= 8585 || (c >= 9312 && c <= 9371)))
                : (c <= 9471 || (c < 11264
                  ? (c >= 10102 && c <= 10131)
                  : c <= 11310)))))))))
        : (c <= 11358 || (c < 12690
          ? (c < 11712
            ? (c < 11568
              ? (c < 11517
                ? (c < 11499
                  ? (c >= 11360 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12344
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12321
                  ? (c >= 12293 && c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))))
              : (c <= 12348 || (c < 12540
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : (c <= 12447 || (c >= 12449 && c <= 12538)))
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12693 || (c < 42512
            ? (c < 13312
              ? (c < 12872
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || (c >= 12832 && c <= 12841)))
                : (c <= 12879 || (c < 12928
                  ? (c >= 12881 && c <= 12895)
                  : (c <= 12937 || (c >= 12977 && c <= 12991)))))
              : (c <= 13312 || (c < 40960
                ? (c < 19968
                  ? c == 19903
                  : (c <= 19968 || c == 40956))
                : (c <= 42124 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : c <= 42508)))))
            : (c <= 42539 || (c < 42946
              ? (c < 42775
                ? (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : c <= 42943)))
              : (c <= 42954 || (c < 43020
                ? (c < 43011
                  ? (c >= 42997 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65345
        ? (c < 43808
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43714
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : (c <= 44032 || c == 55203))))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65142
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66816
          ? (c < 65930
            ? (c < 65576
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))
              : (c <= 65594 || (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : c <= 65912)))))
            : (c <= 65931 || (c < 66464
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66273 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66720
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67639
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))))
              : (c <= 67640 || (c < 67705
                ? (c < 67647
                  ? c == 67644
                  : (c <= 67669 || (c >= 67672 && c <= 67702)))
                : (c <= 67742 || (c < 67808
                  ? (c >= 67751 && c <= 67759)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68028
                ? (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68047 || (c < 68112
                  ? (c >= 68050 && c <= 68096)
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68160
                  ? (c >= 68121 && c <= 68149)
                  : (c <= 68168 || (c >= 68192 && c <= 68222)))
                : (c <= 68255 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool aux_sym_commodity_token1_character_set_2(int32_t c) {
  return (c < 6688
    ? (c < 2990
      ? (c < 2384
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'a'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2230
                ? (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)
                : (c <= 2247 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2947
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))
              : (c <= 2965 || (c < 2974
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4193
        ? (c < 3461
          ? (c < 3253
            ? (c < 3160
              ? (c < 3090
                ? (c < 3077
                  ? c == 3024
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))
              : (c <= 3162 || (c < 3214
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))
            : (c <= 3257 || (c < 3346
              ? (c < 3313
                ? (c < 3294
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)))
              : (c <= 3386 || (c < 3412
                ? (c < 3406
                  ? c == 3389
                  : c <= 3406)
                : (c <= 3414 || (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)))))))
          : (c <= 3478 || (c < 3762
            ? (c < 3648
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : c <= 3635)))
              : (c <= 3654 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))))
            : (c <= 3763 || (c < 3913
              ? (c < 3804
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : c <= 3911)))
              : (c <= 3948 || (c < 4159
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)
                : (c <= 4159 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))))))))
        : (c <= 4193 || (c < 5112
          ? (c < 4704
            ? (c < 4301
              ? (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))))
            : (c <= 4744 || (c < 4808
              ? (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))
              : (c <= 4822 || (c < 4888
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))))))
          : (c <= 5117 || (c < 6103
            ? (c < 5902
              ? (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5900)))
              : (c <= 5905 || (c < 5984
                ? (c < 5952
                  ? (c >= 5920 && c <= 5937)
                  : c <= 5969)
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43259
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11310 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42623
            ? (c < 40956
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 40956 || (c < 42512
                ? (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42943 || (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67828
            ? (c < 67639
              ? (c < 67584
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : c <= 67637)))
              : (c <= 67640 || (c < 67680
                ? (c < 67647
                  ? c == 67644
                  : c <= 67669)
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool aux_sym_commodity_token1_character_set_3(int32_t c) {
  return (c < 6688
    ? (c < 2990
      ? (c < 2384
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'b'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2230
                ? (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)
                : (c <= 2247 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2947
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))
              : (c <= 2965 || (c < 2974
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4193
        ? (c < 3461
          ? (c < 3253
            ? (c < 3160
              ? (c < 3090
                ? (c < 3077
                  ? c == 3024
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))
              : (c <= 3162 || (c < 3214
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))
            : (c <= 3257 || (c < 3346
              ? (c < 3313
                ? (c < 3294
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)))
              : (c <= 3386 || (c < 3412
                ? (c < 3406
                  ? c == 3389
                  : c <= 3406)
                : (c <= 3414 || (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)))))))
          : (c <= 3478 || (c < 3762
            ? (c < 3648
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : c <= 3635)))
              : (c <= 3654 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))))
            : (c <= 3763 || (c < 3913
              ? (c < 3804
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : c <= 3911)))
              : (c <= 3948 || (c < 4159
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)
                : (c <= 4159 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))))))))
        : (c <= 4193 || (c < 5112
          ? (c < 4704
            ? (c < 4301
              ? (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))))
            : (c <= 4744 || (c < 4808
              ? (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))
              : (c <= 4822 || (c < 4888
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))))))
          : (c <= 5117 || (c < 6103
            ? (c < 5902
              ? (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5900)))
              : (c <= 5905 || (c < 5984
                ? (c < 5952
                  ? (c >= 5920 && c <= 5937)
                  : c <= 5969)
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43259
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11310 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42623
            ? (c < 40956
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 40956 || (c < 42512
                ? (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42943 || (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67828
            ? (c < 67639
              ? (c < 67584
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : c <= 67637)))
              : (c <= 67640 || (c < 67680
                ? (c < 67647
                  ? c == 67644
                  : c <= 67669)
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(107);
      if (lookahead == '\t') ADVANCE(257);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '!') ADVANCE(173);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == 'A') ADVANCE(134);
      if (lookahead == 'C') ADVANCE(142);
      if (lookahead == 'D') ADVANCE(140);
      if (lookahead == 'I') ADVANCE(166);
      if (lookahead == 'N') ADVANCE(138);
      if (lookahead == 'O') ADVANCE(170);
      if (lookahead == 'P') ADVANCE(144);
      if (lookahead == 'Y') ADVANCE(136);
      if (lookahead == '[') ADVANCE(178);
      if (lookahead == ']') ADVANCE(179);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'b') ADVANCE(243);
      if (lookahead == 'c') ADVANCE(210);
      if (lookahead == 'd') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == 'f') ADVANCE(225);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(226);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(185);
      if (lookahead == 'y') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2247) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3332 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5873 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8495 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8579 ||
          lookahead == 8580 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          lookahead == 12293 ||
          lookahead == 12294 ||
          (12337 <= lookahead && lookahead <= 12341) ||
          lookahead == 12347 ||
          lookahead == 12348 ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12735) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          lookahead == 13312 ||
          lookahead == 19903 ||
          lookahead == 19968 ||
          lookahead == 40956 ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42725) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42954) ||
          (42997 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43881) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          lookahead == 44032 ||
          lookahead == 55203 ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66368) ||
          (66370 <= lookahead && lookahead <= 66377) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68309)) ADVANCE(248);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(257);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '!') ADVANCE(173);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(178);
      if (sym_account_name_part_character_set_1(lookahead)) ADVANCE(182);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(257);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == '@') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(257);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == ']') ADVANCE(179);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(257);
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(257);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '"') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(263);
      if (lookahead == ' ') ADVANCE(262);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(259);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '!') ADVANCE(173);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(258);
      if (lookahead == ' ') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(261);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(123);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(260);
      if (lookahead == ' ') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(98);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 43:
      if (lookahead == 'f') ADVANCE(125);
      END_STATE();
    case 44:
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(40);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 48:
      if (lookahead == 'k') ADVANCE(148);
      END_STATE();
    case 49:
      if (lookahead == 'k') ADVANCE(34);
      END_STATE();
    case 50:
      if (lookahead == 'k') ADVANCE(41);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 81:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 83:
      if (lookahead == 'v') ADVANCE(19);
      END_STATE();
    case 84:
      if (lookahead == 'y') ADVANCE(114);
      END_STATE();
    case 85:
      if (lookahead == 'y') ADVANCE(42);
      END_STATE();
    case 86:
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 87:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(97);
      END_STATE();
    case 88:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(99);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 104:
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 105:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 106:
      if (eof) ADVANCE(107);
      if (lookahead == '\t') ADVANCE(257);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == 'A') ADVANCE(133);
      if (lookahead == 'C') ADVANCE(141);
      if (lookahead == 'D') ADVANCE(139);
      if (lookahead == 'I') ADVANCE(165);
      if (lookahead == 'N') ADVANCE(137);
      if (lookahead == 'O') ADVANCE(169);
      if (lookahead == 'P') ADVANCE(143);
      if (lookahead == 'Y') ADVANCE(135);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(80);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead == 'y') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_account);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_include);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_end);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_alias);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'a') ADVANCE(245);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(248);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_year);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_word_directive_token3);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_word_directive_token3);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(97);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_bucket);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_A);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_Y);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_N);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_D);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_C);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_P);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_alias_subdirective_token1);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_assert);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_check);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_default);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_default_subdirective_token1);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_eval);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_eval);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_format);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_nomarket);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_nomarket);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_note);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_payee);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_payee);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(194);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_I);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_o);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_O);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_single_date);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_account_name_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_account_name_part);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_account_name_part);
      if (sym_account_name_part_character_set_1(lookahead)) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(247);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(248);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(216);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(248);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(233);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(248);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(229);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(248);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(237);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(248);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(232);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(248);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(211);
      if (lookahead == 's') ADVANCE(234);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(214);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(213);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(217);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(227);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(120);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(212);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(202);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(209);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(160);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(162);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(117);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(236);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(188);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(230);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(193);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(240);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(201);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'f') ADVANCE(126);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'h') ADVANCE(206);
      if (lookahead == 'o') ADVANCE(219);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(187);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(241);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(149);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(203);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(207);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(154);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(244);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(239);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(220);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(228);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(190);
      if (lookahead == 't') ADVANCE(200);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(189);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(196);
      if (lookahead == 'v') ADVANCE(186);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(238);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(231);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(221);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(242);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(197);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(128);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(235);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(222);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(215);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(122);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(205);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(147);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(132);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(156);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(113);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(151);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(158);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(246);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(224);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(192);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(198);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(218);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'y') ADVANCE(115);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'y') ADVANCE(208);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(174);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(123);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(174);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(123);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 106},
  [2] = {.lex_state = 106},
  [3] = {.lex_state = 106},
  [4] = {.lex_state = 106},
  [5] = {.lex_state = 106},
  [6] = {.lex_state = 106},
  [7] = {.lex_state = 106},
  [8] = {.lex_state = 106},
  [9] = {.lex_state = 106},
  [10] = {.lex_state = 106},
  [11] = {.lex_state = 106},
  [12] = {.lex_state = 106},
  [13] = {.lex_state = 106},
  [14] = {.lex_state = 106},
  [15] = {.lex_state = 106},
  [16] = {.lex_state = 106},
  [17] = {.lex_state = 106},
  [18] = {.lex_state = 106},
  [19] = {.lex_state = 106},
  [20] = {.lex_state = 106},
  [21] = {.lex_state = 106},
  [22] = {.lex_state = 106},
  [23] = {.lex_state = 106},
  [24] = {.lex_state = 106},
  [25] = {.lex_state = 106},
  [26] = {.lex_state = 106},
  [27] = {.lex_state = 106},
  [28] = {.lex_state = 106},
  [29] = {.lex_state = 106},
  [30] = {.lex_state = 106},
  [31] = {.lex_state = 106},
  [32] = {.lex_state = 106},
  [33] = {.lex_state = 106},
  [34] = {.lex_state = 106},
  [35] = {.lex_state = 106},
  [36] = {.lex_state = 106},
  [37] = {.lex_state = 106},
  [38] = {.lex_state = 106},
  [39] = {.lex_state = 106},
  [40] = {.lex_state = 106},
  [41] = {.lex_state = 106},
  [42] = {.lex_state = 106},
  [43] = {.lex_state = 106},
  [44] = {.lex_state = 106},
  [45] = {.lex_state = 106},
  [46] = {.lex_state = 106},
  [47] = {.lex_state = 106},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 106},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 106},
  [61] = {.lex_state = 106},
  [62] = {.lex_state = 106},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 106},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 106},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 106},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 106},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 106},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 106},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 106},
  [111] = {.lex_state = 106},
  [112] = {.lex_state = 106},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 106},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 106},
  [121] = {.lex_state = 106},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 106},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 106},
  [132] = {.lex_state = 106},
  [133] = {.lex_state = 106},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 106},
  [138] = {.lex_state = 106},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 106},
  [143] = {.lex_state = 106},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 106},
  [147] = {.lex_state = 106},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 106},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 106},
  [183] = {.lex_state = 106},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 106},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 106},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 7},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 106},
  [221] = {.lex_state = 12},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 106},
  [224] = {.lex_state = 106},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 106},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 106},
  [229] = {.lex_state = 106},
  [230] = {.lex_state = 106},
  [231] = {.lex_state = 106},
  [232] = {.lex_state = 106},
  [233] = {.lex_state = 175},
  [234] = {.lex_state = 106},
  [235] = {.lex_state = 106},
  [236] = {.lex_state = 106},
  [237] = {.lex_state = 106},
  [238] = {.lex_state = 106},
  [239] = {.lex_state = 106},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 106},
  [242] = {.lex_state = 106},
  [243] = {.lex_state = 106},
  [244] = {.lex_state = 106},
  [245] = {.lex_state = 106},
  [246] = {.lex_state = 106},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 106},
  [249] = {.lex_state = 106},
  [250] = {.lex_state = 106},
  [251] = {.lex_state = 106},
  [252] = {.lex_state = 106},
  [253] = {.lex_state = 106},
  [254] = {.lex_state = 106},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 106},
  [259] = {.lex_state = 106},
  [260] = {.lex_state = 106},
  [261] = {.lex_state = 105},
  [262] = {.lex_state = 106},
  [263] = {.lex_state = 106},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 106},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_account] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_year] = ACTIONS(1),
    [aux_sym_word_directive_token3] = ACTIONS(1),
    [anon_sym_bucket] = ACTIONS(1),
    [anon_sym_A] = ACTIONS(1),
    [anon_sym_Y] = ACTIONS(1),
    [anon_sym_N] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_C] = ACTIONS(1),
    [anon_sym_P] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_check] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [aux_sym_default_subdirective_token1] = ACTIONS(1),
    [anon_sym_eval] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [anon_sym_nomarket] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_payee] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_I] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [sym_single_date] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_account_name_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_commodity_token1] = ACTIONS(1),
    [aux_sym_commodity_token2] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(247),
    [sym_journal_item] = STATE(3),
    [sym_comment] = STATE(47),
    [sym_directive] = STATE(47),
    [sym_account_directive] = STATE(46),
    [sym_commodity_directive] = STATE(46),
    [sym_word_directive] = STATE(246),
    [sym_char_directive] = STATE(246),
    [sym_check_in] = STATE(244),
    [sym_check_out] = STATE(244),
    [sym_xact] = STATE(47),
    [sym_plain_xact] = STATE(45),
    [sym_date] = STATE(160),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_account] = ACTIONS(9),
    [anon_sym_commodity] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(13),
    [anon_sym_end] = ACTIONS(15),
    [anon_sym_alias] = ACTIONS(17),
    [anon_sym_def] = ACTIONS(13),
    [anon_sym_year] = ACTIONS(19),
    [anon_sym_bucket] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_Y] = ACTIONS(25),
    [anon_sym_N] = ACTIONS(27),
    [anon_sym_D] = ACTIONS(29),
    [anon_sym_C] = ACTIONS(31),
    [anon_sym_P] = ACTIONS(33),
    [anon_sym_i] = ACTIONS(35),
    [anon_sym_I] = ACTIONS(37),
    [anon_sym_o] = ACTIONS(39),
    [anon_sym_O] = ACTIONS(39),
    [sym_single_date] = ACTIONS(41),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 27,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_LF,
    ACTIONS(51), 1,
      anon_sym_account,
    ACTIONS(54), 1,
      anon_sym_commodity,
    ACTIONS(60), 1,
      anon_sym_end,
    ACTIONS(63), 1,
      anon_sym_alias,
    ACTIONS(66), 1,
      anon_sym_year,
    ACTIONS(69), 1,
      anon_sym_bucket,
    ACTIONS(72), 1,
      anon_sym_A,
    ACTIONS(75), 1,
      anon_sym_Y,
    ACTIONS(78), 1,
      anon_sym_N,
    ACTIONS(81), 1,
      anon_sym_D,
    ACTIONS(84), 1,
      anon_sym_C,
    ACTIONS(87), 1,
      anon_sym_P,
    ACTIONS(90), 1,
      anon_sym_i,
    ACTIONS(93), 1,
      anon_sym_I,
    ACTIONS(99), 1,
      sym_single_date,
    STATE(45), 1,
      sym_plain_xact,
    STATE(160), 1,
      sym_date,
    ACTIONS(48), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(57), 2,
      anon_sym_include,
      anon_sym_def,
    ACTIONS(96), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(46), 2,
      sym_account_directive,
      sym_commodity_directive,
    STATE(244), 2,
      sym_check_in,
      sym_check_out,
    STATE(246), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(47), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [91] = 27,
    ACTIONS(9), 1,
      anon_sym_account,
    ACTIONS(11), 1,
      anon_sym_commodity,
    ACTIONS(15), 1,
      anon_sym_end,
    ACTIONS(17), 1,
      anon_sym_alias,
    ACTIONS(19), 1,
      anon_sym_year,
    ACTIONS(21), 1,
      anon_sym_bucket,
    ACTIONS(23), 1,
      anon_sym_A,
    ACTIONS(25), 1,
      anon_sym_Y,
    ACTIONS(27), 1,
      anon_sym_N,
    ACTIONS(29), 1,
      anon_sym_D,
    ACTIONS(31), 1,
      anon_sym_C,
    ACTIONS(33), 1,
      anon_sym_P,
    ACTIONS(35), 1,
      anon_sym_i,
    ACTIONS(37), 1,
      anon_sym_I,
    ACTIONS(41), 1,
      sym_single_date,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      anon_sym_LF,
    STATE(45), 1,
      sym_plain_xact,
    STATE(160), 1,
      sym_date,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(13), 2,
      anon_sym_include,
      anon_sym_def,
    ACTIONS(39), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(46), 2,
      sym_account_directive,
      sym_commodity_directive,
    STATE(244), 2,
      sym_check_in,
      sym_check_out,
    STATE(246), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(47), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [182] = 6,
    ACTIONS(108), 1,
      anon_sym_i,
    STATE(69), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(110), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    STATE(33), 7,
      sym_alias_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
      sym_default_subdirective,
      sym_eval_subdirective,
      sym_note_subdirective,
      sym_payee_subdirective,
    ACTIONS(106), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [230] = 6,
    ACTIONS(114), 1,
      anon_sym_i,
    STATE(69), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(110), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    STATE(33), 7,
      sym_alias_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
      sym_default_subdirective,
      sym_eval_subdirective,
      sym_note_subdirective,
      sym_payee_subdirective,
    ACTIONS(112), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [278] = 6,
    ACTIONS(118), 1,
      anon_sym_i,
    STATE(69), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(120), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    STATE(33), 7,
      sym_alias_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
      sym_default_subdirective,
      sym_eval_subdirective,
      sym_note_subdirective,
      sym_payee_subdirective,
    ACTIONS(116), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [326] = 6,
    ACTIONS(125), 1,
      anon_sym_i,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(127), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(9), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    STATE(31), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_nomarket_subdirective,
      sym_note_subdirective,
    ACTIONS(123), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [372] = 6,
    ACTIONS(131), 1,
      anon_sym_i,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(133), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(8), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    STATE(31), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_nomarket_subdirective,
      sym_note_subdirective,
    ACTIONS(129), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [418] = 6,
    ACTIONS(138), 1,
      anon_sym_i,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(127), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(8), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    STATE(31), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_nomarket_subdirective,
      sym_note_subdirective,
    ACTIONS(136), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [464] = 2,
    ACTIONS(142), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(140), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_EQ,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [497] = 2,
    ACTIONS(146), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(144), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_EQ,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [530] = 5,
    ACTIONS(150), 1,
      anon_sym_i,
    STATE(54), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(152), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(12), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(148), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [569] = 5,
    ACTIONS(157), 1,
      anon_sym_i,
    STATE(54), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(159), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(12), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(155), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [608] = 5,
    ACTIONS(163), 1,
      anon_sym_i,
    STATE(54), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(159), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(12), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(161), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [647] = 5,
    ACTIONS(167), 1,
      anon_sym_i,
    STATE(54), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(159), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(12), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(165), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [686] = 2,
    ACTIONS(171), 1,
      anon_sym_i,
    ACTIONS(169), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [716] = 2,
    ACTIONS(175), 1,
      anon_sym_i,
    ACTIONS(173), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [746] = 2,
    ACTIONS(179), 1,
      anon_sym_i,
    ACTIONS(177), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [776] = 2,
    ACTIONS(183), 1,
      anon_sym_i,
    ACTIONS(181), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [806] = 2,
    ACTIONS(187), 1,
      anon_sym_i,
    ACTIONS(185), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [836] = 2,
    ACTIONS(191), 1,
      anon_sym_i,
    ACTIONS(189), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [866] = 2,
    ACTIONS(195), 1,
      anon_sym_i,
    ACTIONS(193), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [896] = 2,
    ACTIONS(199), 1,
      anon_sym_i,
    ACTIONS(197), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [926] = 2,
    ACTIONS(203), 1,
      anon_sym_i,
    ACTIONS(201), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [956] = 2,
    ACTIONS(207), 1,
      anon_sym_i,
    ACTIONS(205), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [986] = 2,
    ACTIONS(211), 1,
      anon_sym_i,
    ACTIONS(209), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1016] = 2,
    ACTIONS(215), 1,
      anon_sym_i,
    ACTIONS(213), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1046] = 2,
    ACTIONS(219), 1,
      anon_sym_i,
    ACTIONS(217), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1076] = 2,
    ACTIONS(223), 1,
      anon_sym_i,
    ACTIONS(221), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1106] = 2,
    ACTIONS(227), 1,
      anon_sym_i,
    ACTIONS(225), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1136] = 2,
    ACTIONS(231), 1,
      anon_sym_i,
    ACTIONS(229), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1166] = 2,
    ACTIONS(235), 1,
      anon_sym_i,
    ACTIONS(233), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1196] = 2,
    ACTIONS(239), 1,
      anon_sym_i,
    ACTIONS(237), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1226] = 2,
    ACTIONS(243), 1,
      anon_sym_i,
    ACTIONS(241), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1256] = 2,
    ACTIONS(247), 1,
      anon_sym_i,
    ACTIONS(245), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1286] = 2,
    ACTIONS(251), 1,
      anon_sym_i,
    ACTIONS(249), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1316] = 2,
    ACTIONS(255), 1,
      anon_sym_i,
    ACTIONS(253), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1346] = 2,
    ACTIONS(259), 1,
      anon_sym_i,
    ACTIONS(257), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1376] = 2,
    ACTIONS(263), 1,
      anon_sym_i,
    ACTIONS(261), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1406] = 2,
    ACTIONS(267), 1,
      anon_sym_i,
    ACTIONS(265), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1436] = 2,
    ACTIONS(271), 1,
      anon_sym_i,
    ACTIONS(269), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1466] = 2,
    ACTIONS(275), 1,
      anon_sym_i,
    ACTIONS(273), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1496] = 2,
    ACTIONS(279), 1,
      anon_sym_i,
    ACTIONS(277), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [1524] = 2,
    ACTIONS(283), 1,
      anon_sym_i,
    ACTIONS(281), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [1552] = 2,
    ACTIONS(287), 1,
      anon_sym_i,
    ACTIONS(285), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [1580] = 2,
    ACTIONS(291), 1,
      anon_sym_i,
    ACTIONS(289), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [1608] = 2,
    ACTIONS(295), 1,
      anon_sym_i,
    ACTIONS(293), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [1636] = 16,
    ACTIONS(297), 1,
      anon_sym_LF,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      aux_sym_quantity_token1,
    ACTIONS(309), 1,
      anon_sym_AT,
    ACTIONS(311), 1,
      anon_sym_AT_AT,
    STATE(53), 1,
      aux_sym_whitespace_repeat1,
    STATE(57), 1,
      sym_amount,
    STATE(90), 1,
      sym_price,
    STATE(116), 1,
      sym_quantity,
    STATE(119), 1,
      sym_commodity,
    STATE(128), 1,
      sym_balance_assertion,
    STATE(265), 1,
      sym_note,
    ACTIONS(307), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(313), 2,
      anon_sym_,
      anon_sym_TAB,
  [1687] = 16,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      aux_sym_quantity_token1,
    ACTIONS(309), 1,
      anon_sym_AT,
    ACTIONS(311), 1,
      anon_sym_AT_AT,
    ACTIONS(315), 1,
      anon_sym_LF,
    STATE(51), 1,
      aux_sym_whitespace_repeat1,
    STATE(60), 1,
      sym_amount,
    STATE(87), 1,
      sym_price,
    STATE(116), 1,
      sym_quantity,
    STATE(119), 1,
      sym_commodity,
    STATE(131), 1,
      sym_balance_assertion,
    STATE(230), 1,
      sym_note,
    ACTIONS(307), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(317), 2,
      anon_sym_,
      anon_sym_TAB,
  [1738] = 16,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      aux_sym_quantity_token1,
    ACTIONS(309), 1,
      anon_sym_AT,
    ACTIONS(311), 1,
      anon_sym_AT_AT,
    ACTIONS(319), 1,
      anon_sym_LF,
    STATE(52), 1,
      aux_sym_whitespace_repeat1,
    STATE(61), 1,
      sym_amount,
    STATE(100), 1,
      sym_price,
    STATE(116), 1,
      sym_quantity,
    STATE(117), 1,
      sym_balance_assertion,
    STATE(119), 1,
      sym_commodity,
    STATE(259), 1,
      sym_note,
    ACTIONS(307), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(321), 2,
      anon_sym_,
      anon_sym_TAB,
  [1789] = 15,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      aux_sym_quantity_token1,
    ACTIONS(309), 1,
      anon_sym_AT,
    ACTIONS(311), 1,
      anon_sym_AT_AT,
    STATE(57), 1,
      sym_amount,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    STATE(90), 1,
      sym_price,
    STATE(116), 1,
      sym_quantity,
    STATE(119), 1,
      sym_commodity,
    STATE(128), 1,
      sym_balance_assertion,
    STATE(265), 1,
      sym_note,
    ACTIONS(307), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(323), 2,
      anon_sym_,
      anon_sym_TAB,
  [1837] = 15,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      aux_sym_quantity_token1,
    ACTIONS(309), 1,
      anon_sym_AT,
    ACTIONS(311), 1,
      anon_sym_AT_AT,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    STATE(60), 1,
      sym_amount,
    STATE(87), 1,
      sym_price,
    STATE(116), 1,
      sym_quantity,
    STATE(119), 1,
      sym_commodity,
    STATE(131), 1,
      sym_balance_assertion,
    STATE(230), 1,
      sym_note,
    ACTIONS(307), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(323), 2,
      anon_sym_,
      anon_sym_TAB,
  [1885] = 15,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      aux_sym_quantity_token1,
    ACTIONS(309), 1,
      anon_sym_AT,
    ACTIONS(311), 1,
      anon_sym_AT_AT,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    STATE(62), 1,
      sym_amount,
    STATE(80), 1,
      sym_price,
    STATE(116), 1,
      sym_quantity,
    STATE(119), 1,
      sym_commodity,
    STATE(120), 1,
      sym_balance_assertion,
    STATE(242), 1,
      sym_note,
    ACTIONS(307), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(323), 2,
      anon_sym_,
      anon_sym_TAB,
  [1933] = 11,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      sym_account_name_part,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(99), 1,
      sym_status,
    STATE(176), 1,
      sym_account_name,
    STATE(193), 1,
      sym_account,
    STATE(263), 1,
      sym_note,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [1969] = 3,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(337), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(335), 9,
      anon_sym_alias,
      anon_sym_assert,
      anon_sym_check,
      anon_sym_default,
      anon_sym_eval,
      anon_sym_format,
      anon_sym_nomarket,
      anon_sym_note,
      anon_sym_payee,
  [1988] = 4,
    ACTIONS(340), 1,
      anon_sym_AT,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(342), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(335), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name_part,
      anon_sym_AT_AT,
  [2009] = 10,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(309), 1,
      anon_sym_AT,
    ACTIONS(311), 1,
      anon_sym_AT_AT,
    ACTIONS(345), 1,
      anon_sym_LF,
    STATE(63), 1,
      aux_sym_whitespace_repeat1,
    STATE(80), 1,
      sym_price,
    STATE(120), 1,
      sym_balance_assertion,
    STATE(242), 1,
      sym_note,
    ACTIONS(347), 2,
      anon_sym_,
      anon_sym_TAB,
  [2041] = 4,
    ACTIONS(340), 1,
      anon_sym_AT,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(349), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(335), 7,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
  [2061] = 2,
    ACTIONS(219), 1,
      anon_sym_AT,
    ACTIONS(217), 10,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [2077] = 10,
    ACTIONS(297), 1,
      anon_sym_LF,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(309), 1,
      anon_sym_AT,
    ACTIONS(311), 1,
      anon_sym_AT_AT,
    STATE(67), 1,
      aux_sym_whitespace_repeat1,
    STATE(90), 1,
      sym_price,
    STATE(128), 1,
      sym_balance_assertion,
    STATE(265), 1,
      sym_note,
    ACTIONS(352), 2,
      anon_sym_,
      anon_sym_TAB,
  [2109] = 10,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(309), 1,
      anon_sym_AT,
    ACTIONS(311), 1,
      anon_sym_AT_AT,
    ACTIONS(315), 1,
      anon_sym_LF,
    STATE(68), 1,
      aux_sym_whitespace_repeat1,
    STATE(87), 1,
      sym_price,
    STATE(131), 1,
      sym_balance_assertion,
    STATE(230), 1,
      sym_note,
    ACTIONS(354), 2,
      anon_sym_,
      anon_sym_TAB,
  [2141] = 10,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(309), 1,
      anon_sym_AT,
    ACTIONS(311), 1,
      anon_sym_AT_AT,
    ACTIONS(356), 1,
      anon_sym_LF,
    STATE(77), 1,
      aux_sym_whitespace_repeat1,
    STATE(83), 1,
      sym_price,
    STATE(112), 1,
      sym_balance_assertion,
    STATE(224), 1,
      sym_note,
    ACTIONS(358), 2,
      anon_sym_,
      anon_sym_TAB,
  [2173] = 9,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(309), 1,
      anon_sym_AT,
    ACTIONS(311), 1,
      anon_sym_AT_AT,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(83), 1,
      sym_price,
    STATE(112), 1,
      sym_balance_assertion,
    STATE(224), 1,
      sym_note,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [2202] = 8,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      aux_sym_quantity_token1,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    STATE(116), 1,
      sym_quantity,
    STATE(119), 1,
      sym_commodity,
    STATE(238), 1,
      sym_amount,
    ACTIONS(307), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(323), 2,
      anon_sym_,
      anon_sym_TAB,
  [2229] = 8,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      aux_sym_quantity_token1,
    STATE(42), 1,
      sym_amount,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    STATE(129), 1,
      sym_commodity,
    STATE(130), 1,
      sym_quantity,
    ACTIONS(307), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(323), 2,
      anon_sym_,
      anon_sym_TAB,
  [2256] = 8,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      aux_sym_quantity_token1,
    STATE(74), 1,
      aux_sym_whitespace_repeat1,
    STATE(116), 1,
      sym_quantity,
    STATE(119), 1,
      sym_commodity,
    STATE(238), 1,
      sym_amount,
    ACTIONS(307), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(360), 2,
      anon_sym_,
      anon_sym_TAB,
  [2283] = 9,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(309), 1,
      anon_sym_AT,
    ACTIONS(311), 1,
      anon_sym_AT_AT,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(80), 1,
      sym_price,
    STATE(120), 1,
      sym_balance_assertion,
    STATE(242), 1,
      sym_note,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [2312] = 9,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(309), 1,
      anon_sym_AT,
    ACTIONS(311), 1,
      anon_sym_AT_AT,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(90), 1,
      sym_price,
    STATE(128), 1,
      sym_balance_assertion,
    STATE(265), 1,
      sym_note,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [2341] = 9,
    ACTIONS(362), 1,
      anon_sym_alias,
    ACTIONS(364), 1,
      anon_sym_assert,
    ACTIONS(366), 1,
      anon_sym_check,
    ACTIONS(368), 1,
      anon_sym_default,
    ACTIONS(370), 1,
      anon_sym_eval,
    ACTIONS(372), 1,
      anon_sym_note,
    ACTIONS(374), 1,
      anon_sym_payee,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(376), 2,
      anon_sym_,
      anon_sym_TAB,
  [2370] = 8,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      aux_sym_quantity_token1,
    STATE(73), 1,
      aux_sym_whitespace_repeat1,
    STATE(116), 1,
      sym_quantity,
    STATE(119), 1,
      sym_commodity,
    STATE(142), 1,
      sym_amount,
    ACTIONS(307), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(378), 2,
      anon_sym_,
      anon_sym_TAB,
  [2397] = 8,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      aux_sym_quantity_token1,
    STATE(64), 1,
      aux_sym_whitespace_repeat1,
    STATE(116), 1,
      sym_quantity,
    STATE(119), 1,
      sym_commodity,
    STATE(254), 1,
      sym_amount,
    ACTIONS(307), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(380), 2,
      anon_sym_,
      anon_sym_TAB,
  [2424] = 8,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      aux_sym_quantity_token1,
    STATE(76), 1,
      aux_sym_whitespace_repeat1,
    STATE(116), 1,
      sym_quantity,
    STATE(119), 1,
      sym_commodity,
    STATE(182), 1,
      sym_amount,
    ACTIONS(307), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(382), 2,
      anon_sym_,
      anon_sym_TAB,
  [2451] = 8,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      aux_sym_quantity_token1,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    STATE(116), 1,
      sym_quantity,
    STATE(119), 1,
      sym_commodity,
    STATE(143), 1,
      sym_amount,
    ACTIONS(307), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(323), 2,
      anon_sym_,
      anon_sym_TAB,
  [2478] = 8,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      aux_sym_quantity_token1,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    STATE(116), 1,
      sym_quantity,
    STATE(119), 1,
      sym_commodity,
    STATE(239), 1,
      sym_amount,
    ACTIONS(307), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(323), 2,
      anon_sym_,
      anon_sym_TAB,
  [2505] = 8,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      aux_sym_quantity_token1,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    STATE(116), 1,
      sym_quantity,
    STATE(119), 1,
      sym_commodity,
    STATE(226), 1,
      sym_amount,
    ACTIONS(307), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(323), 2,
      anon_sym_,
      anon_sym_TAB,
  [2532] = 8,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      aux_sym_quantity_token1,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    STATE(116), 1,
      sym_quantity,
    STATE(119), 1,
      sym_commodity,
    STATE(186), 1,
      sym_amount,
    ACTIONS(307), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(323), 2,
      anon_sym_,
      anon_sym_TAB,
  [2559] = 9,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(309), 1,
      anon_sym_AT,
    ACTIONS(311), 1,
      anon_sym_AT_AT,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(97), 1,
      sym_price,
    STATE(121), 1,
      sym_balance_assertion,
    STATE(251), 1,
      sym_note,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [2588] = 2,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(173), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [2602] = 2,
    ACTIONS(223), 1,
      anon_sym_AT,
    ACTIONS(221), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [2616] = 7,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(356), 1,
      anon_sym_LF,
    STATE(104), 1,
      aux_sym_whitespace_repeat1,
    STATE(112), 1,
      sym_balance_assertion,
    STATE(224), 1,
      sym_note,
    ACTIONS(384), 2,
      anon_sym_,
      anon_sym_TAB,
  [2639] = 7,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      sym_account_name_part,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(159), 1,
      sym_account,
    STATE(176), 1,
      sym_account_name,
    ACTIONS(386), 2,
      anon_sym_,
      anon_sym_TAB,
  [2662] = 4,
    ACTIONS(340), 1,
      aux_sym_word_directive_token3,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(388), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(335), 4,
      sym_single_date,
      sym_time,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [2679] = 7,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(391), 1,
      anon_sym_LF,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    STATE(121), 1,
      sym_balance_assertion,
    STATE(251), 1,
      sym_note,
    ACTIONS(393), 2,
      anon_sym_,
      anon_sym_TAB,
  [2702] = 7,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      sym_account_name_part,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(169), 1,
      sym_account,
    STATE(176), 1,
      sym_account_name,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [2725] = 7,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      sym_account_name_part,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(176), 1,
      sym_account_name,
    STATE(228), 1,
      sym_account,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [2748] = 7,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      sym_account_name_part,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(176), 1,
      sym_account_name,
    STATE(226), 1,
      sym_account,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [2771] = 7,
    ACTIONS(297), 1,
      anon_sym_LF,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    STATE(107), 1,
      aux_sym_whitespace_repeat1,
    STATE(128), 1,
      sym_balance_assertion,
    STATE(265), 1,
      sym_note,
    ACTIONS(395), 2,
      anon_sym_,
      anon_sym_TAB,
  [2794] = 3,
    ACTIONS(399), 1,
      aux_sym_account_name_token1,
    STATE(95), 1,
      aux_sym_account_name_repeat1,
    ACTIONS(397), 6,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [2809] = 7,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      sym_account_name_part,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(174), 1,
      sym_account,
    STATE(176), 1,
      sym_account_name,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [2832] = 7,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(345), 1,
      anon_sym_LF,
    STATE(108), 1,
      aux_sym_whitespace_repeat1,
    STATE(120), 1,
      sym_balance_assertion,
    STATE(242), 1,
      sym_note,
    ACTIONS(401), 2,
      anon_sym_,
      anon_sym_TAB,
  [2855] = 7,
    ACTIONS(362), 1,
      anon_sym_alias,
    ACTIONS(368), 1,
      anon_sym_default,
    ACTIONS(372), 1,
      anon_sym_note,
    ACTIONS(403), 1,
      anon_sym_format,
    ACTIONS(405), 1,
      anon_sym_nomarket,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(376), 2,
      anon_sym_,
      anon_sym_TAB,
  [2878] = 7,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      sym_account_name_part,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(159), 1,
      sym_account,
    STATE(176), 1,
      sym_account_name,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [2901] = 7,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      sym_account_name_part,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(176), 1,
      sym_account_name,
    STATE(187), 1,
      sym_account,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [2924] = 7,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      sym_account_name_part,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(176), 1,
      sym_account_name,
    STATE(187), 1,
      sym_account,
    ACTIONS(407), 2,
      anon_sym_,
      anon_sym_TAB,
  [2947] = 3,
    ACTIONS(399), 1,
      aux_sym_account_name_token1,
    STATE(96), 1,
      aux_sym_account_name_repeat1,
    ACTIONS(409), 6,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [2962] = 3,
    ACTIONS(413), 1,
      aux_sym_account_name_token1,
    STATE(96), 1,
      aux_sym_account_name_repeat1,
    ACTIONS(411), 6,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [2977] = 7,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(416), 1,
      anon_sym_LF,
    STATE(105), 1,
      aux_sym_whitespace_repeat1,
    STATE(111), 1,
      sym_balance_assertion,
    STATE(236), 1,
      sym_note,
    ACTIONS(418), 2,
      anon_sym_,
      anon_sym_TAB,
  [3000] = 7,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      sym_account_name_part,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    STATE(176), 1,
      sym_account_name,
    STATE(194), 1,
      sym_account,
    ACTIONS(420), 2,
      anon_sym_,
      anon_sym_TAB,
  [3023] = 7,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      sym_account_name_part,
    STATE(84), 1,
      aux_sym_whitespace_repeat1,
    STATE(176), 1,
      sym_account_name,
    STATE(184), 1,
      sym_account,
    ACTIONS(422), 2,
      anon_sym_,
      anon_sym_TAB,
  [3046] = 7,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(315), 1,
      anon_sym_LF,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    STATE(131), 1,
      sym_balance_assertion,
    STATE(230), 1,
      sym_note,
    ACTIONS(424), 2,
      anon_sym_,
      anon_sym_TAB,
  [3069] = 7,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      sym_account_name_part,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(176), 1,
      sym_account_name,
    STATE(231), 1,
      sym_account,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [3092] = 6,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(111), 1,
      sym_balance_assertion,
    STATE(236), 1,
      sym_note,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [3112] = 6,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(128), 1,
      sym_balance_assertion,
    STATE(265), 1,
      sym_note,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [3132] = 6,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(121), 1,
      sym_balance_assertion,
    STATE(251), 1,
      sym_note,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [3152] = 6,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(110), 1,
      sym_balance_assertion,
    STATE(241), 1,
      sym_note,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [3172] = 1,
    ACTIONS(411), 7,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      aux_sym_account_name_token1,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [3182] = 6,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(120), 1,
      sym_balance_assertion,
    STATE(242), 1,
      sym_note,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [3202] = 6,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_EQ,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(112), 1,
      sym_balance_assertion,
    STATE(224), 1,
      sym_note,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [3222] = 5,
    ACTIONS(426), 1,
      sym_payee,
    STATE(113), 1,
      aux_sym_whitespace_repeat1,
    STATE(189), 1,
      sym_status,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(428), 2,
      anon_sym_,
      anon_sym_TAB,
  [3240] = 5,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(430), 1,
      anon_sym_LF,
    STATE(140), 1,
      aux_sym_whitespace_repeat1,
    STATE(245), 1,
      sym_note,
    ACTIONS(432), 2,
      anon_sym_,
      anon_sym_TAB,
  [3257] = 5,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(434), 1,
      anon_sym_LF,
    STATE(141), 1,
      aux_sym_whitespace_repeat1,
    STATE(241), 1,
      sym_note,
    ACTIONS(436), 2,
      anon_sym_,
      anon_sym_TAB,
  [3274] = 5,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(391), 1,
      anon_sym_LF,
    STATE(135), 1,
      aux_sym_whitespace_repeat1,
    STATE(251), 1,
      sym_note,
    ACTIONS(438), 2,
      anon_sym_,
      anon_sym_TAB,
  [3291] = 4,
    ACTIONS(340), 1,
      sym_payee,
    STATE(113), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(335), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(440), 2,
      anon_sym_,
      anon_sym_TAB,
  [3306] = 4,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    STATE(229), 1,
      sym_commodity,
    ACTIONS(307), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
  [3321] = 4,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    STATE(226), 1,
      sym_commodity,
    ACTIONS(307), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
  [3336] = 4,
    STATE(11), 1,
      sym_commodity,
    STATE(126), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(307), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(445), 2,
      anon_sym_,
      anon_sym_TAB,
  [3351] = 5,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_LF,
    STATE(150), 1,
      aux_sym_whitespace_repeat1,
    STATE(230), 1,
      sym_note,
    ACTIONS(447), 2,
      anon_sym_,
      anon_sym_TAB,
  [3368] = 4,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    STATE(177), 1,
      sym_commodity,
    ACTIONS(307), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
  [3383] = 5,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      aux_sym_quantity_token1,
    STATE(11), 1,
      sym_quantity,
    STATE(125), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(449), 2,
      anon_sym_,
      anon_sym_TAB,
  [3400] = 5,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(356), 1,
      anon_sym_LF,
    STATE(151), 1,
      aux_sym_whitespace_repeat1,
    STATE(224), 1,
      sym_note,
    ACTIONS(451), 2,
      anon_sym_,
      anon_sym_TAB,
  [3417] = 5,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(416), 1,
      anon_sym_LF,
    STATE(134), 1,
      aux_sym_whitespace_repeat1,
    STATE(236), 1,
      sym_note,
    ACTIONS(453), 2,
      anon_sym_,
      anon_sym_TAB,
  [3434] = 5,
    ACTIONS(455), 1,
      anon_sym_DASH,
    ACTIONS(457), 1,
      aux_sym_quantity_token1,
    STATE(10), 1,
      sym_quantity,
    STATE(139), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(459), 2,
      anon_sym_,
      anon_sym_TAB,
  [3451] = 4,
    STATE(66), 1,
      sym_commodity,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(307), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
  [3466] = 4,
    STATE(10), 1,
      sym_commodity,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(461), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [3481] = 5,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      aux_sym_quantity_token1,
    STATE(10), 1,
      sym_quantity,
    STATE(139), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(459), 2,
      anon_sym_,
      anon_sym_TAB,
  [3498] = 4,
    STATE(10), 1,
      sym_commodity,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(307), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
  [3513] = 1,
    ACTIONS(463), 6,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name_part,
      anon_sym_,
      anon_sym_TAB,
  [3522] = 5,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(345), 1,
      anon_sym_LF,
    STATE(145), 1,
      aux_sym_whitespace_repeat1,
    STATE(242), 1,
      sym_note,
    ACTIONS(465), 2,
      anon_sym_,
      anon_sym_TAB,
  [3539] = 5,
    ACTIONS(455), 1,
      anon_sym_DASH,
    ACTIONS(457), 1,
      aux_sym_quantity_token1,
    STATE(11), 1,
      sym_quantity,
    STATE(122), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(467), 2,
      anon_sym_,
      anon_sym_TAB,
  [3556] = 4,
    STATE(11), 1,
      sym_commodity,
    STATE(124), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(461), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(469), 2,
      anon_sym_,
      anon_sym_TAB,
  [3571] = 5,
    ACTIONS(297), 1,
      anon_sym_LF,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    STATE(136), 1,
      aux_sym_whitespace_repeat1,
    STATE(265), 1,
      sym_note,
    ACTIONS(471), 2,
      anon_sym_,
      anon_sym_TAB,
  [3588] = 4,
    ACTIONS(41), 1,
      sym_single_date,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    STATE(181), 1,
      sym_date,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
  [3602] = 4,
    ACTIONS(41), 1,
      sym_single_date,
    STATE(146), 1,
      aux_sym_whitespace_repeat1,
    STATE(171), 1,
      sym_date,
    ACTIONS(473), 2,
      anon_sym_,
      anon_sym_TAB,
  [3616] = 4,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(241), 1,
      sym_note,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [3630] = 4,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(236), 1,
      sym_note,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [3644] = 4,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(242), 1,
      sym_note,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [3658] = 4,
    ACTIONS(41), 1,
      sym_single_date,
    STATE(132), 1,
      aux_sym_whitespace_repeat1,
    STATE(175), 1,
      sym_date,
    ACTIONS(475), 2,
      anon_sym_,
      anon_sym_TAB,
  [3672] = 2,
    ACTIONS(479), 1,
      anon_sym_EQ,
    ACTIONS(477), 4,
      anon_sym_LF,
      sym_time,
      anon_sym_,
      anon_sym_TAB,
  [3682] = 3,
    STATE(139), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(335), 2,
      anon_sym_DASH,
      aux_sym_quantity_token1,
    ACTIONS(481), 2,
      anon_sym_,
      anon_sym_TAB,
  [3694] = 4,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(248), 1,
      sym_note,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [3708] = 4,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(245), 1,
      sym_note,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [3722] = 1,
    ACTIONS(484), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_,
      anon_sym_TAB,
  [3730] = 1,
    ACTIONS(486), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_,
      anon_sym_TAB,
  [3738] = 3,
    STATE(54), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(159), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [3750] = 4,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(224), 1,
      sym_note,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [3764] = 4,
    ACTIONS(41), 1,
      sym_single_date,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    STATE(179), 1,
      sym_date,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
  [3778] = 4,
    ACTIONS(41), 1,
      sym_single_date,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    STATE(209), 1,
      sym_date,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
  [3792] = 3,
    STATE(54), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(159), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [3804] = 3,
    STATE(54), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(159), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(13), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [3816] = 4,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(265), 1,
      sym_note,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [3830] = 4,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(251), 1,
      sym_note,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [3844] = 3,
    ACTIONS(488), 1,
      sym_payee,
    STATE(185), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(490), 2,
      anon_sym_,
      anon_sym_TAB,
  [3855] = 3,
    ACTIONS(492), 1,
      aux_sym_word_directive_token3,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
  [3866] = 3,
    ACTIONS(335), 1,
      aux_sym_alias_subdirective_token1,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(494), 2,
      anon_sym_,
      anon_sym_TAB,
  [3877] = 3,
    ACTIONS(340), 1,
      aux_sym_word_directive_token2,
    STATE(155), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(497), 2,
      anon_sym_,
      anon_sym_TAB,
  [3888] = 3,
    ACTIONS(340), 1,
      aux_sym_word_directive_token1,
    STATE(156), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(500), 2,
      anon_sym_,
      anon_sym_TAB,
  [3899] = 3,
    ACTIONS(503), 1,
      sym_payee,
    STATE(113), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(428), 2,
      anon_sym_,
      anon_sym_TAB,
  [3910] = 3,
    ACTIONS(503), 1,
      sym_payee,
    STATE(172), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(505), 2,
      anon_sym_,
      anon_sym_TAB,
  [3921] = 2,
    ACTIONS(507), 1,
      anon_sym_LF,
    ACTIONS(509), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [3930] = 3,
    ACTIONS(511), 1,
      anon_sym_LF,
    STATE(109), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [3941] = 3,
    ACTIONS(515), 1,
      aux_sym_alias_subdirective_token1,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(517), 2,
      anon_sym_,
      anon_sym_TAB,
  [3952] = 3,
    ACTIONS(519), 1,
      aux_sym_alias_subdirective_token1,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(517), 2,
      anon_sym_,
      anon_sym_TAB,
  [3963] = 3,
    ACTIONS(521), 1,
      aux_sym_alias_subdirective_token1,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(517), 2,
      anon_sym_,
      anon_sym_TAB,
  [3974] = 3,
    ACTIONS(523), 1,
      aux_sym_word_directive_token1,
    STATE(156), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(525), 2,
      anon_sym_,
      anon_sym_TAB,
  [3985] = 3,
    ACTIONS(527), 1,
      aux_sym_alias_subdirective_token1,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(517), 2,
      anon_sym_,
      anon_sym_TAB,
  [3996] = 3,
    ACTIONS(529), 1,
      aux_sym_alias_subdirective_token1,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(517), 2,
      anon_sym_,
      anon_sym_TAB,
  [4007] = 3,
    ACTIONS(531), 1,
      aux_sym_alias_subdirective_token1,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(517), 2,
      anon_sym_,
      anon_sym_TAB,
  [4018] = 3,
    ACTIONS(533), 1,
      aux_sym_word_directive_token2,
    STATE(155), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(535), 2,
      anon_sym_,
      anon_sym_TAB,
  [4029] = 2,
    ACTIONS(315), 1,
      anon_sym_LF,
    ACTIONS(537), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4038] = 3,
    ACTIONS(539), 1,
      aux_sym_word_directive_token3,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
  [4049] = 3,
    ACTIONS(541), 1,
      sym_time,
    STATE(178), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(543), 2,
      anon_sym_,
      anon_sym_TAB,
  [4060] = 3,
    ACTIONS(545), 1,
      sym_payee,
    STATE(113), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(428), 2,
      anon_sym_,
      anon_sym_TAB,
  [4071] = 3,
    ACTIONS(545), 1,
      sym_payee,
    STATE(197), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(547), 2,
      anon_sym_,
      anon_sym_TAB,
  [4082] = 2,
    ACTIONS(549), 1,
      anon_sym_LF,
    ACTIONS(551), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4091] = 3,
    ACTIONS(553), 1,
      sym_time,
    STATE(180), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(555), 2,
      anon_sym_,
      anon_sym_TAB,
  [4102] = 1,
    ACTIONS(557), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4109] = 3,
    ACTIONS(559), 1,
      anon_sym_EQ,
    STATE(190), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(561), 2,
      anon_sym_,
      anon_sym_TAB,
  [4120] = 3,
    ACTIONS(563), 1,
      sym_time,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
  [4131] = 3,
    ACTIONS(563), 1,
      sym_time,
    STATE(195), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(565), 2,
      anon_sym_,
      anon_sym_TAB,
  [4142] = 3,
    ACTIONS(567), 1,
      sym_time,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
  [4153] = 3,
    ACTIONS(567), 1,
      sym_time,
    STATE(196), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(569), 2,
      anon_sym_,
      anon_sym_TAB,
  [4164] = 1,
    ACTIONS(571), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [4171] = 1,
    ACTIONS(573), 4,
      anon_sym_LF,
      sym_time,
      anon_sym_,
      anon_sym_TAB,
  [4178] = 2,
    ACTIONS(319), 1,
      anon_sym_LF,
    ACTIONS(575), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4187] = 3,
    ACTIONS(577), 1,
      sym_payee,
    STATE(113), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(428), 2,
      anon_sym_,
      anon_sym_TAB,
  [4198] = 1,
    ACTIONS(579), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [4205] = 2,
    ACTIONS(581), 1,
      anon_sym_LF,
    ACTIONS(583), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4214] = 3,
    ACTIONS(585), 1,
      sym_payee,
    STATE(157), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(587), 2,
      anon_sym_,
      anon_sym_TAB,
  [4225] = 3,
    ACTIONS(589), 1,
      anon_sym_LF,
    STATE(192), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(591), 2,
      anon_sym_,
      anon_sym_TAB,
  [4236] = 3,
    ACTIONS(593), 1,
      anon_sym_EQ,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
  [4247] = 1,
    ACTIONS(595), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4254] = 3,
    ACTIONS(597), 1,
      sym_payee,
    STATE(113), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(428), 2,
      anon_sym_,
      anon_sym_TAB,
  [4265] = 2,
    ACTIONS(599), 1,
      anon_sym_LF,
    ACTIONS(601), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4274] = 2,
    ACTIONS(603), 1,
      anon_sym_LF,
    ACTIONS(605), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4283] = 3,
    ACTIONS(607), 1,
      sym_time,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
  [4294] = 3,
    ACTIONS(609), 1,
      sym_time,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
  [4305] = 3,
    ACTIONS(488), 1,
      sym_payee,
    STATE(113), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(428), 2,
      anon_sym_,
      anon_sym_TAB,
  [4316] = 2,
    STATE(118), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(611), 2,
      anon_sym_,
      anon_sym_TAB,
  [4324] = 2,
    STATE(115), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(613), 2,
      anon_sym_,
      anon_sym_TAB,
  [4332] = 2,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(615), 2,
      anon_sym_,
      anon_sym_TAB,
  [4340] = 2,
    STATE(167), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(617), 2,
      anon_sym_,
      anon_sym_TAB,
  [4348] = 2,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(619), 2,
      anon_sym_,
      anon_sym_TAB,
  [4356] = 2,
    STATE(164), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(621), 2,
      anon_sym_,
      anon_sym_TAB,
  [4364] = 2,
    STATE(168), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(623), 2,
      anon_sym_,
      anon_sym_TAB,
  [4372] = 2,
    STATE(170), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(625), 2,
      anon_sym_,
      anon_sym_TAB,
  [4380] = 2,
    STATE(85), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(627), 2,
      anon_sym_,
      anon_sym_TAB,
  [4388] = 2,
    STATE(165), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(629), 2,
      anon_sym_,
      anon_sym_TAB,
  [4396] = 2,
    STATE(153), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(631), 2,
      anon_sym_,
      anon_sym_TAB,
  [4404] = 2,
    STATE(123), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(633), 2,
      anon_sym_,
      anon_sym_TAB,
  [4412] = 2,
    STATE(75), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(635), 2,
      anon_sym_,
      anon_sym_TAB,
  [4420] = 2,
    STATE(147), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(637), 2,
      anon_sym_,
      anon_sym_TAB,
  [4428] = 2,
    STATE(166), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(639), 2,
      anon_sym_,
      anon_sym_TAB,
  [4436] = 2,
    STATE(65), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(641), 2,
      anon_sym_,
      anon_sym_TAB,
  [4444] = 2,
    STATE(163), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(643), 2,
      anon_sym_,
      anon_sym_TAB,
  [4452] = 2,
    STATE(161), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(645), 2,
      anon_sym_,
      anon_sym_TAB,
  [4460] = 2,
    STATE(162), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(647), 2,
      anon_sym_,
      anon_sym_TAB,
  [4468] = 2,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(649), 2,
      anon_sym_,
      anon_sym_TAB,
  [4476] = 2,
    ACTIONS(331), 1,
      sym_account_name_part,
    STATE(255), 1,
      sym_account_name,
  [4483] = 2,
    ACTIONS(331), 1,
      sym_account_name_part,
    STATE(256), 1,
      sym_account_name,
  [4490] = 1,
    ACTIONS(651), 1,
      anon_sym_LF,
  [4494] = 1,
    ACTIONS(653), 1,
      aux_sym_comment_token1,
  [4498] = 1,
    ACTIONS(655), 1,
      aux_sym_default_subdirective_token1,
  [4502] = 1,
    ACTIONS(657), 1,
      anon_sym_LF,
  [4506] = 1,
    ACTIONS(391), 1,
      anon_sym_LF,
  [4510] = 1,
    ACTIONS(659), 1,
      aux_sym_quantity_token1,
  [4514] = 1,
    ACTIONS(661), 1,
      anon_sym_LF,
  [4518] = 1,
    ACTIONS(663), 1,
      anon_sym_EQ,
  [4522] = 1,
    ACTIONS(665), 1,
      anon_sym_LF,
  [4526] = 1,
    ACTIONS(667), 1,
      anon_sym_LF,
  [4530] = 1,
    ACTIONS(297), 1,
      anon_sym_LF,
  [4534] = 1,
    ACTIONS(669), 1,
      anon_sym_LF,
  [4538] = 1,
    ACTIONS(671), 1,
      anon_sym_LF,
  [4542] = 1,
    ACTIONS(673), 1,
      aux_sym_note_token1,
  [4546] = 1,
    ACTIONS(675), 1,
      sym_single_date,
  [4550] = 1,
    ACTIONS(677), 1,
      anon_sym_LF,
  [4554] = 1,
    ACTIONS(434), 1,
      anon_sym_LF,
  [4558] = 1,
    ACTIONS(549), 1,
      anon_sym_LF,
  [4562] = 1,
    ACTIONS(679), 1,
      anon_sym_LF,
  [4566] = 1,
    ACTIONS(681), 1,
      anon_sym_LF,
  [4570] = 1,
    ACTIONS(683), 1,
      aux_sym_default_subdirective_token1,
  [4574] = 1,
    ACTIONS(430), 1,
      anon_sym_LF,
  [4578] = 1,
    ACTIONS(356), 1,
      anon_sym_LF,
  [4582] = 1,
    ACTIONS(685), 1,
      anon_sym_LF,
  [4586] = 1,
    ACTIONS(687), 1,
      anon_sym_LF,
  [4590] = 1,
    ACTIONS(689), 1,
      anon_sym_LF,
  [4594] = 1,
    ACTIONS(691), 1,
      anon_sym_LF,
  [4598] = 1,
    ACTIONS(693), 1,
      ts_builtin_sym_end,
  [4602] = 1,
    ACTIONS(695), 1,
      anon_sym_LF,
  [4606] = 1,
    ACTIONS(697), 1,
      anon_sym_LF,
  [4610] = 1,
    ACTIONS(699), 1,
      anon_sym_LF,
  [4614] = 1,
    ACTIONS(416), 1,
      anon_sym_LF,
  [4618] = 1,
    ACTIONS(589), 1,
      anon_sym_LF,
  [4622] = 1,
    ACTIONS(701), 1,
      anon_sym_LF,
  [4626] = 1,
    ACTIONS(703), 1,
      anon_sym_LF,
  [4630] = 1,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
  [4634] = 1,
    ACTIONS(705), 1,
      anon_sym_RBRACK,
  [4638] = 1,
    ACTIONS(707), 1,
      sym_account_name_part,
  [4642] = 1,
    ACTIONS(507), 1,
      anon_sym_LF,
  [4646] = 1,
    ACTIONS(315), 1,
      anon_sym_LF,
  [4650] = 1,
    ACTIONS(709), 1,
      anon_sym_LF,
  [4654] = 1,
    ACTIONS(711), 1,
      aux_sym_word_directive_token1,
  [4658] = 1,
    ACTIONS(713), 1,
      anon_sym_LF,
  [4662] = 1,
    ACTIONS(715), 1,
      anon_sym_LF,
  [4666] = 1,
    ACTIONS(717), 1,
      aux_sym_quantity_token1,
  [4670] = 1,
    ACTIONS(345), 1,
      anon_sym_LF,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 91,
  [SMALL_STATE(4)] = 182,
  [SMALL_STATE(5)] = 230,
  [SMALL_STATE(6)] = 278,
  [SMALL_STATE(7)] = 326,
  [SMALL_STATE(8)] = 372,
  [SMALL_STATE(9)] = 418,
  [SMALL_STATE(10)] = 464,
  [SMALL_STATE(11)] = 497,
  [SMALL_STATE(12)] = 530,
  [SMALL_STATE(13)] = 569,
  [SMALL_STATE(14)] = 608,
  [SMALL_STATE(15)] = 647,
  [SMALL_STATE(16)] = 686,
  [SMALL_STATE(17)] = 716,
  [SMALL_STATE(18)] = 746,
  [SMALL_STATE(19)] = 776,
  [SMALL_STATE(20)] = 806,
  [SMALL_STATE(21)] = 836,
  [SMALL_STATE(22)] = 866,
  [SMALL_STATE(23)] = 896,
  [SMALL_STATE(24)] = 926,
  [SMALL_STATE(25)] = 956,
  [SMALL_STATE(26)] = 986,
  [SMALL_STATE(27)] = 1016,
  [SMALL_STATE(28)] = 1046,
  [SMALL_STATE(29)] = 1076,
  [SMALL_STATE(30)] = 1106,
  [SMALL_STATE(31)] = 1136,
  [SMALL_STATE(32)] = 1166,
  [SMALL_STATE(33)] = 1196,
  [SMALL_STATE(34)] = 1226,
  [SMALL_STATE(35)] = 1256,
  [SMALL_STATE(36)] = 1286,
  [SMALL_STATE(37)] = 1316,
  [SMALL_STATE(38)] = 1346,
  [SMALL_STATE(39)] = 1376,
  [SMALL_STATE(40)] = 1406,
  [SMALL_STATE(41)] = 1436,
  [SMALL_STATE(42)] = 1466,
  [SMALL_STATE(43)] = 1496,
  [SMALL_STATE(44)] = 1524,
  [SMALL_STATE(45)] = 1552,
  [SMALL_STATE(46)] = 1580,
  [SMALL_STATE(47)] = 1608,
  [SMALL_STATE(48)] = 1636,
  [SMALL_STATE(49)] = 1687,
  [SMALL_STATE(50)] = 1738,
  [SMALL_STATE(51)] = 1789,
  [SMALL_STATE(52)] = 1837,
  [SMALL_STATE(53)] = 1885,
  [SMALL_STATE(54)] = 1933,
  [SMALL_STATE(55)] = 1969,
  [SMALL_STATE(56)] = 1988,
  [SMALL_STATE(57)] = 2009,
  [SMALL_STATE(58)] = 2041,
  [SMALL_STATE(59)] = 2061,
  [SMALL_STATE(60)] = 2077,
  [SMALL_STATE(61)] = 2109,
  [SMALL_STATE(62)] = 2141,
  [SMALL_STATE(63)] = 2173,
  [SMALL_STATE(64)] = 2202,
  [SMALL_STATE(65)] = 2229,
  [SMALL_STATE(66)] = 2256,
  [SMALL_STATE(67)] = 2283,
  [SMALL_STATE(68)] = 2312,
  [SMALL_STATE(69)] = 2341,
  [SMALL_STATE(70)] = 2370,
  [SMALL_STATE(71)] = 2397,
  [SMALL_STATE(72)] = 2424,
  [SMALL_STATE(73)] = 2451,
  [SMALL_STATE(74)] = 2478,
  [SMALL_STATE(75)] = 2505,
  [SMALL_STATE(76)] = 2532,
  [SMALL_STATE(77)] = 2559,
  [SMALL_STATE(78)] = 2588,
  [SMALL_STATE(79)] = 2602,
  [SMALL_STATE(80)] = 2616,
  [SMALL_STATE(81)] = 2639,
  [SMALL_STATE(82)] = 2662,
  [SMALL_STATE(83)] = 2679,
  [SMALL_STATE(84)] = 2702,
  [SMALL_STATE(85)] = 2725,
  [SMALL_STATE(86)] = 2748,
  [SMALL_STATE(87)] = 2771,
  [SMALL_STATE(88)] = 2794,
  [SMALL_STATE(89)] = 2809,
  [SMALL_STATE(90)] = 2832,
  [SMALL_STATE(91)] = 2855,
  [SMALL_STATE(92)] = 2878,
  [SMALL_STATE(93)] = 2901,
  [SMALL_STATE(94)] = 2924,
  [SMALL_STATE(95)] = 2947,
  [SMALL_STATE(96)] = 2962,
  [SMALL_STATE(97)] = 2977,
  [SMALL_STATE(98)] = 3000,
  [SMALL_STATE(99)] = 3023,
  [SMALL_STATE(100)] = 3046,
  [SMALL_STATE(101)] = 3069,
  [SMALL_STATE(102)] = 3092,
  [SMALL_STATE(103)] = 3112,
  [SMALL_STATE(104)] = 3132,
  [SMALL_STATE(105)] = 3152,
  [SMALL_STATE(106)] = 3172,
  [SMALL_STATE(107)] = 3182,
  [SMALL_STATE(108)] = 3202,
  [SMALL_STATE(109)] = 3222,
  [SMALL_STATE(110)] = 3240,
  [SMALL_STATE(111)] = 3257,
  [SMALL_STATE(112)] = 3274,
  [SMALL_STATE(113)] = 3291,
  [SMALL_STATE(114)] = 3306,
  [SMALL_STATE(115)] = 3321,
  [SMALL_STATE(116)] = 3336,
  [SMALL_STATE(117)] = 3351,
  [SMALL_STATE(118)] = 3368,
  [SMALL_STATE(119)] = 3383,
  [SMALL_STATE(120)] = 3400,
  [SMALL_STATE(121)] = 3417,
  [SMALL_STATE(122)] = 3434,
  [SMALL_STATE(123)] = 3451,
  [SMALL_STATE(124)] = 3466,
  [SMALL_STATE(125)] = 3481,
  [SMALL_STATE(126)] = 3498,
  [SMALL_STATE(127)] = 3513,
  [SMALL_STATE(128)] = 3522,
  [SMALL_STATE(129)] = 3539,
  [SMALL_STATE(130)] = 3556,
  [SMALL_STATE(131)] = 3571,
  [SMALL_STATE(132)] = 3588,
  [SMALL_STATE(133)] = 3602,
  [SMALL_STATE(134)] = 3616,
  [SMALL_STATE(135)] = 3630,
  [SMALL_STATE(136)] = 3644,
  [SMALL_STATE(137)] = 3658,
  [SMALL_STATE(138)] = 3672,
  [SMALL_STATE(139)] = 3682,
  [SMALL_STATE(140)] = 3694,
  [SMALL_STATE(141)] = 3708,
  [SMALL_STATE(142)] = 3722,
  [SMALL_STATE(143)] = 3730,
  [SMALL_STATE(144)] = 3738,
  [SMALL_STATE(145)] = 3750,
  [SMALL_STATE(146)] = 3764,
  [SMALL_STATE(147)] = 3778,
  [SMALL_STATE(148)] = 3792,
  [SMALL_STATE(149)] = 3804,
  [SMALL_STATE(150)] = 3816,
  [SMALL_STATE(151)] = 3830,
  [SMALL_STATE(152)] = 3844,
  [SMALL_STATE(153)] = 3855,
  [SMALL_STATE(154)] = 3866,
  [SMALL_STATE(155)] = 3877,
  [SMALL_STATE(156)] = 3888,
  [SMALL_STATE(157)] = 3899,
  [SMALL_STATE(158)] = 3910,
  [SMALL_STATE(159)] = 3921,
  [SMALL_STATE(160)] = 3930,
  [SMALL_STATE(161)] = 3941,
  [SMALL_STATE(162)] = 3952,
  [SMALL_STATE(163)] = 3963,
  [SMALL_STATE(164)] = 3974,
  [SMALL_STATE(165)] = 3985,
  [SMALL_STATE(166)] = 3996,
  [SMALL_STATE(167)] = 4007,
  [SMALL_STATE(168)] = 4018,
  [SMALL_STATE(169)] = 4029,
  [SMALL_STATE(170)] = 4038,
  [SMALL_STATE(171)] = 4049,
  [SMALL_STATE(172)] = 4060,
  [SMALL_STATE(173)] = 4071,
  [SMALL_STATE(174)] = 4082,
  [SMALL_STATE(175)] = 4091,
  [SMALL_STATE(176)] = 4102,
  [SMALL_STATE(177)] = 4109,
  [SMALL_STATE(178)] = 4120,
  [SMALL_STATE(179)] = 4131,
  [SMALL_STATE(180)] = 4142,
  [SMALL_STATE(181)] = 4153,
  [SMALL_STATE(182)] = 4164,
  [SMALL_STATE(183)] = 4171,
  [SMALL_STATE(184)] = 4178,
  [SMALL_STATE(185)] = 4187,
  [SMALL_STATE(186)] = 4198,
  [SMALL_STATE(187)] = 4205,
  [SMALL_STATE(188)] = 4214,
  [SMALL_STATE(189)] = 4225,
  [SMALL_STATE(190)] = 4236,
  [SMALL_STATE(191)] = 4247,
  [SMALL_STATE(192)] = 4254,
  [SMALL_STATE(193)] = 4265,
  [SMALL_STATE(194)] = 4274,
  [SMALL_STATE(195)] = 4283,
  [SMALL_STATE(196)] = 4294,
  [SMALL_STATE(197)] = 4305,
  [SMALL_STATE(198)] = 4316,
  [SMALL_STATE(199)] = 4324,
  [SMALL_STATE(200)] = 4332,
  [SMALL_STATE(201)] = 4340,
  [SMALL_STATE(202)] = 4348,
  [SMALL_STATE(203)] = 4356,
  [SMALL_STATE(204)] = 4364,
  [SMALL_STATE(205)] = 4372,
  [SMALL_STATE(206)] = 4380,
  [SMALL_STATE(207)] = 4388,
  [SMALL_STATE(208)] = 4396,
  [SMALL_STATE(209)] = 4404,
  [SMALL_STATE(210)] = 4412,
  [SMALL_STATE(211)] = 4420,
  [SMALL_STATE(212)] = 4428,
  [SMALL_STATE(213)] = 4436,
  [SMALL_STATE(214)] = 4444,
  [SMALL_STATE(215)] = 4452,
  [SMALL_STATE(216)] = 4460,
  [SMALL_STATE(217)] = 4468,
  [SMALL_STATE(218)] = 4476,
  [SMALL_STATE(219)] = 4483,
  [SMALL_STATE(220)] = 4490,
  [SMALL_STATE(221)] = 4494,
  [SMALL_STATE(222)] = 4498,
  [SMALL_STATE(223)] = 4502,
  [SMALL_STATE(224)] = 4506,
  [SMALL_STATE(225)] = 4510,
  [SMALL_STATE(226)] = 4514,
  [SMALL_STATE(227)] = 4518,
  [SMALL_STATE(228)] = 4522,
  [SMALL_STATE(229)] = 4526,
  [SMALL_STATE(230)] = 4530,
  [SMALL_STATE(231)] = 4534,
  [SMALL_STATE(232)] = 4538,
  [SMALL_STATE(233)] = 4542,
  [SMALL_STATE(234)] = 4546,
  [SMALL_STATE(235)] = 4550,
  [SMALL_STATE(236)] = 4554,
  [SMALL_STATE(237)] = 4558,
  [SMALL_STATE(238)] = 4562,
  [SMALL_STATE(239)] = 4566,
  [SMALL_STATE(240)] = 4570,
  [SMALL_STATE(241)] = 4574,
  [SMALL_STATE(242)] = 4578,
  [SMALL_STATE(243)] = 4582,
  [SMALL_STATE(244)] = 4586,
  [SMALL_STATE(245)] = 4590,
  [SMALL_STATE(246)] = 4594,
  [SMALL_STATE(247)] = 4598,
  [SMALL_STATE(248)] = 4602,
  [SMALL_STATE(249)] = 4606,
  [SMALL_STATE(250)] = 4610,
  [SMALL_STATE(251)] = 4614,
  [SMALL_STATE(252)] = 4618,
  [SMALL_STATE(253)] = 4622,
  [SMALL_STATE(254)] = 4626,
  [SMALL_STATE(255)] = 4630,
  [SMALL_STATE(256)] = 4634,
  [SMALL_STATE(257)] = 4638,
  [SMALL_STATE(258)] = 4642,
  [SMALL_STATE(259)] = 4646,
  [SMALL_STATE(260)] = 4650,
  [SMALL_STATE(261)] = 4654,
  [SMALL_STATE(262)] = 4658,
  [SMALL_STATE(263)] = 4662,
  [SMALL_STATE(264)] = 4666,
  [SMALL_STATE(265)] = 4670,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(221),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(200),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(202),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(203),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(260),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(204),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(205),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(206),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(217),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(208),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(199),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(210),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(198),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(211),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(138),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 4),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 5),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 5),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2), SHIFT_REPEAT(69),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2), SHIFT_REPEAT(91),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 5),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(54),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 14),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 14),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nomarket_subdirective, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nomarket_subdirective, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 12),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 12),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_subdirective, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_subdirective, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 13),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 13),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 11),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 11),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_subdirective, 4),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_subdirective, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_subdirective, 4),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_subdirective, 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_subdirective, 4),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_subdirective, 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eval_subdirective, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eval_subdirective, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_subdirective, 4),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_subdirective, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 10),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 10),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee_subdirective, 4),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_payee_subdirective, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_subdirective, 4),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_subdirective, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(55),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(56),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(58),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(82),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_name, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_name, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_name_repeat1, 2),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_name_repeat1, 2), SHIFT_REPEAT(257),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(113),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(139),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(154),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(155),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(156),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 7),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 5),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 9),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 10),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 3),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 3),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 4),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 6),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 7),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [693] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 8),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 5),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 5),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 5),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ledger(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
