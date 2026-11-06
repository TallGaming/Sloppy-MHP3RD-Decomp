/*
 * FUN_08856a20: append a word to a growing word list (the record keeps the write pointer at 0x194).
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

void FUN_08856a20(void *rec, u32 value)
{
    u32 *next = FIELD(rec, u32 *, 0x194);

    FIELD(rec, u32 *, 0x194) = next + 1;
    *next = value;
}
