/*
 * FUN_088c3d04: call FUN_088543ac or FUN_088543c4, depending on FLAG.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_088543ac(s32 value);
void FUN_088543c4(s32 value);

void FUN_088c3d04(void *unused, s32 value, s32 flag)
{
    if (flag)
        FUN_088543ac(value);
    else
        FUN_088543c4(value);
}
