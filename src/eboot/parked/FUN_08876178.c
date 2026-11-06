/* Purpose: blend two four-component vectors with reversed scalar weights. */
void FUN_08876178(float *output, const float *left, const float *right,
                  float left_weight, float right_weight)
{
    int i;
    for (i = 0; i < 4; i++)
        output[i] = left[i] * right_weight + right[i] * left_weight;
}
