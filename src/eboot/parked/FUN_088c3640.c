/*
 * FUN_088c3640: reset one fixed-size entry in a record table.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: field-store order and instruction count differ from the reference.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_088c3640(u8 *record, int index)
{
    u8 *entry = record + 0x10 + index * 0x14;

    FIELD(entry, u32, 0x08) = 0;
    FIELD(entry, volatile u16, 0x18) = 0xffff;
    FIELD(entry, volatile u16, 0x1a) = 0;
    FIELD(entry, u32, 0x0c) = 0;
    FIELD(entry, u32, 0x10) = 0;
    FIELD(entry, volatile u16, 0x14) = 0xffff;
    FIELD(entry, volatile u16, 0x16) = 0xffff;
}
