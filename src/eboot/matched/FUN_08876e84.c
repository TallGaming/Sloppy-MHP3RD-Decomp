/* Purpose: derive a scaled planar angle from two three-component points. */
extern unsigned int FUN_08876cec(float, float, float, float);

unsigned int FUN_08876e84(const float *first, const float *second)
{
    return FUN_08876cec(first[0], first[2], second[0], second[2]);
}
