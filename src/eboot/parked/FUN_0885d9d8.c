/*
 * Purpose hypothesis: clear the enabled bit for a classified 12-byte entry.
 * The exact record owner is unresolved; the adjacent classifier reads byte
 * 2501, while synthetic execution places this read-modify-write at byte 2500.
 */
typedef signed short s16;
typedef unsigned char u8;

extern u8 *D_08aace80;
extern int FUN_0885d808(void *unused, s16 index);

int FUN_0885d9d8(void *unused, s16 index)
{
    if (FUN_0885d808(unused, index) != 0) {
        D_08aace80[(index * 12) + 2500] &= (u8)~0x10;
    }

    return 0;
}
