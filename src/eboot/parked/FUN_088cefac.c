/*
 * FUN_088cefac: release an owned object, then continue owner cleanup.
 *
 * Main EBOOT, G2 small-frame matching. Names and types are hypotheses.
 * The current reference boundary includes part of the following function.
 */

typedef unsigned char u8;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_088db274(void *object);
void FUN_088cef80(void *record);

void FUN_088cefac(u8 *record)
{
    FUN_088db274(FIELD(record, void *, 0x3034));
    FUN_088cef80(record);
}
