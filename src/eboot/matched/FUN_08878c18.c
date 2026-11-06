/*
 * FUN_08878c18: store two words, then call FUN_08878bcc.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_08878bcc(s32 *rec, s32 a, s32 b);

void FUN_08878c18(s32 *rec, s32 second, s32 first)
{
    rec[0] = first;
    rec[1] = second;
    FUN_08878bcc(rec, second, first);
}
