/*
 * FUN_088b6108: process four indexed slots with the second slot handler.
 *
 * Main EBOOT, G2 frame-plus-branches matching. Names and types are hypotheses.
 */

void FUN_088b60bc(void *record, int index);

void FUN_088b6108(void *record)
{
    int index;

    for (index = 0; index < 4; index++) {
        FUN_088b60bc(record, index);
    }
}
