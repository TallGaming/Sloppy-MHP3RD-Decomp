/*
 * Purpose: partial input and callee-flow view for FUN_0885eda8.
 *
 * This is not a whole-function candidate.  Current callee probe evidence
 * corrects the early first-lane hypothesis: the target's second integer lane
 * is a selector pointer whose byte +1 and halfword +2 are consumed by
 * FUN_0885e12c.  The target has one direct call to that callee and no indirect
 * calls.  Its first lane and its return type remain deliberately untyped.
 */

typedef unsigned char u8;

typedef struct SelectorInput {
    u8 reserved_00;
    u8 category;       /* +1 */
    unsigned short index; /* +2 */
} SelectorInput;

/* Supplemental callee probe: first lane is unused on tested routes. */
extern unsigned FUN_0885e12c(void *unused, const SelectorInput *selector);

/* The supplied second lane is consumed with this selector layout. */
static u8 selector_category(const SelectorInput *input)
{
    return input->category;
}

/*
 * On categories below five, the callee selects a 40-byte table record and
 * returns the maximum of bytes +21..+24 minus one, clamped to 0..63.  Other
 * categories return zero.  Its full ABI and all routes are still incomplete.
 */

/*
 * Artificial probes confirm the direct path reaches FUN_0885e12c and that
 * this wrapper does not return the mocked callee value unchanged.  That
 * establishes flow only, not prototypes.
 */
