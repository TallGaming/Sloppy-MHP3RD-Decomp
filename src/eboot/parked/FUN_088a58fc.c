/*
 * FUN_088a58fc: find a short key in four entries and return its paired value.
 *
 * Main EBOOT, G2 leaf-with-branches matching. Names and types are hypotheses.
 * PARKED: GCC assigns the scan and value pointers differently in the loop.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

s16 FUN_088a58fc(u8 *record, u16 key)
{
    u8 *scan = record;
    s16 *value = (s16 *)(record + 0x4f6);
    int index;

    index = 0;
    do {
        u16 found = FIELD(scan, u16, 0x4f4);
        index++;
        scan += 4;
        if (found == key) {
            return *value;
        }
        value = (s16 *)((u8 *)value + 4);
    } while (index != 4);
    return 0;
}
