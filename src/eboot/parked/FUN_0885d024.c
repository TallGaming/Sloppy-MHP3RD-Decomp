/*
 * Purpose: retain the corrected observed record selector and equality test.
 *
 * Uncompiled field view.  The three ordinary C diagnostic attempts preceded
 * the complete synthetic equality matrix, which disproved their bit-overlap
 * condition.  The record byte +16 equals the requested scalar; it is not a
 * bitset intersection.  The result is the signed byte at +17.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;

extern const u8 *FUN_0885c144(void *context, u8 category, u16 index);

int FUN_0885d024_field_view(void *context, u32 category, u32 index, u32 request)
{
    const u8 *record;

    if ((category & 0xffffu) >= 18 ||
        ((0x371e0u & (1u << (category & 0xffffu))) == 0)) {
        return 0;
    }
    record = FUN_0885c144(context, (u8)category, (u16)index);
    if (record == 0 || record[16] != request) {
        return 0;
    }
    return (s8)record[17];
}
