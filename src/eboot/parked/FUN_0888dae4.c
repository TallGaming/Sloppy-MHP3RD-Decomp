/* Purpose: store a caller value or indexed global default into a short array. */
extern unsigned char D_089caf8c[];

void FUN_0888dae4(void *object, int index, short value)
{
    short *slot = (short *)((unsigned char *)object + 0x255c) + index;
    int *defaults = (int *)(D_089caf8c + 0x4d44);
    if (value == 0)
        *slot = (short)defaults[index];
    else
        *slot = value;
}
