/*
 * FUN_08832e34: copy one byte from FUN_0882fc48's data to 0x1DE4 of D_09bf5250's record, then FUN_088399f0(0).
 *
 * Main EBOOT, match slice 9 (small functions with a frame, no branches, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern void * D_09bf5250; /* Hypothesis: type from the access only. */
u8 *FUN_0882fc48(void);
u8 *FUN_088304bc(u8 *dst, u8 *src);
void FUN_088399f0(s32 value);

void FUN_08832e34(void)
{
    u8 *src = FUN_0882fc48();

    FUN_088304bc((u8 *)D_09bf5250 + 0x1de4, src);
    FUN_088399f0(0);
}
