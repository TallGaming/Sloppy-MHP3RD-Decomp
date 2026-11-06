/*
 * FUN_08866140: call the import FUN_08960b18 with the handle D_08a33e40; return 0.
 *
 * Main EBOOT, match slice 10 (small functions with a frame, no branches, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern s32 D_08a33e40; /* Hypothesis: type from the access only. */
void FUN_08960b18(s32 handle);

s32 FUN_08866140(void)
{
    FUN_08960b18(D_08a33e40);
    return 0;
}
