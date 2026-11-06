/*
 * FUN_0886598c: return the address of 44-byte entry INDEX (< 32) of D_08a338ac, else null.
 *
 * Main EBOOT, match slice 8 (small leaf functions with branches, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

struct Entry_08a338ac
{
    u8 bytes[44];
};
extern struct Entry_08a338ac D_08a338ac[];

void *FUN_0886598c(u32 index)
{
    if (index < 32)
        return &D_08a338ac[index];
    return 0;
}
