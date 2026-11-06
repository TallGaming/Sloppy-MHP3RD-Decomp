/*
 * FUN_08867cb0: return block INDEX of the global block table D_08a39e80 (FUN_08867c18).
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern u8 D_08a39e80; /* Hypothesis: type from the access only. */
void *FUN_08867c18(void *rec, s32 index);

void *FUN_08867cb0(void *unused, s32 index)
{
    return FUN_08867c18(&D_08a39e80, index);
}
