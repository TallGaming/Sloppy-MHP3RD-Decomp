/*
 * FUN_088c81f8: call FUN_088c3d04 on the global record D_09bb7e70 when the second argument is set.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern void * D_09bb7e70; /* Hypothesis: type from the access only. */
void FUN_088c3d04(void *rec, s32 a, s32 b, s32 c);

void FUN_088c81f8(void *unused, s32 value, s32 b, s32 c)
{
    if (value != 0)
        FUN_088c3d04(D_09bb7e70, value, b, c);
}
