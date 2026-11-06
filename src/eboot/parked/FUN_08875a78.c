/* Purpose: multiply two three-by-three matrices stored in four-float rows. */
void FUN_08875a78(float *output, const float *left, const float *right)
{
    int row;
    int column;
    int inner;

    for (row = 0; row < 3; row++) {
        for (column = 0; column < 3; column++) {
            float value = 0.0f;
            for (inner = 0; inner < 3; inner++)
                value += left[row * 4 + inner] * right[inner * 4 + column];
            output[row * 4 + column] = value;
        }
    }
}
