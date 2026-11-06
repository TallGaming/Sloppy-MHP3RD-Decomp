/* Purpose: gate a masked byte in the indexed twelve-byte audio record. */
typedef signed short s16;
typedef unsigned char u8;

extern u8 *D_08aace80;
extern int FUN_0885d808(void *context, s16 index);

int FUN_0885d8e8(void *context, s16 index)
{
    u8 *records = D_08aace80;

    if (FUN_0885d808(context, index)) {
        return records[index * 12 + 2504] & 15;
    }

    return 0;
}
