/*
 * FUN_088c8a50: clear the global words of this module, then D_09bb7e78.
 *
 * Main EBOOT, match slice 11 (small functions with a frame, no branches, part 3). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern s32 D_09bb7e78; /* Hypothesis: type from the access only. */
void FUN_088c8a40();
void FUN_088c31b4();
void FUN_088db6b0();

void FUN_088c8a50(u8 *rec)
{
    FUN_088c8a40(rec + 0x8c7c);
    FUN_088c31b4(rec + 0x89c0);
    FUN_088db6b0(rec);
    D_09bb7e78 = 0;
}
