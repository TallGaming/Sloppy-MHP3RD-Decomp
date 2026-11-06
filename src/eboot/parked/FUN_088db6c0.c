/*
 * FUN_088db6c0: reset one fixed-size entry in a runtime table.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: plain and volatile forms retain a different store schedule and size.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))
#define VFIELD(base, type, offset) (*(volatile type *)((volatile u8 *)(base) + (offset)))

void FUN_088db6c0(u8 *record, int index)
{
    u8 *entry = record + index * 0x24;

    VFIELD(entry, u16, 0x22) = 0xffff;
    VFIELD(entry, u32, 0x04) = 0xffffffff;
    VFIELD(entry, u32, 0x08) = 0xffffffff;
    VFIELD(entry, u16, 0x0c) = 0;
    VFIELD(entry, u16, 0x0e) = 0;
    VFIELD(entry, u16, 0x10) = 0;
    VFIELD(entry, u16, 0x12) = 0;
    VFIELD(entry, u16, 0x14) = 0;
    VFIELD(entry, u16, 0x16) = 0;
    VFIELD(entry, u32, 0x18) = 0;
    VFIELD(entry, u32, 0x1c) = 0;
    VFIELD(entry, u16, 0x20) = 0xffff;
}
