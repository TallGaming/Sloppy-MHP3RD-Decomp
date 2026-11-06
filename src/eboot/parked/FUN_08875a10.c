/* Purpose: transform a four-component vector by a four-row matrix. */
void FUN_08875a10(float *output, const float *vector, const float *matrix)
{
    int row;

    for (row = 0; row < 4; row++)
        output[row] = vector[0] * matrix[row * 4 + 0] +
                      vector[1] * matrix[row * 4 + 1] +
                      vector[2] * matrix[row * 4 + 2] +
                      vector[3] * matrix[row * 4 + 3];
}
