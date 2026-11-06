/*
 * FUN_08835a54: reset state, clear 144 bytes at 0x78C of D_09bf5250's record, then FUN_08839f10(rec, 0xFFFF, h26).
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

extern void * D_09bf5250; /* Hypothesis: type from the access only. */
void *FUN_088ebb10(void *dst, s32 value, u32 size); /* Hypothesis: memset-like */
void FUN_08839fd4(s32 value);
void FUN_08839f10(void *rec, s32 a, s32 b);

void FUN_08835a54(void *rec)
{
    FUN_08839fd4(0);
    FUN_088ebb10((u8 *)D_09bf5250 + 0x78c, 0, 144);
    FUN_08839f10(rec, 0xffff, FIELD(rec, u16, 0x26));
}
