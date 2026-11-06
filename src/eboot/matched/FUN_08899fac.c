/*
 * FUN_08899fac: call FUN_08865c78 on the object at offset 0x10; return 0.
 *
 * Main EBOOT, match slice 10 (small functions with a frame, no branches, part 2). Names and types are hypotheses.
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

void FUN_08865c78(void *object);

s32 FUN_08899fac(void *rec)
{
    FUN_08865c78(FIELD(rec, void *, 0x10));
    return 0;
}
