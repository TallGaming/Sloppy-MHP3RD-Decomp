/*
 * FUN_08920290: select mode 0x1F through 0x22 from the low two flag bits.
 *
 * Main EBOOT, attempt-high-01 batch 2. The mode meanings are hypotheses.
 */

typedef unsigned int u32;

void FUN_0891f064(void *record, int mode);

void FUN_08920290(void *record, u32 flags)
{
    int mode;

    if ((flags & 2) == 0) {
        mode = 0x20;
        if ((flags & 1) == 0) {
            FUN_0891f064(record, 0x1f);
            return;
        }
    } else {
        mode = 0x22;
        if ((flags & 1) == 0)
            mode = 0x21;
    }
    FUN_0891f064(record, mode);
}
