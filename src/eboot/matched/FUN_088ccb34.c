/*
 * FUN_088ccb34: copy a record block, clear an object flag, and reset state.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_08878c18(void *destination, const void *source, unsigned int size);

void FUN_088ccb34(u8 *record)
{
    u8 *object;

    FUN_08878c18(record + 0x3000, record, 0x3000);
    object = FIELD(record, u8 *, 0x3034);
    if (object != 0) {
        FIELD(object, u32, 4) &= 0xfffffffd;
    }
    record[0x302c] = 0;
}
