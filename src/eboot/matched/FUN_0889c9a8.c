/*
 * FUN_0889c9a8: return the address of 16-byte block (entry INDEX half-word 0x2E + N) in the area at word 0x24.
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

void *FUN_0889c9a8(u8 *rec, s32 index, s32 n)
{
    u8 *entry = rec + FIELD(rec, s32, 0x20) + index * 48;

    return rec + FIELD(rec, s32, 0x24) + (FIELD(entry, u16, 0x2e) + n) * 16;
}
