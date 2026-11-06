/*
 * FUN_08865ff4: call FUN_08960bd8 with word 0xC of 16-byte entry INDEX in D_089c7130, 1 and 0.
 *
 * Main EBOOT, match slice 6 (small straight-line leaf functions, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

struct Entry_089c7130
{
    s32 word_00;
    s32 word_04;
    s32 word_08;
    s32 word_0c;
};
extern struct Entry_089c7130 D_089c7130[];
void FUN_08960bd8(s32 handle, s32 a, s32 b);

void FUN_08865ff4(s32 index)
{
    FUN_08960bd8(D_089c7130[index].word_0c, 1, 0);
}
