/*
 * FUN_0891f810: select an optional signed byte and forward four values.
 *
 * Main EBOOT, attempt-high-01 batch 2. The global manager and argument roles are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;

void FUN_08851c60(void *manager, int third, int selected, int second);

void FUN_0891f810(u8 *record, int second, int third)
{
    int selected = -1;

    if ((record[0x1ca] & 1) != 0)
        selected = *(s8 *)(record + 0x1c4);
    FUN_08851c60(*(void **)0x08a31df0, third, selected, second);
}
