/* Purpose: report the remaining capacity for an item across active slots. */
extern unsigned char *D_08aace80;
extern signed char D_089caf8e[];
extern int FUN_088677a4(void *);

unsigned int FUN_0887ec48(int unused, unsigned int item)
{
    unsigned char *base = D_08aace80;
    unsigned int capacity = (unsigned int)-1;
    int remaining;
    int count;
    int i;

    (void)unused;
    item &= 0xffff;
    if (item == 0)
        return capacity;

    count = FUN_088677a4(base);
    capacity = (unsigned char)D_089caf8e[item * 20];
    remaining = 0xff;
    if (capacity != 0xff) {
        capacity = 99;
        remaining = 99;
    }
    if (count < 1)
        return capacity - remaining;

    for (i = 0; i < count; i++) {
        unsigned short slot_item = *(unsigned short *)(base + 0x38a4 + i * 4);
        if (slot_item == 0)
            return capacity;
        if (slot_item == item && capacity != 0xff) {
            remaining -= capacity - *(short *)(base + 0x38a6 + i * 4);
            if (remaining <= 0)
                return capacity;
        }
    }
    return capacity - remaining;
}
