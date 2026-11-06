/*
 * FUN_0887dde0: test the bit for byte 6 of an item in the bit set at 0x50F8 of the record D_08aace80 points to.
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

s32 FUN_0887dde0(void *unused, const u8 *item)
{
    u8 n = item[6];
    u8 *base = D_08aace80;

    return (FIELD(base + (n >> 3), u8, 0x50f8) >> (n & 7)) & 1;
}
