/*
 * FUN_088692d8: call FUN_088691fc with byte 0x76 and half-word 0x4E of an item.
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

void FUN_088691fc(void *rec, u8 kind, u16 value);

void FUN_088692d8(void *rec, void *item)
{
    FUN_088691fc(rec, FIELD(item, u8, 0x76), FIELD(item, u16, 0x4e));
}
