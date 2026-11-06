/* Purpose: build a diagonal scale matrix. */
void FUN_0887799c(float *matrix, float x, float y, float z)
{
    int i;
    for (i = 0; i < 16; i++)
        matrix[i] = 0.0f;
    matrix[0] = x;
    matrix[5] = y;
    matrix[10] = z;
    matrix[15] = 1.0f;
}
