/*
 * FUN_088304bc: copy one byte and return the advanced source pointer.
 *
 * Main EBOOT, match slice 1 (tiny functions). Names and types are
 * hypotheses unless stated.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

u8 *FUN_088304bc(u8 *dst, u8 *src)
{
    dst[0] = src[0];
    return src + 1;
}
