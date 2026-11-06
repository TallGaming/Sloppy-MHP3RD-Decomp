/*
 * FUN_088a8e54: reset a three-word record: -1, 0, 0.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void FUN_088a8e54(void *unused, s32 *out)
{
    /* Match note: this store order gives the reference schedule. */
    out[0] = -1;
    out[2] = 0;
    out[1] = 0;
}
