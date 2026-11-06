/*
 * FUN_0889fd70: clear a mask in one of two flag words.
 *
 * Main EBOOT, G2 leaf-with-branches matching. Names and types are hypotheses.
 * PARKED: one commutative AND instruction has the opposite operand order.
 */

typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_0889fd70(u8 *record, s32 mask)
{
    u32 inverse = ~mask;

    if (mask >= 0) {
        FIELD(record, u32, 0x220) = FIELD(record, u32, 0x220) & inverse;
    } else {
        mask &= 0x7fffffff;
        FIELD(record, u32, 0x224) &= ~mask;
    }
}
