/*
 * FUN_088563bc: initialize an object header (method table D_0896a908, size 12).
 *
 * Main EBOOT, match slice 6 (small straight-line leaf functions, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern const u8 D_0896a908; /* Hypothesis: type from the access only. */

void FUN_088563bc(s32 *object)
{
    /* Match note: this store order gives the reference schedule. */
    object[2] = 1;
    object[1] = 12;
    object[0] = (s32)&D_0896a908;
    object[5] = 0;
    object[6] = 0;
}
