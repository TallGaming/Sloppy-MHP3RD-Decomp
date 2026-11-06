/*
 * FUN_0883a8ac: test whether the first 6 bytes of A differ from offset 0x78C of D_09bf5250's record.
 *
 * Main EBOOT, match slice 9 (small functions with a frame, no branches, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern void * D_09bf5250; /* Hypothesis: type from the access only. */
s32 FUN_0880bff4(const void *a, const void *b, u32 size); /* Hypothesis: memcmp-like */

s32 FUN_0883a8ac(const void *a)
{
    return FUN_0880bff4(a, (u8 *)D_09bf5250 + 0x78c, 6) != 0;
}
