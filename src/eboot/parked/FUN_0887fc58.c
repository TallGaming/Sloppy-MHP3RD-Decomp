/* Purpose: move one ordering entry and copy the updated order to a live list. */
extern unsigned char *D_08aace80;
extern void *FUN_0886d8a0(void *, int);
extern void FUN_0880c088(void *, const void *, int);

void FUN_0887fc58(unsigned char *order, int alternate,
                  unsigned int from, unsigned int to)
{
    unsigned char value;
    unsigned int i;
    void *destination;

    from &= 0xffff;
    to &= 0xffff;
    if (from < to) {
        value = order[from + 1];
        for (i = from + 1; i < to; i++)
            order[i] = order[i + 1];
        if (to - from > 1)
            order[to] = value;
    } else if (from > to) {
        value = order[from + 1];
        for (i = from; i > to; i--)
            order[i + 1] = order[i];
        order[to + 1] = value;
    } else {
        return;
    }

    destination = FUN_0886d8a0(D_08aace80, alternate == 0 ? 1 : 2);
    FUN_0880c088(destination, order + 1, 0x75);
}
