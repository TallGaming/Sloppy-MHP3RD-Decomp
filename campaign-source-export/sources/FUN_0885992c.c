/*
 * Purpose: detect the audio command queue at its 64-entry limit.
 * A full queue returns its error status and optionally emits a diagnostic.
 */
extern unsigned D_08a33388;
extern signed char D_09bc1ed0;
extern const char D_08965c98[];
extern const char D_08965ca0[];
extern const char D_08965ca8[];
extern int FUN_0880d4b4(const char *, ...);
extern int FUN_0880d590(const char *);

int FUN_0885992c(void)
{
    if (D_08a33388 != 64)
        return 0;

    if (D_09bc1ed0) {
        FUN_0880d4b4(D_08965c98);
        if (D_09bc1ed0) {
            FUN_0880d4b4(D_08965ca0);
            if (D_09bc1ed0)
                FUN_0880d590(D_08965ca8);
        }
    }
    return (int)0x80000010u;
}
