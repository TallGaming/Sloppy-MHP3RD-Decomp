/*
 * FUN_088e62c8: copy the half-word at 0x514A of D_08aace80's record to 0x10FA348 of D_09bc1ed8's record.
 *
 * Main EBOOT, match slice 7 (small straight-line leaf functions, part 2). Names and types are hypotheses.
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
extern void * D_09bc1ed8; /* Hypothesis: type from the access only. */

void FUN_088e62c8(void)
{
    FIELD(D_09bc1ed8, u16, 0x10fa348) = FIELD(D_08aace80, u16, 0x514a);
}
