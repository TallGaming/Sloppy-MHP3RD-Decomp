/*
 * FUN_088791d4: return the address of 640-byte element INDEX of the array at 0x58.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 1). Names and types are hypotheses.
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

void *FUN_088791d4(void *rec, s32 index)
{
    return FIELD(rec, u8 *, 0x58) + index * 640;
}
