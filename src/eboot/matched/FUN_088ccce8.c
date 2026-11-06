/*
 * FUN_088ccce8: return the byte at 0x5EB05 of the record D_08aace80 points to, or 0 when it is 3 or more.
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

extern void * D_08aace80; /* Hypothesis: type from the access only. */

u8 FUN_088ccce8(void)
{
    u8 value = FIELD(D_08aace80, u8, 0x5eb05);

    return value < 3 ? value : 0;
}
