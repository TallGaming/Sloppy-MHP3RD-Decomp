/* Purpose: return the horizontal distance between two three-component positions. */
extern float sqrtf(float);

float FUN_08877388(const float *first, const float *second)
{
    float x = first[0] - second[0];
    float z = first[2] - second[2];
    return sqrtf(x * x + z * z);
}
