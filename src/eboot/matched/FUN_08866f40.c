/*
 * FUN_08866f40: test whether the first byte of 12-byte entry INDEX (table at 0x9C4) is zero.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 1). Names and types are hypotheses.
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

s32 FUN_08866f40(void *rec, s32 index)
{
    return FIELD((u8 *)rec + index * 12, u8, 0x9c4) == 0;
}
