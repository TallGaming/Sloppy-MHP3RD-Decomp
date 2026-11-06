/*
 * FUN_088c3aec: report whether three identifiers in an entry are valid.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: equivalent boolean forms retain a different branch layout.
 */

typedef unsigned char u8;
typedef short s16;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

int FUN_088c3aec(u8 *record, int index)
{
    u8 *entry = record + index * 0x14;

    if (FIELD(entry, s16, 0x24) != -1) {
        if (FIELD(entry, s16, 0x26) != -1) {
            if (FIELD(entry, s16, 0x28) != -1) {
                return 1;
            }
        }
    }
    return 0;
}
