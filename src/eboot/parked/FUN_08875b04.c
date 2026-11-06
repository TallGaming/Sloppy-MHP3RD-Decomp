/* Purpose: construct a four-by-four rotation matrix around the second axis. */
extern float sinf(float);
extern float cosf(float);

void FUN_08875b04(float angle, float *matrix)
{
    float radians = angle * 1.57079632679f;
    float sine = sinf(radians);
    float cosine = cosf(radians);
    int index;

    for (index = 0; index < 16; index++)
        matrix[index] = 0.0f;
    matrix[0] = cosine;
    matrix[2] = -sine;
    matrix[5] = 1.0f;
    matrix[8] = sine;
    matrix[10] = cosine;
    matrix[15] = 1.0f;
}
