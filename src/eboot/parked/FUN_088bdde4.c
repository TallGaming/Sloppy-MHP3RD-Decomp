/*
 * FUN_088bdde4: return an indexed record part when the short index is valid.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: GCC canonicalizes the signed range test and pointer calculation.
 */

typedef unsigned char u8;
typedef short s16;

void *FUN_088bdde4(u8 *record, int index)
{
    s16 signed_index = index;
    int less_than_32 = signed_index < 32;

    if (signed_index < 0) {
        return 0;
    }
    {
        void *result = record + 0x2532 + signed_index * 4;
        if (!less_than_32) {
            return 0;
        }
        return result;
    }
}
