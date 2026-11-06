/*
 * FUN_088bd71c: call FUN_088bd6bc with the 16-bit value at 0xD14 of an item.
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

void FUN_088bd6bc(void *rec, s16 value);

void FUN_088bd71c(void *rec, void *item)
{
    FUN_088bd6bc(rec, FIELD(item, s16, 0xd14));
}
