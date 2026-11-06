/*
 * FUN_088ccbcc: look up the byte at 0x9A30 in the byte table D_09c3ee6c.
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

extern const u8 D_09c3ee6c[]; /* Hypothesis: type from the access only. */

u8 FUN_088ccbcc(u8 *rec)
{
    return D_09c3ee6c[FIELD(rec, u8, 0x9a30)];
}
