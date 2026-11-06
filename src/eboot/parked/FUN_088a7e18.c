/*
 * FUN_088a7e18: return an indexed short from a global table unless index zero.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: the code shape matches but the global table lacks a symbol.
 */

typedef unsigned char u8;
typedef unsigned short u16;

extern u16 D_089e28cc[];

u16 FUN_088a7e18(u8 *record)
{
    u8 index = record[0x51d];
    if (index == 0) {
        return 0;
    }
    return D_089e28cc[index];
}
