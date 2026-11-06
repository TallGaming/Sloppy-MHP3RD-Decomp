/*
 * FUN_0890652c: reset 4-byte slot INDEX at 0x8C: -1, INDEX, 0.
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

void FUN_0890652c(u8 *rec, u8 index)
{
    u8 *slot = rec + index * 4;

    slot[0x8c] = 0xff;
    slot[0x8d] = index;
    FIELD(slot, u16, 0x8e) = 0;
}
