/*
 * FUN_0887c018: reset the 4-byte global D_08aad2ec to 2, 0, 0, 0.
 *
 * Main EBOOT, match slice 6 (small straight-line leaf functions, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern u8 D_08aad2ec[]; /* Hypothesis: type from the access only. */

void FUN_0887c018(void)
{
    /* Match note: this store order gives the reference schedule. */
    D_08aad2ec[0] = 2;
    D_08aad2ec[1] = 0;
    D_08aad2ec[2] = 0;
    D_08aad2ec[3] = 0;
}
