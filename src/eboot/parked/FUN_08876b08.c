/* Purpose: derive a scaled planar angle from an object's transformed position. */
extern float D_08966760;
extern float D_08966764;
extern float D_08966768;
extern float D_0896676c;
extern void FUN_08875a10(float *, const float *, void *);
extern float atan2f(float, float);

unsigned int FUN_08876b08(unsigned char *object)
{
    float identity[4] = {0.0f, D_08966760, 0.0f, D_08966760};
    float position[2];
    float x;
    float y;
    float angle;

    FUN_08875a10(position, identity, object);
    x = position[0] - *(float *)(object + 0x30);
    y = position[1] - *(float *)(object + 0x34);
    angle = atan2f(x, y);
    return (unsigned int)(angle * D_08966764 / D_08966768 + D_0896676c) & 0xffff;
}
