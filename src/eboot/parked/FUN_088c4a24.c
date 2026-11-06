/*
 * Purpose hypothesis: scale the product of two integer inputs by a shared
 * float and truncate the result.
 *
 * Parked after direct expression, a local divisor, and a volatile local
 * divisor. All produce the correct operations and argument registers, but
 * GCC schedules the shared-float load after the multiply; the reference loads
 * it before the integer-to-float conversions. D_089681a0 also needs an
 * absolute declaration in symbols.s. Revisit for a readable source ordering
 * that preserves the reference scheduling.
 */
extern volatile float D_089681a0;

int FUN_088c4a24(void *unused, int first, int second)
{
    float divisor = D_089681a0;

    return (int)(((float)first * (float)second) / divisor);
}
