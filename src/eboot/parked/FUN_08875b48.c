/* Purpose: construct a four-by-four rotation matrix around the third axis. */
extern float sinf(float);
extern float cosf(float);

void FUN_08875b48(float angle, float *matrix)
{
    float radians = angle * 1.57079632679f;
    float sine = sinf(radians);
    float cosine = cosf(radians);
    int index;

    for (index = 0; index < 16; index++)
        matrix[index] = 0.0f;
    matrix[0] = cosine;
    matrix[1] = sine;
    matrix[4] = -sine;
    matrix[5] = cosine;
    matrix[10] = 1.0f;
    matrix[15] = 1.0f;
}
