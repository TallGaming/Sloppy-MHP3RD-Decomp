/*
 * Purpose: return the byte-field view at offset 24 of a selected record.
 * The lookup's null result is passed through.
 */
typedef unsigned char u8;
typedef unsigned short u16;

extern const u8 *FUN_0885f710(void *context, u8 category, u16 index);

const u8 *FUN_0885fb74(void *context, u8 category, u16 index)
{
    const u8 *record = FUN_0885f710(context, category, index);

    if (record)
        return record + 24;
    return 0;
}
