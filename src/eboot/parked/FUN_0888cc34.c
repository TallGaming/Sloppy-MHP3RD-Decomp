/*
 * FUN_0888cc34: compare two record values with the active table entry.
 *
 * Main EBOOT, G2 leaf-with-branches matching. Names and types are hypotheses.
 * PARKED: only the local absolute jump encoding differs in the object check.
 */

typedef unsigned char u8;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

int FUN_0888cc34(u8 *record)
{
    u8 *table = FIELD(record, u8 *, 0x94c) + 0x120000;
    int equal = 1;

    if (FIELD(record, u32, 0x1460) != FIELD(table, u32, 0xfe0)) {
        equal = 0;
    } else if (FIELD(record, u32, 0x1464) != FIELD(table, u32, 0xfe4)) {
        equal = 0;
    }
    return equal;
}
