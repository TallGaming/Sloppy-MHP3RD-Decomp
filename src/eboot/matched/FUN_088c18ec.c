/*
 * FUN_088c18ec: copy bytes 2 and 3 of SRC to two separate bytes.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_088c18ec(u8 *out3, u8 *out2, const u8 *src)
{
    *out2 = src[2];
    *out3 = src[3];
}
