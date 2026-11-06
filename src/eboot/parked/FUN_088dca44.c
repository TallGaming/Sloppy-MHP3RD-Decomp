/*
 * Purpose hypothesis: return the dot product of two three-float vectors.
 *
 * Parked after direct, partial-sum, and explicit-local forms. The closest form
 * has the correct inputs and final result but keeps the second left component
 * and third right component in opposite float registers, so their multiply
 * and the first addition are scheduled differently. Revisit when a readable
 * source layout preserves the reference float register allocation.
 */
float FUN_088dca44(void *unused, const float *left, const float *right)
{
    return (left[0] * right[0]) + (left[1] * right[1]) +
           (left[2] * right[2]);
}
