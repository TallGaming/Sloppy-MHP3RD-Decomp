/*
 * FUN_088db7e8: populate one entry in a fixed-size runtime table.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: base-pointer and volatile-store forms remain one instruction short.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))
#define VFIELD(base, type, offset) (*(volatile type *)((volatile u8 *)(base) + (offset)))

void FUN_088db7e8(u8 *record, int index, u32 first, u32 second)
{
    u8 *entry;

    record += 0x40;
    entry = record + index * 0x10;

    VFIELD(entry, u32, 0x08) = first;
    VFIELD(entry, u32, 0x0c) = second;
    VFIELD(entry, u16, 0x14) = 0xffff;
    VFIELD(entry, u32, 0x10) = 0;
}
