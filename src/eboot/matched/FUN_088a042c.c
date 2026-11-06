/*
 * FUN_088a042c: set or clear the low flag according to a byte value.
 *
 * Main EBOOT, G2 leaf-with-branches matching. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_088a042c(u8 *record, u8 enabled)
{
    if (enabled == 1) {
        FIELD(record, u32, 0x04) |= 1;
    } else {
        FIELD(record, u32, 0x04) &= ~1u;
    }
}
