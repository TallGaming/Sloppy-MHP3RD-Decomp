/* Purpose: temporarily rewrite a checksum region, compute its digest, then restore it. */
extern void FUN_0888df2c(int, void *, int, void *, int);
extern void thunk_FUN_0880c088(void *, const void *, unsigned int);
extern void FUN_0881a0d0(void *, int, void *);
extern int FUN_0880bff4(const void *, const void *, unsigned int);
extern const char s_VQ_DOdIO9_X3_2GmW_XF_08966eac[];
extern unsigned char DAT_089cff50;

int FUN_0888e4f4(int owner, unsigned char *context)
{
    unsigned char digest[20];
    unsigned char saved[36];
    unsigned char expected[32];
    unsigned char *region = context + 0x120fdc;

    FUN_0888df2c(owner, context, 0x121000, &DAT_089cff50, 1);
    thunk_FUN_0880c088(saved, region, 0x24);
    thunk_FUN_0880c088(region, s_VQ_DOdIO9_X3_2GmW_XF_08966eac, 0x14);
    FUN_0881a0d0(context, 0x120ff0, digest);
    thunk_FUN_0880c088(region, saved, 0x24);
    return FUN_0880bff4(digest, expected, 0x14) == 0;
}
