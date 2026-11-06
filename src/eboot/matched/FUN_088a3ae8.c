/*
 * FUN_088a3ae8: optionally send value ten, then clear two record fields.
 *
 * Main EBOOT, G2 frame-plus-branches matching. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef int s32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

extern void *D_08a3387c;
void FUN_08864dc4(void *context, u8 value);

void FUN_088a3ae8(u8 *record)
{
    if (FIELD(record, s32, 0xb70) < 3) {
        FUN_08864dc4(D_08a3387c, 10);
    }
    /* This source order gives the reference store order under GCC. */
    FIELD(record, s32, 0xb70) = 0;
    FIELD(record, s32, 0xb74) = 0;
}
