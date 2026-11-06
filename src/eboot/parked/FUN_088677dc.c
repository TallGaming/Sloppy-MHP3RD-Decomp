/* Purpose: allocate an unused three-short slot and initialize its bookkeeping fields. */
extern unsigned int FUN_088677a4(void);

unsigned int FUN_088677dc(unsigned char *object, const unsigned short *value)
{
    unsigned int capacity = FUN_088677a4();
    unsigned int index = 0;
    unsigned char *slot;

    if (capacity == 0)
        return 0xffff;
    if (object[0x9c4] != 0) {
        do {
            index = (index + 1) & 0xffff;
            if ((capacity & 0xffff) <= index)
                return 0xffff;
        } while (object[0x9c4 + index * 0xc] != 0);
    }
    slot = object + 0x9bc + index * 0xc;
    *(unsigned short *)(slot + 0) = value[0];
    *(unsigned short *)(slot + 2) = value[1];
    *(unsigned short *)(slot + 4) = value[2];
    *(unsigned short *)(slot + 6) = 0;
    *(unsigned short *)(slot + 8) = 0;
    *(unsigned short *)(slot + 10) = 0;
    slot[0] = 1;
    return index;
}
