/*
 * FUN_0883edc4: return 6 when bit 21 of word 0x28 is set, else 2.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
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

s32 FUN_0883edc4(void *rec)
{
    return (FIELD(rec, u32, 0x28) & 0x200000) ? 6 : 2;
}
