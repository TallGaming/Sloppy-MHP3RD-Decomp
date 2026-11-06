/*
 * Purpose: retain the supported high-level view of FUN_088591d4.
 *
 * This is an uncompiled partial review, not a complete callable candidate.
 * The routine has four sequential custom signature predicates.  The locally
 * recovered call order shows that each selected predicate path performs two
 * calls to the verified public formatted-output wrapper and one call to the
 * verified public puts wrapper.  The predicates' parked drafts describe
 * four-byte signature comparisons, but their callable ABI and ownership are
 * not independently verified.  Therefore input type, return type, branch
 * conditions, and output arguments must remain unresolved.
 */

enum fun_088591d4_path {
    FUN_088591D4_PRIMARY_SIGNATURE,
    FUN_088591D4_FIRST_ALTERNATE_SIGNATURE,
    FUN_088591D4_SECOND_ALTERNATE_SIGNATURE,
    FUN_088591D4_THIRD_ALTERNATE_SIGNATURE,
    FUN_088591D4_UNRESOLVED_FALLTHROUGH
};

struct fun_088591d4_partial_view {
    const void *input_record;
    enum fun_088591d4_path selected_path;
    unsigned int formatted_output_calls;
    unsigned int line_output_calls;
};
