/*
 * FUN_088f3de8: set state 3 when FUN_088f3d78 succeeds.
 *
 * Main EBOOT, G2 high-address frame-and-branch slice. The state field is a hypothesis.
 */

typedef unsigned char u8;

int FUN_088f3d78();

void FUN_088f3de8(void *record)
{
    if (FUN_088f3d78() != 0)
        *(int *)((u8 *)record + 0x20) = 3;
}
