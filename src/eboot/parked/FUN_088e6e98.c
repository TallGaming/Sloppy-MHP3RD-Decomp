/*
 * FUN_088e6e98: age a byte table and initialize its per-frame control fields.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact instruction count retains loop register-allocation differences.
 */
typedef unsigned char u8;
typedef unsigned short u16;

void FUN_088e6e98(u8 *record)
{
    int i = 0;
    u8 *slot = record;
    u8 *age;

    do {
        i++;
        slot[0x134] = 0;
        slot[0x13b] = 0;
        slot++;
    } while (i != 7);
    *(u16 *)(record + 0x168) = 0;
    age = record + 0x25f78;
    i = 0;
    do {
        i++;
        if (*age != 0) {
            *age = (u8)(*age - 1);
        }
        age++;
    } while (i != 0x480);
    record[0x166]++;
    record[0x167] = 0x14;
    record[0x164] = 1;
    record[0x131] = 0x3b;
    *(u16 *)(record + 0x120) = 0;
    *(u16 *)(record + 0x122) = 0;
    *(u16 *)(record + 0x124) = 0;
    record[0x12c] = 0x14;
    record[0x12d] = 0x14;
    record[0x12e] = 0;
    record[0x12f] = 0;
}
