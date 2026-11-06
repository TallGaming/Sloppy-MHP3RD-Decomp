/*
 * FUN_08920264: return zero for a null record or query the global table by byte 5.
 *
 * Main EBOOT, attempt-high-01 batch 2. The unused context and lookup role are hypotheses.
 */

typedef unsigned char u8;

extern void *D_08aace80;
int FUN_08867d40(void *manager, int index);

int FUN_08920264(void *unused, u8 *record)
{
    if (record == 0)
        return 0;
    return FUN_08867d40(D_08aace80, record[5] + 0x5b4);
}
