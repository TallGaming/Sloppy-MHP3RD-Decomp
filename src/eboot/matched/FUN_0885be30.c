/*
 * FUN_0885be30: call FUN_0885bc0c with byte 1 and the low 4 bits of half-word 2 of an item.
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

void FUN_0885bc0c(void *rec, u8 kind, s32 level);

void FUN_0885be30(void *rec, const u8 *item)
{
    FUN_0885bc0c(rec, item[1], FIELD(item, u16, 2) & 0xf);
}
