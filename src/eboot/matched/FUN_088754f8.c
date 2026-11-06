/*
 * FUN_088754f8: call FUN_08804698 with FUN_08875510 as the second argument.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_08875510();
void FUN_08804698(void *a, void (*function)(), void *b); /* Hypothesis */

void FUN_088754f8(void)
{
    FUN_08804698(0, FUN_08875510, 0);
}
