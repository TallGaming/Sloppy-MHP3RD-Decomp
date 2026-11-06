/*
 * FUN_088fb4c8: select one of two subrecords, mark it active and initialize it.
 *
 * Main EBOOT, G2 high-address branch slice. The record and mode roles are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned int u32;

void FUN_088f9ce4(void *subrecord, ...);

void FUN_088fb4c8(u8 *record, int mode, char reset)
{
    if (reset == 1)
        *(u32 *)(record + 8) = 0;
    if (mode == 0) {
        record[0x0d] |= 1;
        FUN_088f9ce4(record + 0x10);
        return;
    }
    record[0x0d] |= 2;
    FUN_088f9ce4(record + 0x60, 0);
}
