/*
 * FUN_088cf464: clear all eight words of a record bitmap.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned int u32;

void FUN_088cf464(u8 *record)
{
    u32 *word = (u32 *)(record + 0x9be8);
    int i = 0;

    do {
        i++;
        *word++ = 0;
    } while (i != 8);
}
