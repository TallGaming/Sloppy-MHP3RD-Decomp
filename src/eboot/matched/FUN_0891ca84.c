/*
 * FUN_0891ca84: test whether byte 0xB equals 1 << SHIFT (as a byte).
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

/* The record layout is unknown: FIELD reads or writes a member of the given
 * type at a byte offset. Offsets and widths come from the reference code. */
#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

s32 FUN_0891ca84(void *rec, s32 shift)
{
    return FIELD(rec, u8, 0xb) == (u8)(1 << shift);
}
