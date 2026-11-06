/*
 * FUN_0888426c: call FUN_08883f0c on the part at 0x10 with 0 and 1.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_08883f0c(void *rec, void *part, s32 level, s32 flag);

void FUN_0888426c(void *rec)
{
    FUN_08883f0c(rec, (u8 *)rec + 0x10, 0, 1);
}
