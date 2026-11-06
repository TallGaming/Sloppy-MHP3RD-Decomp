/*
 * FUN_088842a0: call FUN_08883f0c on the part at 0x10 with the low 4 bits of byte 0x137 of an item.
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

void FUN_08883f0c(void *rec, void *part, s32 level, s32 flag);

void FUN_088842a0(void *rec, void *item)
{
    FUN_08883f0c(rec, (u8 *)rec + 0x10, FIELD(item, u8, 0x137) & 0xf, 1);
}
