/* Purpose: restore a network configuration block and apply its selected fields. */
extern unsigned int DAT_089c76d8;
extern unsigned int DAT_089c76dc;
extern unsigned int DAT_089c76e0;
extern unsigned short DAT_089c76e4;
extern unsigned char DAT_089c76e6;
extern unsigned char *D_09bc1ed8;
extern void *D_09bb7e78;
extern void FUN_088e656c(void);
extern void FUN_088c8ed8(void *, int);
extern void FUN_088c49fc(void *, int);
extern void FUN_088c4a10(void *, int);

void FUN_0886a33c(unsigned char *object, signed char commit)
{
    unsigned char previous = object[0x5fbd4];
    *(unsigned int *)(object + 0x5fbd4) = DAT_089c76d8;
    *(unsigned int *)(object + 0x5fbd8) = DAT_089c76dc;
    *(unsigned int *)(object + 0x5fbdc) = DAT_089c76e0;
    *(unsigned short *)(object + 0x5fbe0) = DAT_089c76e4;
    object[0x5fbe2] = DAT_089c76e6;
    if (commit == 1) {
        *(int *)(D_09bc1ed8 + 0x10fa34c) = *(signed char *)(object + 0x5fbd4);
        FUN_088e656c();
    } else {
        object[0x5fbd4] = previous;
    }
    FUN_088c8ed8(D_09bb7e78, *(signed char *)(object + 0x5fbd5));
    FUN_088c49fc(D_09bb7e78, *(signed char *)(object + 0x5fbd7));
    FUN_088c4a10(D_09bb7e78, *(signed char *)(object + 0x5fbd6));
}
