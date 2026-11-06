/*
 * FUN_088c3d44: call FUN_0885439c or FUN_088543b4, depending on FLAG.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_0885439c();
void FUN_088543b4();

void FUN_088c3d44(void *unused, s32 flag)
{
    if (flag)
        FUN_0885439c();
    else
        FUN_088543b4();
}
