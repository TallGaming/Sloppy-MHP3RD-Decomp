/* Purpose: consume a requested quantity from matching item slots. */
extern unsigned char *D_08aace80;
extern signed char D_089caf8e[];
extern int FUN_088677a4(void *);

int FUN_0887de84(int unused, unsigned int item, short quantity)
{
    unsigned char *cursor;
    short held;
    int count;
    int index;
    int remaining = quantity;

    (void)unused;
    item &= 0xffff;
    if (remaining < 0 || item == 0 || D_089caf8e[item * 20] == -1)
        return 0;

    cursor = D_08aace80 + 0x85c;
    count = FUN_088677a4(D_08aace80);
    index = 0;
    if (count > 0) {
        do {
        if (*(unsigned short *)(cursor + 0x3048) == item) {
            held = *(short *)(cursor + 0x304a);
            if (held < remaining) {
                *(short *)(cursor + 0x304a) = 0;
                remaining = (short)(remaining - held);
            } else {
                *(short *)(cursor + 0x304a) = held - (short)remaining;
                remaining = 0;
            }
            held = *(short *)(cursor + 0x304a);
            if (held < 1)
                *(unsigned short *)(cursor + 0x3048) = 0;
            if (remaining < 1)
                return 0;
        }
        index = (short)(index + 1);
        cursor += 4;
        } while (count != index);
    }
    return remaining;
}
