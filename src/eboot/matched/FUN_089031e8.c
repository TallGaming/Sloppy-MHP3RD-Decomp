/*
 * FUN_089031e8: call FUN_089030a8 with the signed byte at 0xC, the byte at 0x154 and 0.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
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

void FUN_089030a8(void *rec, s32 a, s8 b, u8 c, s32 d);

void FUN_089031e8(void *rec, s32 a)
{
    FUN_089030a8(rec, a, FIELD(rec, s8, 0xc), FIELD(rec, u8, 0x154), 0);
}
