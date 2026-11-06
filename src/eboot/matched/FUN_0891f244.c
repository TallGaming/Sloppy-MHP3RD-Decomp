/*
 * FUN_0891f244: copy 6 bytes from offset 0x1CE to offset 0x1C8.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_088ebb18(void *dst, const void *src, u32 size); /* Hypothesis: memcpy-like */

void FUN_0891f244(u8 *rec)
{
    FUN_088ebb18(rec + 0x1c8, rec + 0x1ce, 6);
}
