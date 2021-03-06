module.exports = grammar({
    name: 'ledger',

    extras: $ => [],

    inline: $ => [
        $.indented_line,
        $.spacer,
        $.whitespace,
    ],

    rules: {
        source_file: $ => repeat(choice($.journal_item, '\n')),

        journal_item: $ => choice(
            $.comment,
            $.directive,
            $.xact,
        ),

        comment: $ => seq(choice(';', '*'), /.*\n/),

        indented_line: $ => seq($.whitespace, /[^\n]+\n/),

        // ! and @ are deprecated, let's not take them into account
        directive: $ => choice(
            $.account_directive,
            $.commodity_directive,
            seq($.word_directive, '\n'),
            seq($.char_directive, '\n'),
        ),

        account_directive: $ => seq(
            seq('account', $.whitespace, $.account, '\n'),
            repeat($.account_subdirective),
        ),

        account_subdirective: $ => choice(
            $.alias_subdirective,
            $.assert_subdirective,
            $.check_subdirective,
            $.default_subdirective,
            $.eval_subdirective,
            $.note_subdirective,
            $.payee_subdirective,
        ),

        commodity_directive: $ => seq(
            seq('commodity', $.whitespace, $.commodity, '\n'),
            repeat($.commodity_subdirective),
        ),

        commodity_subdirective: $ => choice(
            $.alias_subdirective,
            $.default_subdirective,
            $.format_subdirective,
            $.note_subdirective,
            $.nomarket_subdirective,
        ),

        word_directive: $ => choice(
            seq(
                'include',
                $.whitespace,
                /.+/,
            ),
            'end',
            seq('alias', $.whitespace, /[^=]+/, '=', /.+/),
            seq(
                'def',
                $.whitespace,
                /.+/,
            ),
            seq(
                'year',
                $.whitespace,
                /\d{4}/,
            ),
            seq(
                'bucket',
                $.whitespace,
                $.account,
            ),
        ),

        char_directive: $ => choice(
            // timeclock.el
            $.check_in,
            $.check_out,

            seq('A', $.whitespace, $.account),
            seq('Y', $.whitespace, /\d{4}/),
            seq('N', $.whitespace, $.commodity),
            seq('D', $.whitespace, $.amount),
            seq('C', $.whitespace,
                seq($.commodity,
                    optional($.whitespace), '=',
                    optional($.whitespace),
                    $.amount)),
            seq(
                'P',
                $.whitespace,
                seq(
                    $.date,
                    $.whitespace,
                    $.commodity,
                    optional($.whitespace),
                    $.amount,
                ),
            )
        ),

        alias_subdirective: $ => seq(
            $.whitespace,
            'alias',
            $.whitespace,
            /.+\n/,
        ),

        assert_subdirective: $ => seq(
            $.whitespace,
            'assert',
            $.whitespace,
            /.+\n/,
        ),

        check_subdirective: $ => seq(
            $.whitespace,
            'check',
            $.whitespace,
            /.+\n/,
        ),

        default_subdirective: $ => seq(
            $.whitespace,
            'default',
            /\n/,
        ),

        eval_subdirective: $ => seq(
            $.whitespace,
            'eval',
            $.whitespace,
            /.+\n/,
        ),

        format_subdirective: $ => seq(
            $.whitespace,
            'format',
            $.whitespace,
            $.amount,
        ),

        nomarket_subdirective: $ => seq(
            $.whitespace,
            'nomarket',
            /\n/,
        ),

        note_subdirective: $ => seq(
            $.whitespace,
            'note',
            $.whitespace,
            /.+\n/,
        ),

        payee_subdirective: $ => seq(
            $.whitespace,
            'payee',
            $.whitespace,
            /.+\n/,
        ),

        check_in: $ => seq(choice('i', 'I'),
            optional($.whitespace),
            $.date,
            optional($.whitespace),
            $.time,
            optional($.whitespace),
            $.account,
            optional(
                seq($.spacer,
                optional($.whitespace),
                $.payee),
            ),
        ),

        check_out: $ => seq(choice('o', 'O'),
            optional($.whitespace),
            $.date,
            optional($.whitespace),
            $.time),

        xact: $ => choice(
            $.plain_xact,
            // TODO $.periodic_xact,
            // TODO $.automated_xact,
        ),

        plain_xact: $ => seq(
            seq(
                $.date,
                optional(seq($.whitespace, $.status)),
                optional(seq($.whitespace, $.payee)),
                '\n'), // TODO code opt, note opt
            repeat1(
                choice(
                    $.posting,
                    seq($.whitespace, $.note, '\n'))),
        ),

        // date, optionally with an effective date, e.g.:
        // 2020-01-01
        // 2020/01/01=2020.01-02
        date: $ => seq($.single_date, optional(seq('=', $.single_date))),

        single_date: $ => /\d{4}[-\.\/]\d{2}[-\.\/]\d{2}/,

        time: $ => /\d{2}:\d{2}:\d{2}/,

        status: $ => choice('*', '!'),

        payee: $ => /[^*!\n]+/,

        note: $ => seq(';', /.*/),

        posting: $ => seq(
            $.whitespace,
            optional(seq($.status, optional($.whitespace))),
            $.account,
            optional(seq(
                $.spacer,
                optional(seq(optional($.whitespace), $.amount)),
                optional(seq(optional($.whitespace), $.price)),
                optional(seq(optional($.whitespace), $.balance_assertion)),
                optional(seq(optional($.whitespace), $.note)),
            )),
            '\n'),

        account: $ => alias(choice(
            $.account_name,
            seq('(', $.account_name, ')'),
            seq('[', $.account_name, ']'),
        ), ''),

        account_name: $ => /[^ ;](\S \S|\S)*/,

        amount: $ => choice(
            seq(
                $.quantity,
                optional($.whitespace),
                $.commodity),
            seq(
                $.commodity,
                optional($.whitespace),
                $.quantity),
        ),

        quantity: $ => seq(
            optional('-'), /\d([\d., ]*\d)?/,
        ),

        commodity: $ => choice(/\p{L}+/, /"[^"\n]*"/),

        price: $ => seq(
            choice('@', '@@'),
            optional($.whitespace),
            $.amount,
        ),

        balance_assertion: $ => seq(
            '=',
            optional($.whitespace),
            choice($.amount),
        ),

        whitespace: $ => repeat1(choice(' ', '\t')),

        spacer: $ => choice('  ', '\t', ' \t'),
    }
})
