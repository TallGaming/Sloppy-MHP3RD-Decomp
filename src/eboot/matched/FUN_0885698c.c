/*
 * FUN_0885698c: clear the 128-word table at 0x6998 and reset the write pointer at 0x194.
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

void FUN_0885698c(u8 *rec)
{
    s32 *word = (s32 *)(rec + 0x6998);
    s32 i;

    for (i = 0; i < 128; i++)
        *word++ = 0;
    FIELD(rec, u8 *, 0x194) = rec + 0x198;
}
