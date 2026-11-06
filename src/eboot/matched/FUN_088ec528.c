/*
 * FUN_088ec528: release a valid handle at offset 8 and replace it with -1.
 *
 * Main EBOOT, G2 high-address frame-and-branch slice. The record and handle roles are hypotheses.
 */

typedef unsigned char u8;

void FUN_08960f50(int handle);

void FUN_088ec528(void *record)
{
    int *handle = (int *)((u8 *)record + 8);

    if (*handle != -1) {
        FUN_08960f50(*handle);
        *handle = -1;
    }
}
