/*
 * FUN_0889fdac: set a mask in one of two flag words.
 *
 * Main EBOOT, G2 leaf-with-branches matching. Names and types are hypotheses.
 * PARKED: one commutative OR instruction has the opposite operand order.
 */

typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_0889fdac(u8 *record, s32 mask)
{
    if (mask >= 0) {
        FIELD(record, u32, 0x220) = mask | FIELD(record, u32, 0x220);
    } else {
        mask &= 0x7fffffff;
        FIELD(record, u32, 0x224) |= mask;
    }
}
