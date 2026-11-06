/*
 * FUN_088f72cc: return the base word of 128-byte group GROUP plus 640 times INDEX.
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

s32 FUN_088f72cc(void *unused, u8 *table, u8 group, s32 index)
{
    return FIELD(table + group * 128, s32, 0xfc8) + index * 640;
}
