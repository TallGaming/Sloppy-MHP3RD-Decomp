/*
 * FUN_0891a710: decrement a positive counter and report whether it remains positive.
 *
 * Main EBOOT, attempt-high-01. The counter field and result meaning are hypotheses.
 */

typedef unsigned char u8;

int FUN_0891a710(u8 *record)
{
    int *counter = (int *)(record + 0x38c);
    int value = *counter - 1;

    if (*counter < 1)
        return 0;
    *counter = value;
    if (value < 1)
        return 0;
    return 1;
}
