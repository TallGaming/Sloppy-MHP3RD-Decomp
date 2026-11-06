/*
 * FUN_0894b258: release the optional object at 0x4A5C and clear two flags.
 *
 * Main EBOOT, G2 final frame-and-branch slice. The record and manager roles are hypotheses.
 */

typedef unsigned char u8;

void FUN_088b65f8(void *manager, int object);

void FUN_0894b258(u8 *record)
{
    int object = *(int *)(record + 0x4a5c);

    if (object != 0)
        FUN_088b65f8(*(void **)0x09bb7a80, object);
    record[2] = 0;
    record[0x4a60] = 0;
}
