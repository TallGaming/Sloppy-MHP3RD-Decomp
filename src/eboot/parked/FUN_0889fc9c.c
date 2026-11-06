/*
 * FUN_0889fc9c: test a mask against one of two flag words.
 *
 * Main EBOOT, G2 leaf-with-branches matching. Names and types are hypotheses.
 * PARKED: GCC canonicalizes the commutative mask operands in the other order.
 */

typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

u32 FUN_0889fc9c(u8 *record, s32 mask)
{
    if (mask >= 0) {
        return mask & FIELD(record, u32, 0x220);
    }
    return (mask & 0x7fffffff) & FIELD(record, u32, 0x224);
}
