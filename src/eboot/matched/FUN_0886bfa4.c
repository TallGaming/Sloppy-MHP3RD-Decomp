/*
 * FUN_0886bfa4: test bit BIT of the word at 0x58EF4.
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

s32 FUN_0886bfa4(void *rec, s32 bit)
{
    return ((1 << bit) & FIELD(rec, u32, 0x58ef4)) != 0;
}
