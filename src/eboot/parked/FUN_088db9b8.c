/*
 * FUN_088db9b8: return word 8 of 36-byte entry INDEX.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

struct Entry_088db9b8
{
    s32 word_00;
    s32 word_04;
    s32 word_08;
    u8 unknown_0c[0x18];
};

s32 FUN_088db9b8(struct Entry_088db9b8 *entries, s32 index)
{
    return entries[index].word_08;
}
