/*
 * FUN_0894af68: return 3 when VALUE is 2, else 2.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

s32 FUN_0894af68(void *unused, u8 value)
{
    return value == 2 ? 3 : 2;
}
