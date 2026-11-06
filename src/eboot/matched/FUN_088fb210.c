/*
 * FUN_088fb210: return VALUE + 2 when FLAG is set, else VALUE.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

s32 FUN_088fb210(void *unused, u8 value, u8 flag)
{
    return flag ? value + 2 : value;
}
