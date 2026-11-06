/*
 * FUN_0886dd14: test bit BIT of the word at 0x5D49C of the record D_08aace80 points to.
 *
 * Main EBOOT, match slice 6 (small straight-line leaf functions, part 1). Names and types are hypotheses.
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

extern void * D_08aace80; /* Hypothesis: type from the access only. */

s32 FUN_0886dd14(void *unused, s32 bit)
{
    return (FIELD(D_08aace80, u32, 0x5d49c) & (1 << bit)) != 0;
}
