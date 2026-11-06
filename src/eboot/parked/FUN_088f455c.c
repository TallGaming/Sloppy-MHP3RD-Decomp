/*
 * FUN_088f455c: store VALUE at word 4 when the global index matches.
 *
 * Main EBOOT, G2 high-address frame-and-branch slice. The record and manager roles are hypotheses.
 */

typedef unsigned int u32;

u32 FUN_088bda78(void *manager);

void FUN_088f455c(int *record, int value, u32 index)
{
    if (FUN_088bda78(*(void **)0x09bb7b60) == (index & 0xff))
        record[1] = value;
}
