/*
 * FUN_088beeb0: find a short key in a five-entry record table.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: pointer-loop form has the right size, but initialization scheduling differs.
 */

typedef unsigned char u8;
typedef short s16;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

int FUN_088beeb0(u8 *record, s16 key)
{
    int i = 0;
    s16 *value = (s16 *)(record + 0x219a);

    do {
        s16 *candidate = (s16 *)(record + 0x2198);

        i++;
        record += 4;
        if (*candidate == key) {
            return *value;
        }
        value += 2;
    } while (i != 5);
    return 0;
}
