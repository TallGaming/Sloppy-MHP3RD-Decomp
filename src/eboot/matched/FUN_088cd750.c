/*
 * FUN_088cd750: test bit (4 + SHIFT) of byte INDEX of the table at 0x9C08.
 *
 * Main EBOOT, match slice 7 (small straight-line leaf functions, part 2). Names and types are hypotheses.
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

s32 FUN_088cd750(u8 *rec, u8 index, s32 shift)
{
    return (FIELD(rec + index, u8, 0x9c08) & (16 << shift)) != 0;
}
