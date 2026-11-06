/* Purpose: find a short value in a 30-entry global table. */
extern unsigned char D_089caf8c[];

int FUN_0887fe30(unsigned int unused, short value)
{
    short *cursor = (short *)(D_089caf8c - 0xeb4);
    int index = 0;
    (void)unused;
    do {
        short current = *cursor++;
        if (current == value)
            return (short)index;
        index++;
    } while (index != 0x1e);
    return -1;
}
