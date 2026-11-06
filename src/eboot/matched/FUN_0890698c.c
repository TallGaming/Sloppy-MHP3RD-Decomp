/*
 * FUN_0890698c: return the s8 at offset 0x5F of a record.
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

s8 FUN_0890698c(void *rec)
{
    return FIELD(rec, s8, 0x5f);
}
