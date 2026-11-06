/*
 * FUN_088f391c: transition state 1 to state 6 and notify two global managers.
 *
 * Main EBOOT, G2 high-address frame-and-branch slice. The state and manager roles are hypotheses.
 */

typedef unsigned char u8;

extern void *D_09bb7bc0;
void FUN_088c1d58(void *queue);
void FUN_088be97c(void *manager, int event);

void FUN_088f391c(void *record)
{
    int *state = (int *)((u8 *)record + 0x20);

    if (*state == 1) {
        *state = 6;
        FUN_088c1d58(D_09bb7bc0);
        FUN_088be97c(*(void **)0x09bb7b60, 3);
    }
}
