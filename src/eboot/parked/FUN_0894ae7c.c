/*
 * FUN_0894ae7c: return an adjusted field when the signed index is the active last index.
 *
 * Main EBOOT, G2 final frame-and-branch slice. The record and index roles are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;

int FUN_0894abb4();

int FUN_0894ae7c(void *record, s8 index)
{
    int active = FUN_0894abb4();
    int result = 8;

    if (index + 1 == active)
        result = *(int *)((u8 *)record + 0xc9c) - index * 8;
    return result;
}
