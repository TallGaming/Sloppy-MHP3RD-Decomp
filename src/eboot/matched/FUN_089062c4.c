/*
 * FUN_089062c4: return the 16-bit value at 0x8E of 4-byte entry INDEX.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 2). Names and types are hypotheses.
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

u16 FUN_089062c4(void *rec, u8 index)
{
    return FIELD((u8 *)rec + index * 4, u16, 0x8e);
}
