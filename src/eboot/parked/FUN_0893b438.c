/* FUN_0893b438: choose a weighted result from an entity-specific table.
 * Main EBOOT, attempt-high-01 241-512 byte batch 15. Table roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned short u16;

extern void *D_09bb7e90;
extern void *D_09bc1ed8;

void *FUN_088ccf08(void *);
unsigned int FUN_088e62f0(void *, int);

u16 FUN_0893b438(u8 *entity)
{
    void **owner;
    u8 *table;
    unsigned int random;
    unsigned int threshold;

    if (*(short *)(entity + 0xd4) == 0x8c) {
        owner = FUN_088ccf08(D_09bb7e90);
        table = ((u8 *(*)(void *))(*(void ***)(owner))[0x48 / 4])(owner);
    } else if (*(short *)(entity + 0xd4) == 0x8d) {
        owner = FUN_088ccf08(D_09bb7e90);
        table = ((u8 *(*)(void *))(*(void ***)(owner))[0x4c / 4])(owner);
    } else {
        table = *(u8 **)(entity + 0xc4);
    }
    if (table == 0) {
        table = *(u8 **)(entity + 0xc4);
    }

    random = FUN_088e62f0(D_09bc1ed8, 0);
    threshold = table[0];
    while (threshold != 0xff) {
        if (random % 100 < threshold) {
            return *(u16 *)(table + 2);
        }
        table += 4;
        threshold += table[0];
    }
    return 0;
}
