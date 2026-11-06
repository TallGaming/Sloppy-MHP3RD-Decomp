/*
 * FUN_088c8aa8: reset the fields of a compact runtime record.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))
#define VFIELD(base, type, offset) (*(volatile type *)((volatile u8 *)(base) + (offset)))

void FUN_088c8aa8(u8 *record)
{
    volatile u8 *fields = record;

    VFIELD(fields, u16, 0x24) = 0xffff;
    fields[0x22] = 0;
    VFIELD(fields, u32, 0x08) = 0;
    VFIELD(fields, u32, 0x1c) = 0;
    VFIELD(fields, u16, 0x0c) = 0xffff;
    VFIELD(fields, u16, 0x10) = 0xffff;
    VFIELD(fields, u16, 0x0e) = 0xffff;
    fields[0x20] = 0;
    VFIELD(fields, u16, 0x26) = 0;
    fields[0x21] = 0;
}
