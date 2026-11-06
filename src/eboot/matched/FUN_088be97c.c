/*
 * FUN_088be97c: store a value in word 0x25C0 if that word is still zero.
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

void FUN_088be97c(void *rec, s32 value)
{
    if (FIELD(rec, s32, 0x25c0) == 0)
        FIELD(rec, s32, 0x25c0) = value;
}
