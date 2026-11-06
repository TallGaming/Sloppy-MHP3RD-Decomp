/*
 * Purpose: retrieve the signed optional field for a matching request value
 * from the supported narrow record categories.
 */
typedef unsigned char u8;
typedef unsigned short u16;
extern const u8 *FUN_0885c144(void *context, u8 category, u16 index);

int FUN_0885d024(void *context, u16 category, u16 index, u16 request)
{
    const unsigned supported_categories = 0x371e0u;
    const u8 *record;

    if (category >= 18 || ((supported_categories >> category) & 1) == 0)
        return 0;
    record = FUN_0885c144(context, category, index);
    if (record[16] != request)
        return 0;
    return (signed char)record[17];
}
