/*
 * FUN_088b56f8: clear every matching pointer in a six-entry table.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: only the local absolute jump encoding differs in the object check.
 */

typedef unsigned char u8;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_088b56f8(u8 *table, void *value)
{
    int index = 0;

    do {
        if (FIELD(table, void *, 0x08) == value) {
            FIELD(table, void *, 0x08) = 0;
        }
        table += 4;
        index++;
    } while (index != 6);
}
