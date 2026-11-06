/* Purpose: refresh a checksum buffer, stamp it, and register its descriptor. */
extern void thunk_FUN_0880c088(void *, const void *, unsigned int);
extern void FUN_0881a0d0(void *, int, void *);
extern void FUN_0888df2c(void *, void *, int, void *, int);
extern const char s_VQ_DOdIO9_X3_2GmW_XF_08966eac[];
extern unsigned int D_09bc1edc;
extern unsigned char DAT_089cfe50;

void FUN_0888e1dc(unsigned char *object)
{
    unsigned char saved[36];
    unsigned char work[36];
    unsigned char *context = *(unsigned char **)(object + 0x950);

    thunk_FUN_0880c088(saved, context + 0x258fdc, 0x24);
    thunk_FUN_0880c088(context + 0x258fdc, s_VQ_DOdIO9_X3_2GmW_XF_08966eac, 0x14);
    FUN_0881a0d0(context, 0x258ff0, work);
    thunk_FUN_0880c088(context + 0x258fdc, saved, 0x24);
    *(unsigned int *)(context + 0x258ffc) = D_09bc1edc;
    FUN_0888df2c(object, context, 0x259000, &DAT_089cfe50, 0);
}
