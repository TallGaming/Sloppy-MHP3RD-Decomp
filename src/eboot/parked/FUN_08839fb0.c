/* Purpose: reset three fields in a global state object. */
extern unsigned char *volatile D_09bf5250;

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_08839fb0(void)
{
    unsigned char *first = D_09bf5250;
    FIELD(first, unsigned char, 0x10f2) = 0;
    unsigned char *second = D_09bf5250;
    FIELD(first, unsigned short, 0x10ee) = 900;
    FIELD(second, unsigned char, 0x1124) = 0;
}
