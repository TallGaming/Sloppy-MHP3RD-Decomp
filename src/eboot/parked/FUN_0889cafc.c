/*
 * FUN_0889cafc: initialize a render record and copy two descriptor tables.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: two table-copy loops lower to a shorter, different register schedule.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_0889cafc(u8 *record, u32 *output, u8 *descriptor, u32 value)
{
    u8 *source = descriptor + FIELD(descriptor, int, 0x30);
    int i;

    FIELD(record, u32, 0x08) = value;
    FIELD(record, u32, 0x20) = FIELD(descriptor, u32, 0x10);
    FIELD(record, u32, 0x24) = FIELD(descriptor, u32, 0x14);
    FIELD(record, u32, 0x28) = FIELD(descriptor, u32, 0x18);
    FIELD(record, u32, 0x2c) = 0;
    FIELD(record, u8 *, 0x04) = descriptor;
    FIELD(record, u32 *, 0x0c) = output;

    for (i = 0; i < FIELD(descriptor, u16, 0x1e); i++) {
        output[0] = FIELD(source, u32, 0);
        output[1] = FIELD(source, u32, 4);
        ((u8 *)output)[8] = source[8];
        source += 0x10;
        output += 4;
        descriptor = FIELD(record, u8 *, 4);
    }

    source = descriptor + FIELD(descriptor, int, 0x20);
    FIELD(record, u32 *, 0x10) = output;
    for (i = 0; i < FIELD(descriptor, u16, 0x1c); i++) {
        output[0] = FIELD(source, u32, 0x20);
        output[1] = FIELD(source, u32, 0x24);
        source += 0x30;
        output += 2;
    }
}
