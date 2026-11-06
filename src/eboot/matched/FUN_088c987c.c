/*
 * FUN_088c987c: remember a value in D_09bb7e74, then call FUN_088c8aa8 with it.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern s32 D_09bb7e74; /* Hypothesis: type from the access only. */
void FUN_088c8aa8(s32 value);

void FUN_088c987c(s32 value)
{
    D_09bb7e74 = value;
    FUN_088c8aa8(value);
}
