/*
 * FUN_0889e4a4: submit one operation for every element in a descriptor.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: seven-argument call setup and loop register allocation differ.
 */

typedef unsigned char u8;
typedef unsigned short u16;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_0889e16c(int, int, void *, void *, int, void *, int);

void FUN_0889e4a4(u8 *record, void *a, void *b)
{
    int i;

    if (FIELD(FIELD(record, u8 *, 4), u16, 0x1c) == 0) {
        return;
    }
    for (i = 0; i < FIELD(FIELD(record, u8 *, 4), u16, 0x1c); i++) {
        FUN_0889e16c(0, 0, record, a, i, b, -1);
    }
}
