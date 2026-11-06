/*
 * Purpose: update the paired status bits on a valid twelve-byte entry.
 * The mode argument selects which paired status update to apply.
 */
typedef unsigned char u8;
typedef signed short s16;

extern u8 *D_08aace80;
extern int FUN_0885d808(void *context, s16 index);

u8 FUN_0885d9d8(void *context, s16 index, unsigned mode)
{
    u8 *records = D_08aace80;
    u8 *flags;
    u8 value;

    if (!FUN_0885d808(context, index))
        return 0;
    flags = &records[2504 + index * 12];
    value = *flags;
    if (mode)
        value &= (u8)~0x10;
    else
        value = (value & (u8)~0x20) | 0x10;
    *flags = value;
    return value;
}
