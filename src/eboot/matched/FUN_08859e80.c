/*
 * FUN_08859e80: call FUN_08858030 only for the code 777; return 0 otherwise.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

s32 FUN_08858030(s32 code);

s32 FUN_08859e80(s32 code)
{
    if (code == 777)
        return FUN_08858030(code);
    return 0;
}
