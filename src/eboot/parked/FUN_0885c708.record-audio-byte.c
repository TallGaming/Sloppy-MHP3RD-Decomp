/*
 * Purpose: return the audio selector byte stored in either supported record
 * layout. Categories without that field return zero.
 */
typedef unsigned char u8;
typedef unsigned short u16;

extern const u8 *FUN_0885c144(void *context, u8 category, u16 index);

u8 FUN_0885c708(void *context, u8 category, u16 index)
{
    if (category < 5 || category > 17)
        return 0;
    if ((category >= 9 && category <= 11) || category == 15)
        return FUN_0885c144(context, category, index)[75];
    return FUN_0885c144(context, category, index)[23];
}
