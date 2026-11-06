/*
 * FUN_089010a8: submit the record at 0x20 through the counted or direct path.
 *
 * Main EBOOT, attempt-high-01 medium batch 1. Record and call signatures are hypotheses.
 */

typedef unsigned char u8;
extern void *D_09beb0bc;
void FUN_08901000();
void FUN_088ff8f0();

void FUN_089010a8(u8 *record)
{
    if (*(int *)(record + 0x54) == 0) {
        FUN_08901000(D_09beb0bc, record + 0x20, 0, 0, 0, 0,
                     record + 0x58, -1);
        return;
    }
    FUN_088ff8f0(D_09beb0bc, record + 0x20, 0, 0, 0, 0,
                 record + 0x58, -1, -1, 0);
}
