/*
 * FUN_0885acac: call FUN_0885a7ec with the code 0x10000001.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_0885a7ec(void *rec, u32 code);

void FUN_0885acac(void *rec)
{
    FUN_0885a7ec(rec, 0x10000001);
}
