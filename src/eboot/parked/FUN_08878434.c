/* Purpose: convert a direction vector into two unsigned packed angles. */
extern float atan2f(float, float);
extern float sqrtf(float);
extern float D_089667d8;
extern float D_089667dc;
extern float D_089667e0;

void FUN_08878434(float *vector, unsigned int *pitch_out, unsigned int *yaw_out)
{
    float yaw = atan2f(vector[0], vector[2]);
    float horizontal = sqrtf(vector[0] * vector[0] + vector[2] * vector[2]);
    float pitch = atan2f(-vector[1], horizontal);

    *yaw_out = (unsigned int)((yaw * D_089667d8) / D_089667dc + D_089667e0) & 0xffff;
    *pitch_out = (unsigned int)((pitch * D_089667d8) / D_089667dc + D_089667e0) & 0xffff;
}
