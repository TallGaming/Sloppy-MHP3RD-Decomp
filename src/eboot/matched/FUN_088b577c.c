/*
 * FUN_088b577c: return the first empty slot in a six-entry pointer table.
 *
 * Main EBOOT, G2 leaf-with-branches matching. Names and types are hypotheses.
 */

typedef unsigned char u8;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

int FUN_088b577c(u8 *record)
{
    int index = 0;

    do {
        void *value = FIELD(record, void *, 0x08);
        record += 4;
        if (value == 0) {
            return index;
        }
        index++;
    } while (index != 6);
    return -1;
}
