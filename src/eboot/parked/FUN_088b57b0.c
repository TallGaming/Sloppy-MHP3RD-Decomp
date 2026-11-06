/*
 * FUN_088b57b0: find the first available slot in one of two six-entry tables.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: GCC keeps separate loop shapes for the two selected fields.
 */

typedef unsigned char u8;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

int FUN_088b57b0(u8 *table, int second_table)
{
    int index = 0;

    do {
        void *value;
        if (second_table == 0) {
            value = FIELD(table, void *, 0x20);
        } else {
            value = FIELD(table, void *, 0x38);
        }
        if (value == 0) {
            return index;
        }
        index++;
        table += 4;
    } while (index != 6);
    return -1;
}
