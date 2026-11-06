/*
 * Purpose: read a cumulative audio row offset for a valid channel.
 * Out-of-range indices optionally emit a diagnostic and return the slot error.
 */
extern unsigned D_08a31fc0[32];
extern signed char D_09bc1ed0;
extern const char D_08965b78[];
extern const char D_08965b80[];
extern const char D_08965bc4[];
extern int FUN_0880d4b4(const char *, ...);
extern int FUN_0880d590(const char *);

unsigned FUN_088584d8(unsigned channel)
{
    if (channel < 32)
        return D_08a31fc0[channel];

    if (D_09bc1ed0) {
        FUN_0880d4b4(D_08965b78);
        if (D_09bc1ed0) {
            FUN_0880d4b4(D_08965b80);
            if (D_09bc1ed0)
                FUN_0880d590(D_08965bc4);
        }
    }
    return 0x80000001u;
}
