/*
 * Purpose: compute the two-component dot product of the first and third
 * float fields.
 * Hypothesis: the omitted middle field is not part of this operation.
 */
float FUN_088dca20(const void *unused, const float *left, const float *right) {
    return left[0] * right[0] + left[2] * right[2];
}
