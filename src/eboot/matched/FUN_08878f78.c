/*
 * FUN_08878f78: clear 120 bytes at offset 4.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void *FUN_088ebb10(void *dst, s32 value, u32 size); /* Hypothesis: memset-like */

void FUN_08878f78(void *rec)
{
    FUN_088ebb10((u8 *)rec + 4, 0, 120);
}
