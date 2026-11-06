/*
 * FUN_0894bb68: add signed byte 0x0E to the current base value.
 *
 * Main EBOOT, attempt-high-01 batch 4. The field and base-value roles are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;

int FUN_0894bad0();

int FUN_0894bb68(u8 *record)
{
    int base = FUN_0894bad0();
    return base + *(s8 *)(record + 0x0e);
}
