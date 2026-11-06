/* Purpose: convert a direction vector into two packed angular coordinates. */
extern float atan2f(float, float);
extern float sqrtf(float);
extern float D_089667c8;
extern float D_089667cc;
extern float D_089667d0;
extern float D_089667d4;

void FUN_08877e10(float *vector, short *pitch_out, short *yaw_out)
{
    float yaw = atan2f(vector[0], vector[2]);
    float horizontal = sqrtf(vector[0] * vector[0] + vector[2] * vector[2]);
    float pitch = atan2f(vector[1], horizontal);

    *yaw_out = (short)(int)((yaw * D_089667c8) / D_089667cc + D_089667d0);
    *pitch_out = (short)(int)((pitch * D_089667d4) / D_089667cc + D_089667d0);
}
