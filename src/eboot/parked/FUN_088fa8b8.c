/*
 * FUN_088fa8b8: copy four half-words to a local record and pass it onward.
 *
 * Main EBOOT, G2 high-address slice. The record and argument types are hypotheses.
 */

typedef unsigned short u16;

void FUN_088fa7b4(void *first, void *second, const u16 *values);

void FUN_088fa8b8(void *first, void *second, const u16 *values)
{
    u16 copy[4];

    copy[0] = values[0];
    copy[1] = values[1];
    copy[2] = values[2];
    copy[3] = values[3];
    FUN_088fa7b4(first, second, copy);
}
