/*
 * FUN_0888d634: set word 0x145C to -1, clear 8 bytes at 0x1460, then call FUN_0888d5c0.
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

void *FUN_088ebb10(void *dst, s32 value, u32 size); /* Hypothesis: memset-like */
void FUN_0888d5c0(void *rec);

void FUN_0888d634(u8 *rec)
{
    FIELD(rec, s32, 0x145c) = -1;
    FUN_088ebb10(rec + 0x1460, 0, 8);
    FUN_0888d5c0(rec);
}
