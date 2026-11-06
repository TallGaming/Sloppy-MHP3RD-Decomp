/*
 * FUN_0882d700: test whether the second argument is not negative.
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

s32 FUN_0882d700(void *unused, s32 value)
{
    /* Match note: a sign-bit test. "value >= 0" gives nor+srl; the
     * reference has srl+xori. */
    return !((u32)value >> 31);
}
