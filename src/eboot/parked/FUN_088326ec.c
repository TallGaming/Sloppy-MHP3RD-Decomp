/* Purpose: publish a global boolean and notify the same handler. */
extern unsigned char *D_09bf5250;
extern void FUN_08839f10(unsigned int value, unsigned int zero1,
                         unsigned int zero2);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_088326ec(unsigned int value)
{
    if (FIELD(D_09bf5250, signed char, 0x35d) == 0)
        FIELD(D_09bf5250, unsigned int, 0x354) = 0;
    else
        FIELD(D_09bf5250, unsigned int, 0x354) = 1;
    FUN_08839f10(value, 0, 0);
}
