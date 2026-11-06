/*
 * FUN_088c3680: reset all thirty-two entries in a record table.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 */

void FUN_088c3640(void *record, int index);

void FUN_088c3680(void *record)
{
    int i;

    for (i = 0; i < 32; i++) {
        FUN_088c3640(record, i);
    }
}
