/*
 * FUN_08830464: read a big-endian 16-bit value into offset 0x11C, then call FUN_08830378.
 *
 * Main EBOOT, match slice 9 (small functions with a frame, no branches, part 1). Names and types are hypotheses.
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

u8 *FUN_088303f0(u8 *dst, const u8 *src);
void FUN_08830378(void *rec, s32 offset, const void *src);

void FUN_08830464(u8 *rec, const u8 *src)
{
    u16 value;

    FUN_088303f0((u8 *)&value, src);
    FIELD(rec, u16, 284) = value;
    FUN_08830378(rec, 284, src);
}
