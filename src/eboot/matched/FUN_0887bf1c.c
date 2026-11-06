/*
 * FUN_0887bf1c: call FUN_0887b4bc on the global record D_08aad2ec.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern u8 D_08aad2ec; /* Hypothesis: type from the access only. */
void FUN_0887b4bc();

void FUN_0887bf1c(void)
{
    FUN_0887b4bc(&D_08aad2ec);
}
