/*
 * FUN_0889c984: return byte 0x28 of 48-byte entry INDEX (table at the offset in word 0x20).
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

u8 FUN_0889c984(u8 *rec, s32 index)
{
    return FIELD(rec + FIELD(rec, s32, 0x20) + index * 48, u8, 0x28);
}
