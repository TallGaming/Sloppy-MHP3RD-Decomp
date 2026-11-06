/*
 * FUN_08907080: clear the words at 0x60 and 0x64.
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

void FUN_08907080(void *rec)
{
    /* Match note: this store order gives the reference schedule. */
    FIELD(rec, s32, 0x64) = 0;
    FIELD(rec, s32, 0x60) = 0;
}
