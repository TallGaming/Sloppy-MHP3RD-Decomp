/*
 * FUN_088ec518: call the import FUN_08960bc0 with the handle at offset 0 and 1.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_08960bc0(s32 handle, s32 a);

void FUN_088ec518(s32 *rec)
{
    FUN_08960bc0(rec[0], 1);
}
