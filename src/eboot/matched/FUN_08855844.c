/*
 * FUN_08855844: reset 55 12-byte entries: 0, -1, 0.
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

void FUN_08855844(u8 *entry)
{
    s32 n = 55;

    do {
        n--;
        FIELD(entry, u16, 0) = 0;
        FIELD(entry, s16, 2) = -1;
        FIELD(entry, s32, 4) = 0;
        entry += 12;
    } while (n != 0);
}
