/*
 * FUN_088bf3c8: return bit 7 of byte INDEX of the table at 0x21E5.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

u8 FUN_088bf3c8(u8 *rec, s32 index)
{
    /* Match note: one index sum gives the reference operand order. */
    return rec[index + 0x21e5] >> 7;
}
