/*
 * Purpose hypothesis: single-precision cosine wrapper.
 *
 * Attempt 1 recovered the direct small-input, NaN, reduction, and quadrant
 * paths from the ABI and calls.  It compiles to 57 words against the 56-word
 * reference.  The first two comparisons, stack frame, reduction call, and
 * reduced-input loads match after relocation masking.
 *
 * Attempt 2 uses a signed bit word, matching the reference's signed `slt`
 * operations.  The remaining mismatch is compiler scheduling: GCC puts the
 * zero float transfer before the direct kernel call and leaves its delay slot
 * empty.  That additional word moves all following switch targets.  The
 * reference calls with the zero transfer in the delay slot.  No flags,
 * pragmas, register controls, or asm were used.
 */
typedef union FloatBits {
    float value;
    int bits;
} FloatBits;

extern int FUN_08805608(float value, float result[2]);
extern float FUN_08806edc(float value, float tail);
extern float FUN_08807870(float value, float tail, int has_tail);

float FUN_088082b8(float value) {
    FloatBits value_bits;
    float reduced[2];
    float zero = 0.0f;
    int quadrant;

    value_bits.value = value;
    value_bits.bits &= 0x7fffffff;
    if (value_bits.bits <= 0x3f490fd8) {
        return FUN_08806edc(value, zero);
    }
    if (value_bits.bits > 0x7f7fffff) {
        return value - value;
    }

    quadrant = FUN_08805608(value, reduced);
    switch (quadrant & 3) {
    case 0:
        return FUN_08806edc(reduced[0], reduced[1]);
    case 1:
        return -FUN_08807870(reduced[0], reduced[1], 1);
    case 2:
        return -FUN_08806edc(reduced[0], reduced[1]);
    default:
        return FUN_08807870(reduced[0], reduced[1], 1);
    }
}
