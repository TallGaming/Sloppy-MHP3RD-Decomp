/*
 * FUN_088ab0ec: run four-argument setup and store the fifth argument.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 */

typedef unsigned char u8;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_088ab0b8(void *, int, int, int);

void FUN_088ab0ec(u8 *record, int b, int c, int d, int e)
{
    FUN_088ab0b8(record, b, c, d);
    FIELD(record, int, 0x1a0) = e;
}
