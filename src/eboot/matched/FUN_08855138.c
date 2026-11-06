/*
 * FUN_08855138: call FUN_088f20ac on the part at 0x294, then clear D_08a31e84.
 *
 * Main EBOOT, match slice 9 (small functions with a frame, no branches, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern void * D_08a31e84; /* Hypothesis: type from the access only. */
void FUN_088f20ac(void *part);

void FUN_08855138(u8 *rec)
{
    FUN_088f20ac(rec + 0x294);
    D_08a31e84 = 0;
}
