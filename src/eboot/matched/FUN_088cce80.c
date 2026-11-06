/*
 * FUN_088cce80: test whether byte VALUE has an entry in D_09c3ede0 (not 0xFF).
 *
 * Main EBOOT, match slice 7 (small straight-line leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern const u8 D_09c3ede0[]; /* Hypothesis: type from the access only. */

s32 FUN_088cce80(void *unused, u8 value)
{
    return D_09c3ede0[value] != 0xff;
}
