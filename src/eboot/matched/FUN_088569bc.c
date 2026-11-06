/*
 * FUN_088569bc: store the write pointer in slot INDEX (< 128) of the table at 0x6998; return 1 on success.
 *
 * Main EBOOT, match slice 8 (small leaf functions with branches, part 1). Names and types are hypotheses.
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

s32 FUN_088569bc(u8 *rec, u32 index)
{
    if (index < 128) {
        ((s32 *)(rec + 0x6998))[index] = FIELD(rec, s32, 0x194);
        return 1;
    }
    return 0;
}
