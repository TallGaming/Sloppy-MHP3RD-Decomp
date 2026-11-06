/*
 * FUN_088fade0: copy words 0x38 and 0x34 to 0x50 and 0x54, then call FUN_088f9ce4.
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

void FUN_088f9ce4(void *rec, s32 value);

void FUN_088fade0(void *rec, s32 value)
{
    FIELD(rec, s32, 0x50) = FIELD(rec, s32, 0x38);
    FIELD(rec, s32, 0x54) = FIELD(rec, s32, 0x34);
    FUN_088f9ce4(rec, value);
}
