/*
 * FUN_0889ca4c: write one byte across all records for an indexed group.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: equivalent pointer-decomposition forms retain a different loop schedule.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

int FUN_0889c984(void *descriptor, u16 index);

void FUN_0889ca4c(u8 *record, u32 index, u8 value)
{
    int i = 0;
    u8 *descriptor = FIELD(record, u8 *, 4);
    u16 group = index;
    u8 *group_data = descriptor + FIELD(descriptor, int, 0x20) + group * 0x30;
    u8 *entry = FIELD(record, u8 *, 0x0c) + FIELD(group_data, u16, 0x2a) * 0x10;

    for (;;) {
        int count = FUN_0889c984(descriptor, group);

        if (count <= i++) {
            break;
        }
        entry[3] = value;
        entry += 0x10;
        descriptor = FIELD(record, u8 *, 4);
    }
}
