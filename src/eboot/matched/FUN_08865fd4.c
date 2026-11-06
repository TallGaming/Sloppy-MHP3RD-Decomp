/*
 * FUN_08865fd4: call FUN_08960bc0 with word 0xC of 16-byte entry INDEX in D_089c7130 and 1.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
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
void FUN_08960bc0(s32 handle, s32 flag);

void FUN_08865fd4(s32 index)
{
    FUN_08960bc0(D_089c7130[index].word_0c, 1);
}
