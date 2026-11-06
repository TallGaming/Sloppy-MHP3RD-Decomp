/*
 * Purpose: partial recovery of a private floating-point record update.
 *
 * The 572-byte target has one direct callee, FUN_0887611c, whose recovered
 * contract is a four-component float dot product.  The target itself has
 * floating comparisons and arithmetic, multiple stores, and a derived access
 * at a2+0xfc8.  No controller-runtime global occurs in its target inventory.
 *
 * This is evidence scaffolding, not a compilable whole-function candidate:
 * callers, formal ABI, vector layout, branch predicates, and units are not
 * independently recovered.
 */
typedef unsigned char u8;

typedef struct Vec4 {
    float value[4];
} Vec4;

typedef struct RecordArgumentView {
    u8 unknown_000_to_fc7[0xfc8];
    /* Width/type unresolved: another subsystem reads a word at this offset. */
    u8 storage_fc8[4];
} RecordArgumentView;

extern float FUN_0887611c(const float *left, const float *right);

/*
 * Supported behavior boundary: one path reads state associated with the
 * third argument's +0xfc8 region, performs a four-float dot product, uses
 * four recovered floating comparisons and two float subtractions, and updates
 * private record fields.
 * The target's exact vector operands and control predicates are unresolved;
 * do not replace this comment with a guessed branch tree or compile a stub.
 */
