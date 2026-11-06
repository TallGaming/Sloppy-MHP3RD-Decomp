/*
 * FUN_08834fcc: copy 8 bytes from offset 0x231C of the record D_09bf5250 points to; return 0.
 *
 * Main EBOOT, match slice 6 (small straight-line leaf functions, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern s32 *D_09bf5250; /* Hypothesis */
void *memcpy(void *dst, const void *src, u32 size); /* compiler built-in */

s32 FUN_08834fcc(void *dst)
{
    memcpy(dst, (u8 *)D_09bf5250 + 0x231c, 8);
    return 0;
}
