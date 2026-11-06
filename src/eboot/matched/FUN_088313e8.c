/*
 * FUN_088313e8: register FUN_088304fc with FUN_0887c420; return 0.
 *
 * Main EBOOT, match slice 9 (small functions with a frame, no branches, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_088304fc();
void FUN_0887c420(void (*function)());

s32 FUN_088313e8(void)
{
    FUN_0887c420(FUN_088304fc);
    return 0;
}
