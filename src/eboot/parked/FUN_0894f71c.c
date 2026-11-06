/*
 * FUN_0894f71c: dispatch state byte 4 to one of three handlers.
 *
 * Main EBOOT, attempt-high-01 batch 4. State and handler roles are hypotheses.
 */

typedef unsigned char u8;

void FUN_0894f550();
void FUN_0894f380();
void FUN_0894f1c0();

void FUN_0894f71c(u8 *record)
{
    char state = record[4];

    if (state == 0) {
        FUN_0894f550();
        return;
    }
    if (state == 1) {
        FUN_0894f380();
        return;
    }
    if (state == 2)
        FUN_0894f1c0();
}
