/*
 * FUN_0882a8a4: return the 16-bit value at 0xC34 when the global flag at 0x6BC is set, else -1.
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

extern void * D_08aace80; /* Hypothesis: type from the access only. */

s16 FUN_0882a8a4(void *rec)
{
    s16 value = -1;

    if (FIELD(D_08aace80, u8, 0x6bc) != 0)
        value = FIELD(rec, s16, 0xc34);
    return value;
}
