/*
 * FUN_0883bab8: set a small record: word 4 to a value, half-word 0 to zero.
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

struct Pair_0883bab8
{
    u16 count_0;
    u16 unknown_2;
    s32 value_4;
};

void FUN_0883bab8(void *unused, struct Pair_0883bab8 *pair, s32 value)
{
    pair->value_4 = value;
    pair->count_0 = 0;
}
