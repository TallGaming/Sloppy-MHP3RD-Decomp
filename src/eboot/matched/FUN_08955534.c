/*
 * FUN_08955534: release a positive handle and clear its two state words.
 *
 * Main EBOOT, G2 final frame-and-branch slice. The record and handle roles are hypotheses.
 */

typedef unsigned char u8;

void FUN_08960b00(int handle);

void FUN_08955534(u8 *record)
{
    int *handle = (int *)(record + 0x4c50);

    if (*handle > 0) {
        FUN_08960b00(*handle);
        /* Match shape: reverse source order gives the reference's two stores. */
        *handle = 0;
        *(int *)(record + 0x4c54) = 0;
    }
}
