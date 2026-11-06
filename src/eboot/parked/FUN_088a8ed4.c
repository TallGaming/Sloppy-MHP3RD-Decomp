/*
 * FUN_088a8ed4: find the first unused entry in a sixteen-entry table.
 *
 * Main EBOOT, G2 leaf-with-branches matching. Names and types are hypotheses.
 * PARKED: GCC hoists the entry-pointer initialization ahead of loop constants.
 */

typedef unsigned char u8;
typedef int s32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void *FUN_088a8ed4(u8 *record)
{
    int index = 0;
    s32 sentinel = -1;
    int limit = 16;
    u8 *entry = record + 0xcc4;

    do {
        s32 value = FIELD(record, s32, 0xcc4);
        index++;
        record += 12;
        if (value == sentinel) {
            return entry;
        }
        entry += 12;
    } while (index != limit);
    return 0;
}
