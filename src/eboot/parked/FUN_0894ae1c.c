/*
 * FUN_0894ae1c: return an adjusted field when the signed index is the active last index.
 *
 * Main EBOOT, G2 final frame-and-branch slice. The record and index roles are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;

int FUN_0894ab94();

int FUN_0894ae1c(void *record, s8 index)
{
    int active = FUN_0894ab94();
    int result = 8;

    if (index + 1 == active)
        result = *(int *)((u8 *)record + 0x658) - index * 8;
    return result;
}
