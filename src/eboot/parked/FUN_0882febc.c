/*
 * FUN_0882febc: copy the 16-bit value at offset 2 to offset 8, big-endian.
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

void FUN_0882febc(u8 *buf)
{
    u16 value = *(u16 *)(buf + 2);

    buf[9] = value;
    buf[8] = value >> 8;
}
