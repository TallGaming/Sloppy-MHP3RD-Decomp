/*
 * FUN_088ec504: call the import FUN_08960bd8 with the handle at offset 0, 1 and 0.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_08960bd8(s32 handle, s32 a, s32 b);

void FUN_088ec504(s32 *rec)
{
    FUN_08960bd8(rec[0], 1, 0);
}
