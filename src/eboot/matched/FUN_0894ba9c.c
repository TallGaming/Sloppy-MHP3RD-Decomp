/*
 * FUN_0894ba9c: add signed byte 6 to the current base value.
 *
 * Main EBOOT, attempt-high-01 batch 4. The field and base-value roles are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;

int FUN_0894ba04();

int FUN_0894ba9c(u8 *record)
{
    int base = FUN_0894ba04();
    return base + *(s8 *)(record + 6);
}
