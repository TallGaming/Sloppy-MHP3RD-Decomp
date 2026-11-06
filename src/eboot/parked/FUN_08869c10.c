/* Purpose: generate a small masked random value and scale it to a float. */
extern unsigned int D_09bc1ed8;
extern float D_08966578;
extern unsigned int FUN_088e62f0(unsigned int, int);

float FUN_08869c10(void)
{
    return (float)(FUN_088e62f0(D_09bc1ed8, 1) & 0x3ff) * D_08966578;
}
