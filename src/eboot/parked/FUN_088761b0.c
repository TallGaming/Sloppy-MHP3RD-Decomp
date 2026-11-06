/* Purpose: convert an unsigned 16-bit angle to its floating-point scale. */
extern float D_0896672c;

float FUN_088761b0(unsigned int value)
{
    return (float)(value & 0xffff) * D_0896672c;
}
