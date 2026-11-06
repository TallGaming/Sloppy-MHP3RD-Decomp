/* Purpose: find the first unused resource slot, or report that none is available. */
extern int FUN_088677a4(void);

short FUN_088679e4(void *object)
{
    int count = FUN_088677a4();
    short slot;
    if (count < 1)
        return -1;
    slot = 0;
    if (*(signed char *)((unsigned char *)object + 0x9c4) != 0) {
        int index = 0;
        do {
            slot = (short)index + 1;
            index = slot;
            if (count == index)
                return -1;
        } while (*(signed char *)((unsigned char *)object + index * 0x0c + 0x9c4) != 0);
    }
    return slot;
}
