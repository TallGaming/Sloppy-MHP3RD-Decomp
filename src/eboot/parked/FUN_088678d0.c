/* Purpose: allocate an unused tagged slot and initialize its compact fields. */
extern int FUN_088677a4(void);

short FUN_088678d0(unsigned char *object, unsigned char tag,
                   unsigned short value, unsigned char mode)
{
    int capacity;
    short index = 0;
    unsigned char *slot;

    if (tag > 0x11 || (capacity = FUN_088677a4()) < 1)
        return -1;
    if (object[0x9c4] != 0) {
        do {
            index++;
            if (capacity == index)
                return -1;
        } while (object[0x9c4 + index * 0xc] != 0);
    }
    slot = object + 0x9c4 + index * 0xc;
    slot[0] = 1;
    slot[1] = tag;
    *(unsigned short *)(slot + 2) = value;
    slot[4] = mode;
    *(unsigned short *)(slot + 6) = 0;
    *(unsigned short *)(slot + 8) = 0;
    *(unsigned short *)(slot + 10) = 0;
    return index;
}
