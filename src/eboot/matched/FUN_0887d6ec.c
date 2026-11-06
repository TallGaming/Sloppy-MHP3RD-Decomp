/*
 * FUN_0887d6ec: tear down an object: method table D_0896ab60, FUN_088f9cdc on the part at 0x12978, then D_0896a890.
 *
 * Main EBOOT, match slice 10 (small functions with a frame, no branches, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern const u8 D_0896ab60; /* Hypothesis: type from the access only. */
extern const u8 D_0896a890; /* Hypothesis: type from the access only. */
void FUN_088f9cdc(void *part);

void FUN_0887d6ec(void **object)
{
    *object = (void *)&D_0896ab60;
    FUN_088f9cdc((u8 *)object + 0x12978);
    *object = (void *)&D_0896a890;
}
