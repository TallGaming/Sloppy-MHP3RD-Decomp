/* Purpose: derive a scaled angle from two two-dimensional points. */
extern float D_08966770;
extern float D_08966774;
extern float D_08966778;
extern float atan2f(float, float);

unsigned int FUN_08876cec(float x1, float y1, float x2, float y2)
{
    float angle = atan2f(x2 - x1, y2 - y1);
    return (unsigned int)(angle * D_08966770 / D_08966774 + D_08966778) & 0xffff;
}
