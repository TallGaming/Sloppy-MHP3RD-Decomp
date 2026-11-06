/*
 * FUN_088db70c: reset both entries in a small runtime table.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 */

void FUN_088db6c0(void *record, int index);

void FUN_088db70c(void *record)
{
    int i;

    for (i = 0; i < 2; i++) {
        FUN_088db6c0(record, i);
    }
}
