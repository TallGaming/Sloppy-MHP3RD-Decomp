/*
 * FUN_088ccc20: map a byte through D_09c3ede0; 0xFF in the table keeps the byte unchanged.
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

u8 FUN_088ccc20(void *unused, u8 value)
{
    u8 mapped = D_09c3ede0[value];

    return mapped == 0xff ? value : mapped;
}
