/*
 * FUN_088cc9d0: clear a thirteen-byte record array.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 */

typedef unsigned char u8;

void FUN_088cc9d0(u8 *record)
{
    u8 *item = record + 0x9c08;
    int i = 0;

    do {
        i++;
        *item++ = 0;
    } while (i != 13);
}
