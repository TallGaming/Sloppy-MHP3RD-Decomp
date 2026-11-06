/*
 * FUN_08864b64: test whether the current 32-byte entry has a non-zero 16-bit value at 0x8C.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 1). Names and types are hypotheses.
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

s32 FUN_08864b64(void *rec)
{
    u8 *entry = (u8 *)rec + FIELD(rec, s32, 0x108c) * 32;

    return FIELD(entry, u16, 0x8c) != 0;
}
