/*
 * Purpose hypothesis: update a classification-controlled flag in a 12-byte
 * global-table entry and return the written byte.  The owner layout remains
 * unresolved, but synthetic execution fixes the accessed byte at +2504.
 */
typedef signed short s16;
typedef unsigned char u8;

extern u8 *D_08aace80;
extern int FUN_0885d808(void *unused, s16 index);

int FUN_0885dbcc(void *unused, s16 index, int select_high_bit)
{
    u8 *record = D_08aace80;
    u8 value;

    if (FUN_0885d808(unused, index) != 0) {
        if (select_high_bit != 0) {
            value = record[(index * 12) + 2504] & 0x7f;
            record[(index * 12) + 2504] = value;
        } else {
            value = record[(index * 12) + 2504] & 0xdf;
            record[(index * 12) + 2504] = value;
        }
        return value;
    }

    return 0;
}
