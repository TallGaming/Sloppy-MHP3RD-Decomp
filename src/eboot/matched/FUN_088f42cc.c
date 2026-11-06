/*
 * FUN_088f42cc: clear two words and a 1024-byte buffer at offset 8.
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

void FUN_088f42cc(s32 *rec)
{
    rec[0] = 0;
    rec[1] = 0;
    FUN_088ebb10(rec + 2, 0, 1024);
}
