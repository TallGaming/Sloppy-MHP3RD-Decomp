/*
 * FUN_0890642c: return the index of a pointer in a 25-entry global array.
 *
 * Main EBOOT, attempt-high-01. The global record and entry size are hypotheses.
 */

typedef unsigned char u8;

extern u8 *D_08aace80;

int FUN_0890642c(void *target)
{
    u8 *entry = D_08aace80 + 0x5daec;
    int index = 0;

    do {
        if (entry == target)
            return index;
        index++;
        entry += 0xa0;
    } while (index != 0x19);
    return 0;
}
