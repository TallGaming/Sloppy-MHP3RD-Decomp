/*
 * FUN_088f37b0: latch flag 2 when flag 1 first appears and send event 0x1649.
 *
 * Main EBOOT, G2 high-address branch slice. The record and event roles are hypotheses.
 */

typedef unsigned char u8;

extern void *D_09bb7e78;
void FUN_088c7130(void *queue, int type, int event);

void FUN_088f37b0(u8 *record)
{
    u8 flags = record[0x27];

    if ((flags & 2) == 0 && (flags & 1) != 0) {
        record[0x27] = flags | 2;
        FUN_088c7130(D_09bb7e78, 1, 0x1649);
    }
}
