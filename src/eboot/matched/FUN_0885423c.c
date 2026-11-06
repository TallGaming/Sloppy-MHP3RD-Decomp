/* Emit enabled audio diagnostics, then run the two dispatch stages. */
extern signed char D_09bc1ed0;
extern const char D_089659d4[], D_089659dc[], D_089659e4[];

/* FUN_0880d4b4 is the verified Newlib printf interval. */
extern int FUN_0880d4b4(const char *format, ...);
extern int FUN_08854550(unsigned int mode);
extern void FUN_088549e0(int mode);

void FUN_0885423c(void)
{
    if (D_09bc1ed0 != 0) {
        FUN_0880d4b4(D_089659d4);
        if (D_09bc1ed0 != 0) {
            FUN_0880d4b4(D_089659dc);
            if (D_09bc1ed0 != 0)
                FUN_0880d4b4(D_089659e4, 2, 0);
        }
    }

    FUN_08854550(0u);
    FUN_088549e0(0);
}

