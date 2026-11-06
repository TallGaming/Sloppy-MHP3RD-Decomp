/*
 * FUN_088fd888: call FUN_088fd4a4 with the word at 0xCB0 inserted as the third argument.
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

void FUN_088fd4a4(void *rec, s32 a, s32 c, s32 b);

void FUN_088fd888(void *rec, s32 a, s32 b)
{
    FUN_088fd4a4(rec, a, FIELD(rec, s32, 0xcb0), b);
}
