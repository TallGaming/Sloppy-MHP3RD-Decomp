/*
 * FUN_088a2c04: tear down an object: method table D_0896ad18, parts at 0x88 and 0x38, then D_0896a890.
 *
 * Main EBOOT, match slice 11 (small functions with a frame, no branches, part 3). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern const u8 D_0896ad18; /* Hypothesis: type from the access only. */
extern const u8 D_0896a890; /* Hypothesis: type from the access only. */
void FUN_088f9cdc(void *part);

void FUN_088a2c04(void **object)
{
    *object = (void *)&D_0896ad18;
    FUN_088f9cdc((u8 *)object + 0x88);
    FUN_088f9cdc((u8 *)object + 0x38);
    *object = (void *)&D_0896a890;
}
