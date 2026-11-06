/*
 * FUN_0883e944: return how many steps of size STEP cover the 16-bit count at 0x2AB2 (at least 1).
 *
 * Main EBOOT, match slice 8 (small leaf functions with branches, part 1). Names and types are hypotheses.
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

u8 FUN_0883e944(void *rec, s32 step)
{
    s16 count = FIELD(rec, s16, 0x2ab2);

    if (count == 0)
        return 1;
    return (count - 1) / step + 1;
}
