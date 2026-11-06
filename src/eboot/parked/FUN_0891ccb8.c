/*
 * FUN_0891ccb8: count nonzero byte-0x30 fields in four 0xFC-byte entries.
 *
 * Main EBOOT, attempt-high-01 batch 2. The global array layout is a hypothesis.
 */

typedef signed char s8;
typedef unsigned char u8;

extern u8 *D_08aace80;

s8 FUN_0891ccb8(void)
{
    u8 *entry = D_08aace80;
    s8 count = 0;
    s8 remaining = 4;

    do {
        remaining--;
        if (entry[0x30] != 0)
            count++;
        entry += 0xfc;
    } while (remaining != 0);
    return count;
}
