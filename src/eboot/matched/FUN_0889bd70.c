/*
 * FUN_0889bd70: remember a value in D_09bb7a54 and pass it to FUN_0889ad3c; return 0.
 *
 * Main EBOOT, match slice 10 (small functions with a frame, no branches, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern s32 D_09bb7a54; /* Hypothesis: type from the access only. */
void FUN_0889ad3c(s32 value);

s32 FUN_0889bd70(s32 value)
{
    D_09bb7a54 = value;
    FUN_0889ad3c(value);
    return 0;
}
