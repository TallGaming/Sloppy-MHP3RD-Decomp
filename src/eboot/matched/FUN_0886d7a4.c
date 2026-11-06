/*
 * FUN_0886d7a4: return the signed byte at 0x5FACF of the record D_08aace80 points to.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
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

s8 FUN_0886d7a4(void)
{
    return FIELD(D_08aace80, s8, 0x5facf);
}
