/*
 * FUN_08828ce4: store the result of FUN_088287c8 and word 0x130 of the global state.
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

extern void * D_08a20fec; /* Hypothesis: type from the access only. */
s32 FUN_088287c8(void);

void FUN_08828ce4(s32 *out)
{
    out[0] = FUN_088287c8();
    out[1] = FIELD(D_08a20fec, s32, 0x130);
}
