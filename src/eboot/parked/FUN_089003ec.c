/*
 * FUN_089003ec: update one of two subrecords unless SELECTOR is -1.
 *
 * Main EBOOT, attempt-high-01. Names, record layout and types are hypotheses.
 */

typedef unsigned char u8;
typedef short s16;

void FUN_0890000c(void *record, int value, int x, int y);

void FUN_089003ec(u8 *record, int selector, int value, s16 x, s16 y)
{
    u8 *subrecord;

    if (selector == -1)
        return;
    subrecord = record + 4;
    if (selector != 0)
        subrecord = record + 0x54;
    FUN_0890000c(subrecord, value, x, y);
}
