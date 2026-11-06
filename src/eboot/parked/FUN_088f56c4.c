/*
 * FUN_088f56c4: query the global manager and store its byte result at offset 0x24C.
 *
 * Main EBOOT, G2 high-address slice. The manager and record types are hypotheses.
 */

typedef unsigned char u8;

u8 FUN_088be2d4(void *manager);

void FUN_088f56c4(void *record)
{
    *(u8 *)((u8 *)record + 0x24c) = FUN_088be2d4(*(void **)0x09bb7b60);
}
