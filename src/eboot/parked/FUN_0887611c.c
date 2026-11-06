/* Purpose: return the dot product of two four-component vectors. */
float FUN_0887611c(const float *left, const float *right)
{
    return left[0] * right[0] + left[1] * right[1] +
           left[2] * right[2] + left[3] * right[3];
}
