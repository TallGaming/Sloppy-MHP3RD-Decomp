/*
 * FUN_088bf9cc: release an optional record resource and clear its state byte.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 */

typedef unsigned char u8;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_0891dd74(void *resource);

void FUN_088bf9cc(u8 *record)
{
    void *resource = FIELD(record, void *, 0x1018);

    if (resource != 0) {
        FUN_0891dd74(resource);
    }
    record[0x25c5] = 0;
}
