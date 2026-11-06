/*
 * FUN_088bdfa0: forward an optional owned object to its handler.
 *
 * Main EBOOT, G2 leaf-with-branches matching. Names and types are hypotheses.
 */

typedef unsigned char u8;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

int FUN_088f2df8(void *object);

int FUN_088bdfa0(u8 *record)
{
    void *object = FIELD(record, void *, 0x10);

    if (object != 0) {
        return FUN_088f2df8(object);
    }
    return 0;
}
