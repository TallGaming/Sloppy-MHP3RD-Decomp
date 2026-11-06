/* Purpose: rotate a vector's first and second components around the third axis. */
extern float sinf(float);
extern float cosf(float);

void FUN_08875c24(float angle, float *vector)
{
    float radians = angle * 1.57079632679f;
    float sine = sinf(radians);
    float cosine = cosf(radians);
    float first = cosine * vector[0] - sine * vector[1];
    float second = sine * vector[0] + cosine * vector[1];

    vector[0] = first;
    vector[1] = second;
}
