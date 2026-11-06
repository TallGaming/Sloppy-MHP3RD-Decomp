/*
 * FUN_088a56bc: return FUN_0882c758(D_08a29198) plus the 16-bit value at 0x318, as a 16-bit value.
 *
 * Main EBOOT, match slice 11 (small functions with a frame, no branches, part 3). Names and types are hypotheses.
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

extern void * D_08a29198; /* Hypothesis: type from the access only. */
s32 FUN_0882c758(void *rec);

u16 FUN_088a56bc(u8 *rec)
{
    return FUN_0882c758(D_08a29198) + FIELD(rec, u16, 0x318);
}
