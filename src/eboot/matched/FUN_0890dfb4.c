/*
 * FUN_0890dfb4: test whether the current 0x26C-byte entry is active and has ID.
 *
 * Main EBOOT, attempt-high-01. The record layout and current index are hypotheses.
 */

typedef unsigned char u8;

int FUN_0890dfb4(u8 *record, int id)
{
    u8 *entry = record + *(int *)(record + 0x3070) * 0x26c;
    int result = 1;

    if (entry[0] == 0 || *(int *)(entry + 0x18) != id)
        result = 0;
    return result;
}
