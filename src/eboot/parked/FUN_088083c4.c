/*
 * PARKED: IEEE-754 single-precision round-down operation.
 *
 * The exponent split, fractional mask and negative fractional increment
 * identify this as an fdlibm-style floorf implementation.  The input/output
 * float ABI is inferred from $f12/$f0; integer names and the large `huge`
 * constant remain hypotheses pending wider library provenance work.
 *
 * GCC 4.0.4 group A reproduces the core mask and rounding operations, but its
 * register allocation puts the raw word and exponent in different registers
 * and it schedules the exceptional branches differently.  No per-function
 * options, register pinning, or assembly are used here.
 */
extern const float D_08962ee8;

float FUN_088083c4(float x)
{
    union { float f; unsigned int u; } bits;
    unsigned int word;
    unsigned int magnitude;
    unsigned int fraction_mask;
    int exponent;

    bits.f = x;
    word = bits.u;
    magnitude = word & 0x7fffffff;
    exponent = (int)(magnitude >> 23) - 127;

    if (exponent < 23) {
        if (exponent < 0) {
            if (D_08962ee8 + x > 0.0f) {
                if ((int)word >= 0)
                    word = 0;
                else if (magnitude != 0)
                    word = 0xbf800000;
            }
        } else {
            fraction_mask = 0x007fffff >> exponent;
            if ((word & fraction_mask) == 0)
                return x;
            if (D_08962ee8 + x > 0.0f) {
                if ((int)word < 0)
                    word += 0x00800000 >> exponent;
                word &= ~fraction_mask;
            }
        }
    } else if (magnitude > 0x7f7fffff) {
        return x + x;
    } else {
        return x;
    }

    bits.u = word;
    return bits.f;
}
