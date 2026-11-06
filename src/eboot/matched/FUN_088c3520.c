/*
 * FUN_088c3520: stop an active singleton operation and clear its flag.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 */

typedef unsigned char u8;

void FUN_088eea8c(void);

void FUN_088c3520(u8 *record)
{
    if (record[0x14] == 1) {
        FUN_088eea8c();
        record[0x14] = 0;
    }
}
