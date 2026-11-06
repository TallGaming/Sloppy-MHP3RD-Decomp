/*
 * FUN_088a006c: test whether byte 0xD6 equals the byte from FUN_088cca4c(D_09bb7e90).
 *
 * Main EBOOT, match slice 10 (small functions with a frame, no branches, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern void * D_09bb7e90; /* Hypothesis: type from the access only. */
u8 FUN_088cca4c(void *rec);

s32 FUN_088a006c(u8 *rec)
{
    u8 value = rec[0xd6];

    return value == FUN_088cca4c(D_09bb7e90);
}
