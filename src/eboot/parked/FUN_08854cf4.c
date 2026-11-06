/*
 * Purpose: preserve the supported scalar-float interface investigation for
 * FUN_08854cf4 without asserting a complete implementation.
 *
 * The function is a Group B, 144-byte target.  The adjacent angle helper
 * FUN_08854a48 is already known to use float angle wrapping.  Local caller
 * and decoder captures were retained for this target and FUN_08854abc.
 * They do not yet prove this target's complete argument ownership, call path,
 * or return value.  Do not compile this incomplete field view as a candidate.
 */
typedef struct Fun08854cf4ScalarView {
    float input_0;
    float input_1;
} Fun08854cf4ScalarView;

/* The FPR-facing scalar view is evidence only; signature remains unresolved. */
extern float FUN_08854cf4(float input_0, float input_1);
