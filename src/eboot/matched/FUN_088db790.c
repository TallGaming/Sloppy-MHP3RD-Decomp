/*
 * FUN_088db790: reset all twenty-one entries in a runtime table.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 */

void FUN_088db764(void *record, int index);

void FUN_088db790(void *record)
{
    int i;

    for (i = 0; i < 21; i++) {
        FUN_088db764(record, i);
    }
}
