/* Purpose: temporarily rewrite a second checksum region, compute its digest, then restore it. */
extern void FUN_0888df2c(int, void *, int, void *, int);
extern void thunk_FUN_0880c088(void *, const void *, unsigned int);
extern void FUN_0881a0d0(void *, int, void *);
extern int FUN_0880bff4(const void *, const void *, unsigned int);
extern const char s_S_R_Bf8xW3_5h9lGU8wR_08966f04[];
extern unsigned char DAT_089cfd50;

int FUN_0888e9d0(int owner, unsigned char *context)
{
    unsigned char digest[20];
    unsigned char saved[36];
    unsigned char expected[32];
    unsigned char *region = context + 0x16a0dc;

    FUN_0888df2c(owner, context, 0x16a100, &DAT_089cfd50, 1);
    thunk_FUN_0880c088(saved, region, 0x24);
    thunk_FUN_0880c088(region, s_S_R_Bf8xW3_5h9lGU8wR_08966f04, 0x14);
    FUN_0881a0d0(context, 0x16a0f0, digest);
    thunk_FUN_0880c088(region, saved, 0x24);
    return FUN_0880bff4(digest, expected, 0x14) == 0;
}
