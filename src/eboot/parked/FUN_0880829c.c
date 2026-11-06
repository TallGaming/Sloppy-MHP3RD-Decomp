/*
 * Purpose: return the magnitude of the first float with the second float's
 * sign bit.
 *
 * Attempt 1: the compiler builtin expands to branch and FPU operations.
 * Attempt 2: the readable union bit operation matches every data operation.
 * GCC emits the final integer-to-float transfer before the return; the
 * reference places it in the return delay slot.
 *
 * Blocker: final return scheduling under group A. Revisit with a matching
 * nearby float bit-manipulation source shape or a supported scheduler change.
 */
typedef union FloatBits {
    float value;
    unsigned int bits;
} FloatBits;

float FUN_0880829c(float magnitude, float sign_source) {
    FloatBits magnitude_bits;
    FloatBits sign_bits;

    magnitude_bits.value = magnitude;
    sign_bits.value = sign_source;
    magnitude_bits.bits = (magnitude_bits.bits & 0x7FFFFFFF) |
                          (sign_bits.bits & 0x80000000);
    return magnitude_bits.value;
}
