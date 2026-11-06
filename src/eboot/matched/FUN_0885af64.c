/*
 * FUN_0885af64: clear the 32-word table D_08a333c4 and the word D_08a333c0; return 0.
 *
 * Main EBOOT, match slice 8 (small leaf functions with branches, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern s32 D_08a333c4[]; /* Hypothesis: type from the access only. */
extern s32 D_08a333c0; /* Hypothesis: type from the access only. */

s32 FUN_0885af64(void)
{
    s32 *word;

    for (word = D_08a333c4; word != D_08a333c4 + 32; word++)
        *word = 0;
    D_08a333c0 = 0;
    return 0;
}
