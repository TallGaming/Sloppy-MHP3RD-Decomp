/*
 * FUN_08907090: store VALUE in the first -1 slot among six bytes at offset 0x68.
 *
 * Main EBOOT, attempt-high-01. The record layout and sentinel are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;

void FUN_08907090(u8 *record, u8 value)
{
    int index = 0;

    do {
        if (*(s8 *)(record + 0x68 + index) == -1) {
            record[0x68 + index] = value;
            return;
        }
        index++;
    } while (index != 6);
}
