/*
 * FUN_0889c9e0: append two packed coordinate commands for an indexed element.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: scalar float conversion lowers to helper calls instead of VFPU operations.
 */

typedef unsigned char u8;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

extern u32 *D_08a31e88;

void FUN_0889c9e0(float x, float y, u8 *record, int index)
{
    u8 *descriptor = FIELD(record, u8 *, 4);
    u8 *entry = descriptor + FIELD(descriptor, int, 0x20) + index * 0x30;
    u32 *commands = D_08a31e88;

    D_08a31e88 = commands + 2;
    commands[0] = ((u32)(FIELD(entry, float, 0x18) + x) >> 8) | 0x4a000000;
    commands[1] = ((u32)(FIELD(entry, float, 0x1c) + y) >> 8) | 0x4b000000;
}
