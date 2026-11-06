/*
 * FUN_0889f670: reset with FUN_0887c018, then mark the record active.
 *
 * Main EBOOT, match slice 10 (small functions with a frame, no branches, part 2). Names and types are hypotheses.
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

void FUN_0887c018(void);

void FUN_0889f670(u8 *rec)
{
    FUN_0887c018();
    rec[12] = 1;
    FIELD(rec, s32, 8) = 0;
}
