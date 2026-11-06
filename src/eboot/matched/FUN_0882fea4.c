/*
 * FUN_0882fea4: store a 16-bit value big-endian at offset 0xC of a byte buffer.
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

void FUN_0882fea4(u8 *buf, u16 value)
{
    buf[0xc] = value >> 8;
    buf[0xd] = value;
}
