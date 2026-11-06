/*
 * FUN_088300cc: reserve SIZE bytes in OUT (FUN_0882ff3c), then copy SIZE bytes from SRC; return 0.
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

s32 FUN_088300cc(void *out, const void *src, u16 size)
{
    FUN_0882ff3c(out, size);
    FUN_08830038(out, src, size);
    return 0;
}
