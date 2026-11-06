/*
 * FUN_088c3d24: call FUN_088543a4 or FUN_088543bc, depending on FLAG.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_088543a4(s32 value);
void FUN_088543bc(s32 value);

void FUN_088c3d24(void *unused, s32 value, s32 flag)
{
    if (flag)
        FUN_088543a4(value);
    else
        FUN_088543bc(value);
}
