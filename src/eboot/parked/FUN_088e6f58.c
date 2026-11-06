/*
 * FUN_088e6f58: populate a record's table from defaults and clear its tail.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: the paired table loops remain one instruction longer and different.
 */
extern int D_08968d84[];
void FUN_088e6f44(void *, int, int);

void FUN_088e6f58(void *record)
{
    int i = 0;

    do {
        FUN_088e6f44(record, i, D_08968d84[i]);
        i++;
    } while (i != 0x3b);
    do {
        FUN_088e6f44(record, i, 0);
        i++;
    } while (i != 0x4b);
}
