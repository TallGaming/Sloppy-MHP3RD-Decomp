/*
 * FUN_088c04c0: return the sum of half-words 4 and 6 of 8-byte entry INDEX at 0x2290.
 *
 * Main EBOOT, match slice 7 (small straight-line leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

struct Entry_088c04c0
{
    s32 word_00;
    u16 half_04;
    u16 half_06;
};

u16 FUN_088c04c0(u8 *rec, u8 index)
{
    struct Entry_088c04c0 *entries = (struct Entry_088c04c0 *)(rec + 0x2290);

    return entries[index].half_04 + entries[index].half_06;
}
