/* Purpose: derive a scaled horizontal angle from an object's transformed position. */
extern float D_08966750;
extern float D_08966754;
extern float D_08966758;
extern float D_0896675c;
extern void FUN_08875a10(float *, const float *, void *);
extern float atan2f(float, float);

unsigned int FUN_08876920(unsigned char *object)
{
    float identity[4] = {0.0f, 0.0f, D_08966750, D_08966750};
    float position[3];
    float x;
    float z;
    float angle;

    FUN_08875a10(position, identity, object);
    x = position[0] - *(float *)(object + 0x30);
    z = -(position[2] - *(float *)(object + 0x38));
    angle = atan2f(z, x);
    return (unsigned int)(angle * D_08966754 / D_08966758 + D_0896675c) & 0xffff;
}
