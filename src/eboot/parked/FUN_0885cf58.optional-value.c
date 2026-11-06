/*
 * Purpose: read an optional record value when its associated byte matches.
 * Narrow records provide a signed byte and wide records an unsigned byte.
 */
typedef unsigned char u8;
typedef unsigned short u16;
extern const u8 *FUN_0885c144(void *context, u8 category, u16 index);

int FUN_0885cf58(void *context, u16 category, u16 index, u16 qualifier)
{
    const u8 *record;

    if (category < 5 || category > 17 || category == 10)
        return 0;
    if (category == 9 || category == 11 || category == 15) {
        record = FUN_0885c144(context, category, index);
        if (record[18] == qualifier)
            return record[19];
    } else {
        record = FUN_0885c144(context, category, index);
        if (record[14] == qualifier)
            return (signed char)record[15];
    }
    return 0;
}


