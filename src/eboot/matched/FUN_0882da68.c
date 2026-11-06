/*
 * FUN_0882da68: return the length of a 16-bit character string.
 *
 * Main EBOOT, match slice 8 (small leaf functions with branches, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

s32 FUN_0882da68(void *unused, const u16 *s)
{
    s32 length = 0;

    while (*s != 0) {
        s++;
        length++;
    }
    return length;
}
