/* FUN_08903660: initialize all embedded UI records in the global panel manager.
 * Main EBOOT, attempt-high-01 513-1024 byte batch 1. Panel roles are hypotheses. */
typedef unsigned char u8;
extern void *D_09beb0bc;
extern u8 D_089fc904, D_089fc8e0, D_089fc79c, D_089fc7c0, D_089fc7e4;
extern u8 D_089f83d4, D_089f8224, D_089f7f30, D_089f7dc8, D_089f7780;
extern int PTR_DAT_089fca90, PTR_DAT_089fcaa8;
void FUN_088f9cd0(void *); void FUN_089033fc(void *, void *, int);
void FUN_08902e04(void *, void *, int); void FUN_088fa2b0(void *, int, int);

void FUN_08903660(u8 *manager)
{
    int i;
    u8 *record;
    u8 *group2 = manager + 400;
    u8 *group3 = manager + 0x4b0;
    u8 *group4 = manager + 0x6e0;
    u8 *group5 = manager + 0x960;
    u8 *descriptor;

    D_09beb0bc = manager;
    record = manager;
    for (i = 4; i != -1; i--) {
        FUN_088f9cd0(record);
        record += 0x50;
    }
    record = group2;
    for (i = 10; i != 0; i--) {
        FUN_088f9cd0(record);
        record += 0x50;
    }
    record = group3;
    for (i = 7; i != 0; i--) {
        FUN_088f9cd0(record);
        record += 0x50;
    }
    record = group4;
    for (i = 8; i != 0; i--) {
        FUN_088f9cd0(record);
        record += 0x50;
    }
    record = group5;
    for (i = 7; i != 0; i--) {
        FUN_088f9cd0(record);
        record += 0x50;
    }
    FUN_088f9cd0(manager + 0xb90);
    record = manager + 0xbe0;
    for (i = 2; i != 0; i--) {
        FUN_088f9cd0(record);
        record += 0x50;
    }
    for (i = 0; i < 10; i++) ((int *)(manager + 0xc80))[i] = 0;
    *(int *)(manager + 0xcac) = 0;
    FUN_089033fc(manager, &D_089fc904, 0);
    FUN_089033fc(manager + 0x50, &D_089fc8e0, 0);
    FUN_089033fc(manager + 0xa0, &D_089fc79c, 0);
    FUN_089033fc(manager + 0xf0, &D_089fc7c0, 0);
    FUN_089033fc(manager + 0x140, &D_089fc7e4, 0);
    descriptor = &D_089f83d4;
    for (i = 0; i < 10; i++) {
        FUN_089033fc(group2, descriptor, 0);
        group2 += 0x50;
        descriptor += 0x24;
    }
    descriptor = &D_089f8224;
    for (i = 0; i < 7; i++) {
        FUN_089033fc(group3, descriptor, 0);
        group3 += 0x50;
        descriptor += 0x24;
    }
    descriptor = &D_089f7f30;
    for (i = 0; i < 8; i++) {
        FUN_089033fc(group4, descriptor, 0);
        group4 += 0x50;
        descriptor += 0x24;
    }
    descriptor = &D_089f7dc8;
    for (i = 0; i < 7; i++) {
        FUN_089033fc(group5, descriptor, 0);
        group5 += 0x50;
        descriptor += 0x24;
    }
    FUN_08902e04(manager + 0xbe0, &PTR_DAT_089fca90, 1);
    *(short *)(manager + 0xc1a) = 0;
    *(short *)(manager + 0xc18) = 0;
    FUN_08902e04(manager + 0xc30, &PTR_DAT_089fcaa8, 1);
    FUN_089033fc(manager + 0xb90, &D_089f7780, 0);
    FUN_088fa2b0(manager, 5, 1);
}
