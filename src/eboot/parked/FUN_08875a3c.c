/* Purpose: multiply two four-by-four matrices. */
void FUN_08875a3c(float *output, const float *left, const float *right)
{
    int row;
    int column;
    int inner;

    for (row = 0; row < 4; row++) {
        for (column = 0; column < 4; column++) {
            float value = 0.0f;
            for (inner = 0; inner < 4; inner++)
                value += left[row * 4 + inner] * right[inner * 4 + column];
            output[row * 4 + column] = value;
        }
    }
}
