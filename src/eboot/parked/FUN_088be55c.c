/*
 * FUN_088be55c: query a state-five record and otherwise return zero.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: GCC tail-calls the success helper instead of keeping a frame.
 */

typedef unsigned char u8;
typedef int s32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

int FUN_0891a698(void *object);

int FUN_088be55c(u8 *record)
{
    int result = 0;

    if (FIELD(record, s32, 0x0c) == 5) {
        result = FUN_0891a698(FIELD(record, void *, 0x10));
    }
    return result;
}
