/*
 * FUN_088f65d0: call FUN_088f4f08 on the part at 0x10 when byte 0x220 is set.
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

void FUN_088f4f08(void *part);

void FUN_088f65d0(void *rec)
{
    if (FIELD(rec, u8, 0x220))
        FUN_088f4f08((u8 *)rec + 0x10);
}
