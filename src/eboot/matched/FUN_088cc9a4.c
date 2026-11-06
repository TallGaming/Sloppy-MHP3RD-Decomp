/*
 * FUN_088cc9a4: set the method table of the part at 0x3040 (FUN_088d78a8), then clear D_09bb7e90.
 *
 * Main EBOOT, match slice 11 (small functions with a frame, no branches, part 3). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern void * D_09bb7e90; /* Hypothesis: type from the access only. */
void FUN_088d78a8(void *object);

void FUN_088cc9a4(u8 *rec)
{
    FUN_088d78a8(rec + 0x3040);
    D_09bb7e90 = 0;
}
