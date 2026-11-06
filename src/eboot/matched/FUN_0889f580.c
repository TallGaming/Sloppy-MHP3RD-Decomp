/*
 * FUN_0889f580: start FUN_0887bf2c in mode 1 with D_08967358, then mark the record active.
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

extern const u8 D_08967358; /* Hypothesis: type from the access only. */
void FUN_0887bf2c(s32 mode, const void *data);

void FUN_0889f580(u8 *rec)
{
    FUN_0887bf2c(1, &D_08967358);
    rec[12] = 1;
    FIELD(rec, s32, 8) = 0;
}
