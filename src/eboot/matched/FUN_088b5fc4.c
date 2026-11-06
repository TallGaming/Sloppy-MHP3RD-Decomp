/*
 * FUN_088b5fc4: process the first four indexed slots of a record.
 *
 * Main EBOOT, G2 frame-plus-branches matching. Names and types are hypotheses.
 */

void FUN_088b5f90(void *record, int index);

void FUN_088b5fc4(void *record)
{
    int index;

    for (index = 0; index < 4; index++) {
        FUN_088b5f90(record, index);
    }
}
