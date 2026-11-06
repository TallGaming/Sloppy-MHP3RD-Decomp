/*
 * FUN_08830270: reserve 8 bytes in OUT, then copy 8 bytes from SRC; return 0.
 *
 * Main EBOOT, match slice 9 (small functions with a frame, no branches, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_0882ff3c(void *out, u32 size);
void FUN_08830038(void *out, const void *src, u32 size);

s32 FUN_08830270(void *out, const void *src)
{
    FUN_0882ff3c(out, 8);
    FUN_08830038(out, src, 8);
    return 0;
}
