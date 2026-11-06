/*
 * FUN_088bcc48: call FUN_088f2b40 on the object at offset 0x10.
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

s32 FUN_088f2b40(void *object);

s32 FUN_088bcc48(void *rec)
{
    return FUN_088f2b40(FIELD(rec, void *, 0x10));
}
