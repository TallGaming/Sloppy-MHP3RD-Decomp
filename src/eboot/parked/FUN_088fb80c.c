/*
 * FUN_088fb80c: read a little-endian local word or delegate an indexed lookup.
 *
 * Main EBOOT, G2 high-address branch slice. The record and manager roles are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned int u32;

u32 FUN_088fb754(void *manager, void *local, void *other);

u32 FUN_088fb80c(u8 *record, int offset)
{
    if (offset == 0) {
        return (u32)record[0x17] << 24 | (u32)record[0x16] << 16 |
               (u32)record[0x15] << 8 | record[0x14];
    }
    return FUN_088fb754(*(void **)0x09beb0bc, record + 0x14,
                        (void *)(offset + 0x14));
}
