/* Purpose: rotate a vector's second and third components around the first axis. */
extern float sinf(float);
extern float cosf(float);

void FUN_08875b8c(float angle, float *vector)
{
    float radians = angle * 1.57079632679f;
    float sine = sinf(radians);
    float cosine = cosf(radians);
    float second = cosine * vector[1] - sine * vector[2];
    float third = sine * vector[1] + cosine * vector[2];

    vector[1] = second;
    vector[2] = third;
}
