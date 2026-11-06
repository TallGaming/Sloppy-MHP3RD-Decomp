/* Purpose: convert a radius and angular unit into an XZ-plane vector. */
extern float sinf(float);
extern float cosf(float);

void FUN_08876074(float radius, float angle, float *output)
{
    float phase = angle / 16384.0f;
    output[0] = sinf(phase) * radius;
    output[1] = 0.0f;
    output[2] = cosf(phase) * radius;
    output[3] = 0.0f;
}
