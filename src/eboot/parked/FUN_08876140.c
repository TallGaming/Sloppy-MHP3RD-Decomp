/* Purpose: blend two four-component vectors with two scalar weights. */
void FUN_08876140(float *output, const float *left, const float *right,
                  float left_weight, float right_weight)
{
    int i;
    for (i = 0; i < 4; i++)
        output[i] = left[i] * left_weight + right[i] * right_weight;
}
