/*
 * FUN_08886068: call FUN_08885ee4 on the 332-byte block at 0x818 with a stack work buffer.
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

void FUN_08886068(u8 *rec)
{
    u8 work[332];

    FUN_08885ee4(rec, (s8)rec[0x17af], rec + 0x818, 332, rec + 0x818, work);
}
