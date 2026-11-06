/*
 * PARKED: reduced-angle sine-polynomial evaluation.
 *
 * Hypothesis: x is the reduced angle, y is a correction term, and correction
 * selects the compensated path.  The seven adjacent float constants and the
 * nested multiplies match the familiar fdlibm kernel-sine polynomial shape.
 * The ABI and float typing are inferred from the FPR argument registers.
 *
 * GCC 4.0.4 group A reproduces the arithmetic sequence from this plain draft,
 * but puts the sign-bit `ins` before the threshold immediate, introduces an
 * extra control-flow word around the integer conversion, and consequently
 * shifts the remaining schedule.  No exact source-only wording was found;
 * this remains unclassified rather than a LIBRARY identification.
 */
extern const float D_08962e84, D_08962e88, D_08962e8c, D_08962e90;
extern const float D_08962e94, D_08962e98, D_08962e9c;

float FUN_08807870(float x, float y, int correction)
{
    union { float f; int i; } bits;
    float z, v, r;

    bits.f = x;
    bits.i &= 0x7fffffff;
    if (bits.i < 0x32000000 && (int)x == 0)
        return x;

    z = x * x;
    v = x * z;
    r = D_08962e94 + z * (z * (D_08962e8c +
        z * (z * D_08962e84 - D_08962e88)) - D_08962e90);
    if (correction == 0)
        return x + v * (z * r - D_08962e98);
    return x - ((z * (y * D_08962e9c - v * r) - y) + v * D_08962e98);
}
