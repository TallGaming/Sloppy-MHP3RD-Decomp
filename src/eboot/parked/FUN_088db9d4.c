/*
 * FUN_088db9d4: report whether an indexed entry is active and ready.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: equivalent predicate/result forms retain a different branch layout.
 */

typedef unsigned char u8;
typedef short s16;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

int FUN_088db9d4(u8 *record, int index)
{
    u8 *entry = record + index * 0x24;
    int result = 1;

    if (FIELD(entry, int, 0x00) == 0 ||
        FIELD(entry, s16, 0x16) < 1 ||
        FIELD(entry, int, 0x08) != 3) {
        result = 0;
    }
    return result;
}
