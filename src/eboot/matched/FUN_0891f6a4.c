/*
 * FUN_0891f6a4: return 10 when the two signed bytes differ, else 0.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

s32 FUN_0891f6a4(void *unused, s8 a, s8 b)
{
    return a != b ? 10 : 0;
}
