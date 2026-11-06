/*
 * FUN_088be2d4: return the inverse of bit 21 of word 0 of the self-relative block of D_08a33e70.
 *
 * Main EBOOT, match slice 7 (small straight-line leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

/* Hypothesis: D_08a33e70 holds the offset of a block relative to itself. */
struct Header_08a33e70
{
    s32 offset;
};
extern struct Header_08a33e70 D_08a33e70;

s32 FUN_088be2d4(void)
{
    u32 *block = (u32 *)(D_08a33e70.offset + (u8 *)&D_08a33e70);

    return ((*block >> 21) & 1) ^ 1;
}
