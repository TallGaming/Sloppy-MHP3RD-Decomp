/*
 * FUN_0891a674: start a timer-like record: two flags, a kind byte, 15 and a value.
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

void FUN_0891a674(u8 *rec, s32 value, u8 kind)
{
    rec[0x37c] = 1;
    rec[0x37d] = kind;
    FIELD(rec, s32, 0x380) = 15;
    FIELD(rec, s32, 0x384) = value;
    rec[0x388] = 1;
}
