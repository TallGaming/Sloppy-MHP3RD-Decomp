/*
 * FUN_0882f8bc: clear the word at offset 0x8C48 of the global block at 0x08A291A0.
 *
 * Main EBOOT, match slice 1 (tiny functions). Names and types are
 * hypotheses unless stated.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

/* Hypothesis: a large global block; only the offset 0x8C48 is known. */
struct Block_08a291a0
{
    u8 unknown_0000[0x8c48];
    s32 word_8c48;
};
extern struct Block_08a291a0 D_08a291a0;

void FUN_0882f8bc(void)
{
    D_08a291a0.word_8c48 = 0;
}
