/*
 * FUN_088e7008: store two 16-bit values at 0x120 and 0x122.
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

void FUN_088e7008(void *rec, u16 a, u16 b)
{
    FIELD(rec, u16, 0x120) = a;
    FIELD(rec, u16, 0x122) = b;
}
