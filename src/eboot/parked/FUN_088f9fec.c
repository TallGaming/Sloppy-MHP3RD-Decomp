/*
 * FUN_088f9fec: look up the selected global entry and pass it to the object.
 *
 * Main EBOOT, G2 high-address slice. The global records and result type are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned int u32;

extern u8 *D_08aace80;
u32 FUN_088b51b8(void *manager, u8 index, int mode);
void FUN_088f9fe0(void *object, u32 value);

void FUN_088f9fec(void *object)
{
    u32 value = FUN_088b51b8(*(void **)0x09bb7a80, D_08aace80[0x26], 0);

    FUN_088f9fe0(object, value);
}
