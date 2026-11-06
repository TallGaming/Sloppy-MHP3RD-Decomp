/*
 * FUN_0894add4: combine signed bytes 8 and 9 using the current multiplier.
 *
 * Main EBOOT, attempt-high-01 batch 4. The record fields and multiplier role are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;

int FUN_0894abd4();

int FUN_0894add4(u8 *record)
{
    s8 high = *(s8 *)(record + 9);
    int multiplier = FUN_0894abd4();

    return *(s8 *)(record + 8) + high * multiplier;
}
