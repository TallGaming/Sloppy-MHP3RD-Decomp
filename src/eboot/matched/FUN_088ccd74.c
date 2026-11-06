/*
 * FUN_088ccd74: return the address of word (byte 0x9A31) in the block D_09c3e1d8[byte 0x9A30].
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

extern s32 *const D_09c3e1d8[];

s32 *FUN_088ccd74(u8 *rec)
{
    return D_09c3e1d8[FIELD(rec, u8, 0x9a30)] + FIELD(rec, u8, 0x9a31);
}
