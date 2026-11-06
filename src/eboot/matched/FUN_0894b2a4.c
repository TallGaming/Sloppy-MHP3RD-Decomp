/*
 * FUN_0894b2a4: store a word at 0x4A58, then call FUN_0894b258.
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

void FUN_0894b258(void *rec, s32 value);

void FUN_0894b2a4(void *rec, s32 value)
{
    FIELD(rec, s32, 0x4a58) = value;
    FUN_0894b258(rec, value);
}
