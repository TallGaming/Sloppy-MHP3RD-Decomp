/* Purpose: scale one indexed short by global numerator and modulus tables. */
extern unsigned char D_089caf8c[];

void FUN_0888db24(void *object, int index)
{
    short *slot = (short *)((unsigned char *)object + 0x255c) + index;
    int *modulus = (int *)(D_089caf8c + 0x4d34);
    int *factor = (int *)(D_089caf8c + 0x4d44);
    *slot = (unsigned short)*slot * factor[index] % (unsigned int)modulus[index];
}
