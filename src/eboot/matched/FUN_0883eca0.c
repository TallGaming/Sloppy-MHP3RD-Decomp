/*
 * FUN_0883eca0: call FUN_0883eb6c, then FUN_0883ec48, with the same arguments.
 *
 * Main EBOOT, match slice 9 (small functions with a frame, no branches, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_0883eb6c(void *a, void *b);
void FUN_0883ec48(void *a, void *b);

void FUN_0883eca0(void *a, void *b)
{
    FUN_0883eb6c(a, b);
    FUN_0883ec48(a, b);
}
