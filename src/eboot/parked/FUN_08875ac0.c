/* Purpose: construct a four-by-four rotation matrix around the first axis. */
extern float sinf(float);
extern float cosf(float);

void FUN_08875ac0(float angle, float *matrix)
{
    float radians = angle * 1.57079632679f;
    float sine = sinf(radians);
    float cosine = cosf(radians);
    int index;

    for (index = 0; index < 16; index++)
        matrix[index] = 0.0f;
    matrix[0] = 1.0f;
    matrix[5] = cosine;
    matrix[6] = sine;
    matrix[9] = -sine;
    matrix[10] = cosine;
    matrix[15] = 1.0f;
}
