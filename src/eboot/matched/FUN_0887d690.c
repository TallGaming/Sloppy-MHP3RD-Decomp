/*
 * FUN_0887d690: initialize an object header (method table D_0896ab60, size 12) and its part at 0x12978.
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
void FUN_088f9cd0(void *part);

void FUN_0887d690(s32 *object)
{
    /* Match note: this store order gives the reference schedule. */
    object[2] = 1;
    object[1] = 12;
    object[0] = (s32)&D_0896ab60;
    object[5] = 0;
    FUN_088f9cd0((u8 *)object + 0x12978);
    object[6] = 0;
}
