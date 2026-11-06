/*
 * FUN_0894b9d4: notify the global manager about a nonzero object at 0x4A5C.
 *
 * Main EBOOT, attempt-high-01 batch 4. The record and manager roles are hypotheses.
 */

typedef unsigned char u8;

void FUN_08857710(void *manager, int event, int object, int flag);

void FUN_0894b9d4(u8 *record)
{
    int object = *(int *)(record + 0x4a5c);

    if (object == 0)
        return;
    FUN_08857710(*(void **)0x08a31e8c, 0x11, object, 1);
}
