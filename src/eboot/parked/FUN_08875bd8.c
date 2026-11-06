/* Purpose: rotate a vector's first and third components around the second axis. */
extern float sinf(float);
extern float cosf(float);

void FUN_08875bd8(float angle, float *vector)
{
    float radians = angle * 1.57079632679f;
    float sine = sinf(radians);
    float cosine = cosf(radians);
    float first = cosine * vector[0] + sine * vector[2];
    float third = cosine * vector[2] - sine * vector[0];

    vector[0] = first;
    vector[2] = third;
}
