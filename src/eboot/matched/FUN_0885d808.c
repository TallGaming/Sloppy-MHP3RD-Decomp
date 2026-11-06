typedef signed short s16;
typedef unsigned char u8;

/* Purpose hypothesis: classify one field of a 12-byte global-table record. */
extern u8 *D_08aace80;

int FUN_0885d808(void *unused, s16 index)
{
    u8 value = D_08aace80[(index * 12) + 2501];

    return value == 11 || value == 9 || value == 15;
}
