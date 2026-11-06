/*
 * FUN_0889dc3c: write three leading bytes across an indexed record group.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: pointer setup and loop scheduling differ despite equivalent control flow.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

int FUN_0889c984(void *descriptor, u16 index);

void FUN_0889dc3c(u8 *record, u32 index, u8 a, u8 b, u8 c)
{
    int i = 0;
    u8 *descriptor = FIELD(record, u8 *, 4);
    u8 *entry = FIELD(record, u8 *, 0x0c) +
        FIELD(descriptor + FIELD(descriptor, int, 0x20) + (u16)index * 0x30,
              u16, 0x2a) * 0x10;

    for (;;) {
        int count = FUN_0889c984(descriptor, (u16)index);

        if (count <= i++) {
            break;
        }
        entry[0] = a;
        entry[1] = b;
        entry[2] = c;
        entry += 0x10;
        descriptor = FIELD(record, u8 *, 4);
    }
}
