/*
 * FUN_0891a6d0: clear state byte 0x37C and report success when word 0x380 is nonpositive.
 *
 * Main EBOOT, attempt-high-01. The state fields are hypotheses.
 */

typedef unsigned char u8;

int FUN_0891a6d0(u8 *record)
{
    if (*(int *)(record + 0x380) < 1) {
        record[0x37c] = 0;
        return 1;
    }
    return 0;
}
