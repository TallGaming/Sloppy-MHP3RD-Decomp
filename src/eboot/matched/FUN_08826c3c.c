/*
 * FUN_08826c3c: forward the call to FUN_08828d68 (tail call, arguments unchanged).
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

/* Hypothesis: the callee's parameters are unknown; they pass through unchanged. */
void FUN_08828d68();

void FUN_08826c3c(void)
{
    FUN_08828d68();
}
