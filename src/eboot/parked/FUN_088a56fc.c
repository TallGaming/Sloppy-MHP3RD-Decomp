/*
 * FUN_088a56fc: find a short key in 24 entries and return its paired value.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: the entry pointer is initialized before the loop constants.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

s16 FUN_088a56fc(u8 *record, u16 key)
{
    int index = 0;
    s16 *value = (s16 *)(record + 0x522);

    do {
        u16 found = FIELD(record, u16, 0x520);
        index++;
        record += 4;
        if (found == key) {
            return *value;
        }
        value = (s16 *)((u8 *)value + 4);
    } while (index != 24);
    return 0;
}
