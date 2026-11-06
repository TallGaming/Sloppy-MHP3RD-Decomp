/*
 * FUN_0891fa60: forward the valid signed mode at 0x1D5 to the global manager.
 *
 * Main EBOOT, attempt-high-01 batch 2. The manager and mode roles are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;

extern void *D_09beb0bc;
void FUN_08900464(void *manager, int mode, int flag);

void FUN_0891fa60(u8 *record)
{
    if (record[0x1d4] == 1)
        FUN_08900464(D_09beb0bc, *(s8 *)(record + 0x1d5), 0);
}
