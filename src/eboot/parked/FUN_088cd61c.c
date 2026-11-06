/*
 * FUN_088cd61c: query an optional object attached to a record.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: GCC tail-calls the helper instead of preserving the reference frame.
 */

typedef unsigned char u8;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

int FUN_088d2310(void *object);

int FUN_088cd61c(u8 *record)
{
    void *object = FIELD(record, void *, 0x3034);
    int result = 0;

    if (object != 0) {
        result = FUN_088d2310(object);
    }
    return result;
}
