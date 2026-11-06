/*
 * FUN_0889f530: run three record setup steps and clear two state bytes.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: the code shape matches but the handler address lacks a symbol.
 */

typedef unsigned char u8;

void FUN_0887c04c(void *record);
void FUN_0887c360(void);
void FUN_0887c3c4(void (*handler)(void), void *record);
void FUN_0889f6f0(void);

void FUN_0889f530(u8 *record)
{
    FUN_0887c04c(record);
    FUN_0887c360();
    FUN_0887c3c4(FUN_0889f6f0, record);
    /* This source order gives the reference byte-store order under GCC. */
    record[0x0c] = 0;
    record[0x0d] = 0;
}
