/*
 * FUN_088c3db8: store a word at 0x2A8, then call FUN_08854394 on the part at 0x29C.
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

void FUN_08854394(void *part);

void FUN_088c3db8(void *rec, s32 value)
{
    FIELD(rec, s32, 0x2a8) = value;
    FUN_08854394((u8 *)rec + 0x29c);
}
