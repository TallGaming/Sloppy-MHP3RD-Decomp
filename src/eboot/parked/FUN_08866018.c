/* Purpose: create and start the global virtual timer, reporting creation failures. */
extern int D_08a33e40;
extern int D_08a33e44;
extern int D_08a33e48;
extern unsigned char DAT_09bc1ed0;
extern const char s_CsePspVTimer_08966504[];
extern const char s__PSP__08966514[];
extern const char s__ERR__0896651c[];
extern const char s_sceKernelCreateVTimer__08X_08966524[];
extern int FUN_08960b70(const char *, void *);
extern void FUN_08960be0(int);
extern void FUN_0880d4b4(const char *, ...);

int FUN_08866018(void)
{
    int option[4];

    D_08a33e44 = 0;
    D_08a33e48 = 0;
    option[0] = 0;
    D_08a33e40 = 0;
    D_08a33e40 = FUN_08960b70(s_CsePspVTimer_08966504, option);
    if (D_08a33e40 < 0) {
        if (DAT_09bc1ed0 == 0 || (FUN_0880d4b4(s__PSP__08966514), DAT_09bc1ed0 == 0) ||
            (FUN_0880d4b4(s__ERR__0896651c), DAT_09bc1ed0 == 0))
            return -0x7fffffe7;
        FUN_0880d4b4(s_sceKernelCreateVTimer__08X_08966524, D_08a33e40);
        return -0x7fffffe7;
    }
    D_08a33e44 = 0x411a;
    D_08a33e48 = 0;
    FUN_08960be0(D_08a33e40);
    return D_08a33e40;
}
