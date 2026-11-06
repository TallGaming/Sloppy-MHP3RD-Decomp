/*
 * FUN_088305dc: copy 6 bytes; return 0.
 *
 * Main EBOOT, match slice 9 (small functions with a frame, no branches, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_088ebb18(void *dst, const void *src, u32 size); /* Hypothesis: memcpy-like */

s32 FUN_088305dc(void *dst, const void *src)
{
    FUN_088ebb18(dst, src, 6);
    return 0;
}
