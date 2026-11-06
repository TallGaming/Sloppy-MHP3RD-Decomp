/*
 * FUN_088302c4: reserve and copy the 16-bit size at 0x1A of SRC; return 0.
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

void FUN_0882ff3c(void *out, u32 size);
void FUN_08830038(void *out, const void *src, u32 size);

s32 FUN_088302c4(void *out, const u8 *src)
{
    FUN_0882ff3c(out, FIELD(src, u16, 0x1a));
    FUN_08830038(out, src, FIELD(src, u16, 0x1a));
    return 0;
}
