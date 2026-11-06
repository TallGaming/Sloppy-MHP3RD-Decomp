/*
 * FUN_088db958: find a short identifier in a twenty-one-entry table.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: closest pointer loop retains four initialization/loop differences.
 */

typedef unsigned char u8;
typedef short s16;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

int FUN_088db958(u8 *record, s16 key)
{
    int i = 0;

    do {
        s16 *candidate = (s16 *)(record + 0x54);

        record += 0x10;
        if (*candidate == key) {
            return i;
        }
        i++;
    } while (i != 21);
    return -1;
}
