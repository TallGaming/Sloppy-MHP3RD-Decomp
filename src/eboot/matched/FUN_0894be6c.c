/*
 * FUN_0894be6c: add signed byte 0x10 to the current base value.
 *
 * Main EBOOT, attempt-high-01 batch 4. The field and base-value roles are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;

int FUN_0894bdd4();

int FUN_0894be6c(u8 *record)
{
    int base = FUN_0894bdd4();
    return base + *(s8 *)(record + 0x10);
}
