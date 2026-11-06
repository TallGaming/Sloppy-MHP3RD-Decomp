/* Purpose: build an identity matrix with a translation row. */
void FUN_088779c0(float *matrix, float x, float y, float z)
{
    int i;
    for (i = 0; i < 16; i++)
        matrix[i] = 0.0f;
    matrix[0] = 1.0f;
    matrix[5] = 1.0f;
    matrix[10] = 1.0f;
    matrix[12] = x;
    matrix[13] = y;
    matrix[14] = z;
    matrix[15] = 1.0f;
}
