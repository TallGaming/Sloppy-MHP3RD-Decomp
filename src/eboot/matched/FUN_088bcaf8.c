/*
 * FUN_088bcaf8: return the s32 at offset 0x0 of the self-relative block of D_08a33e70.
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

/* Hypothesis: D_08a33e70 holds the offset of a block relative to itself. */
struct Header_08a33e70
{
    s32 offset;
};
extern struct Header_08a33e70 D_08a33e70;

s32 FUN_088bcaf8(void)
{
    u8 *block = D_08a33e70.offset + (u8 *)&D_08a33e70;

    return FIELD(block, s32, 0x0);
}
