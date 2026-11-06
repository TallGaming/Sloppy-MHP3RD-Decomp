/*
 * FUN_088a3060: clear byte 0x74, then call FUN_088a2c58.
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

void FUN_088a2c58(void *rec);

void FUN_088a3060(void *rec)
{
    FIELD(rec, u8, 0x74) = 0;
    FUN_088a2c58(rec);
}
