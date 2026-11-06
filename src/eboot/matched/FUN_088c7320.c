/*
 * FUN_088c7320: call FUN_088dbaf4 on the global record D_09bc1ac0 (other arguments unchanged).
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern void * D_09bc1ac0; /* Hypothesis: type from the access only. */
void FUN_088dbaf4(void *rec, s32 a, s32 b, s32 c);

void FUN_088c7320(void *unused, s32 a, s32 b, s32 c)
{
    FUN_088dbaf4(D_09bc1ac0, a, b, c);
}
