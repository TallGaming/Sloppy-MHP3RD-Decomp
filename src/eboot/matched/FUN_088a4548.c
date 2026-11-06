/*
 * FUN_088a4548: copy three bytes from SRC to DST + 1.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_088a4548(void *unused, u8 *dst, const u8 *src)
{
    dst[1] = src[0];
    dst[2] = src[1];
    dst[3] = src[2];
}
