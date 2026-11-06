/*
 * FUN_08899b9c: return the address of 76-byte entry (INDEX mod 32) in D_09bb6ec0.
 *
 * Main EBOOT, match slice 6 (small straight-line leaf functions, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

struct Entry_09bb6ec0
{
    u8 bytes[76];
};
extern struct Entry_09bb6ec0 D_09bb6ec0[];

void *FUN_08899b9c(s32 index)
{
    return &D_09bb6ec0[index & 0x1f];
}
