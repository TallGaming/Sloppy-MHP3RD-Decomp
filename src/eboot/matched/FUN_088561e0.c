/*
 * FUN_088561e0: tear down an object: method table D_0896a8f0, FUN_088f9cdc on the part at 0x28, then D_0896a890.
 *
 * Main EBOOT, match slice 9 (small functions with a frame, no branches, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern const u8 D_0896a8f0; /* Hypothesis: type from the access only. */
extern const u8 D_0896a890; /* Hypothesis: type from the access only. */
void FUN_088f9cdc(void *part);

void FUN_088561e0(void **object)
{
    *object = (void *)&D_0896a8f0;
    FUN_088f9cdc((u8 *)object + 0x28);
    *object = (void *)&D_0896a890;
}
