/*
 * FUN_088e7ea0: append one eight-byte glyph command to the active row.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: glyph-command addressing remains shorter and broadly different.
 */
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned short u16;

void FUN_088e7ea0(u8 *record, u16 first, u16 second, u16 third,
                  u8 fourth, u8 fifth)
{
    u8 count = record[(s8)record[0x12f] + 0x13b];
    u8 *entry = record + (((s8)record[0x12f] * 10 + count) * 8) + 0x263f0;

    if (count < 10) {
        entry[0xf] = fourth;
        *(u16 *)(entry + 0xa) = second;
        *(u16 *)(entry + 0xc) = third;
        entry[0xe] = fifth;
        *(u16 *)(entry + 8) = first;
        record[(s8)record[0x12f] + 0x13b]++;
    }
}
