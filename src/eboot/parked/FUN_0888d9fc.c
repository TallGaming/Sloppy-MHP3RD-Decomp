/* Purpose: derive two handles from a player slot and submit them to the next subsystem. */
extern unsigned char *D_08aace80;
extern void *D_09bb7a80;
extern int FUN_08869c54(void *, unsigned int, unsigned int);
extern int FUN_088b51b8(void *, int, int);
extern void FUN_0889fcc8(float, float, int, int, int);

void FUN_0888d9fc(int unused, short slot)
{
    unsigned int descriptor = *(unsigned int *)(D_08aace80 + slot * 0xfc + 0x38);
    int first;
    int second;

    (void)unused;
    first = FUN_08869c54(D_08aace80, descriptor & 1, (descriptor & 0xff) >> 3);
    second = FUN_088b51b8(D_09bb7a80, slot, 1);
    FUN_0889fcc8(0.0f, 0.0f, second, first, 0);
}
