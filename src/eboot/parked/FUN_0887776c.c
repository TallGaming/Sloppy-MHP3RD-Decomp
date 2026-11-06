/* Purpose: compute a scaled heading between two positions after horizontal normalization. */
extern float D_089667b0;
extern float D_089667b4;
extern float D_089667b8;
extern float atan2f(float, float);
extern float sqrtf(float);

unsigned int FUN_0887776c(const float *first, const float *second)
{
    float x = first[0] - second[0];
    float z = first[2] - second[2];
    float length = sqrtf(x * x + z * z);
    float angle;

    if (length != 0.0f) {
        x /= length;
        z /= length;
    }
    angle = atan2f(-z, x);
    return (unsigned int)(angle * D_089667b0 / D_089667b4 + D_089667b8) & 0xffff;
}
