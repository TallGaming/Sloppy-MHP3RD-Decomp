/* Purpose: refresh, stamp, and register the primary checksum buffer. */
extern void thunk_FUN_0880c088(void *, const void *, unsigned int);
extern void FUN_0881a0d0(void *, int, void *);
extern void FUN_0886ccec(void *);
extern void FUN_0888df2c(void *, void *, int, void *, int);
extern const char s_VQ_DOdIO9_X3_2GmW_XF_08966eac[];
extern unsigned char *D_08aace80;
extern unsigned int D_09bc1edc;
extern unsigned char DAT_089cfe50;

void FUN_0888f640(unsigned char *object)
{
    unsigned char saved[36];
    unsigned char work[36];
    unsigned char *context = *(unsigned char **)(object + 0x94c);

    thunk_FUN_0880c088(saved, context + 0x120fdc, 0x24);
    thunk_FUN_0880c088(context + 0x120fdc, s_VQ_DOdIO9_X3_2GmW_XF_08966eac, 0x14);
    FUN_0881a0d0(context, 0x120ff0, work);
    thunk_FUN_0880c088(context + 0x120fdc, saved, 0x24);
    FUN_0886ccec(D_08aace80);
    *(int *)(context + 0x120ffc) = *(int *)(D_08aace80 + 0x50f4) + D_09bc1edc;
    FUN_0888df2c(object, context, 0x121000, &DAT_089cfe50, 0);
}
