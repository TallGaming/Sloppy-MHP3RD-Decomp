/*
 * FUN_08886034: call FUN_08885ee4 on the 144-byte block at 0x1BD4 with a stack work buffer.
 *
 * Main EBOOT, match slice 10 (small functions with a frame, no branches, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_08885ee4(void *rec, s8 kind, void *dst, s32 size, void *src, void *work);

void FUN_08886034(u8 *rec)
{
    u8 work[144];

    FUN_08885ee4(rec, (s8)rec[0x1bd0], rec + 0x1bd4, 144, rec + 0x1bd4, work);
}
