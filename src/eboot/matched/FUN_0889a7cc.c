/*
 * FUN_0889a7cc: reset a 16-byte record: three 16-bit fields to 4095, the rest to 0.
 *
 * Main EBOOT, match slice 6 (small straight-line leaf functions, part 1). Names and types are hypotheses.
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

void FUN_0889a7cc(u16 *rec)
{
    /* Match note: this store order gives the reference schedule. */
    rec[6] = 0;
    rec[0] = 4095;
    rec[1] = 4095;
    rec[2] = 0;
    FIELD(rec, s32, 8) = 0;
    rec[3] = 4095;
}
