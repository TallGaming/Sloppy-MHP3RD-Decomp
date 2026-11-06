/*
 * FUN_088a3984: test whether a record type is accepted for the selected mode.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: GCC canonicalizes the first range test and result registers.
 */

typedef unsigned char u8;
typedef unsigned int u32;

int FUN_088a3984(u8 *record, int mode)
{
    if (mode == 0) {
        u32 type = record[0x62];
        u32 maximum = 2;
        u32 outside = maximum < (u32)(type - 4);

        if (outside != 0) {
            return 0;
        }
        return 1;
    }
    {
        u32 type = record[0x62];
        u32 bit = 1u << type;
        u32 in_range = type < 11;

        bit &= 0x470;
        if (in_range == 0) {
            return 0;
        }
        if (bit == 0) {
            return 0;
        }
    }
    return 1;
}
