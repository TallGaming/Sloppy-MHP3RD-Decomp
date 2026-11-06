/* Purpose: transform a three-component vector by a three-row matrix. */
void FUN_088759ec(float *output, const float *vector, const float *matrix)
{
    int row;

    for (row = 0; row < 3; row++)
        output[row] = vector[0] * matrix[row * 4 + 0] +
                      vector[1] * matrix[row * 4 + 1] +
                      vector[2] * matrix[row * 4 + 2];
}
