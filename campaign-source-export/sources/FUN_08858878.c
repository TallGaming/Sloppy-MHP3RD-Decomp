/*
 * Purpose: retrieve a published audio slot by its zero-based index.
 * The diagnostic path accepts no format arguments and returns a null slot.
 */
extern void *D_08a320d0[32];
extern signed char D_09bc1ed0;
extern const char D_08965bdc[];
extern const char D_08965be4[];
extern const char D_08965bec[];
extern int FUN_0880d4b4(const char *, ...);
extern int FUN_0880d590(const char *);

void *FUN_08858878(unsigned slot)
{
    if (slot < 32)
        return D_08a320d0[slot];

    if (D_09bc1ed0) {
        FUN_0880d4b4(D_08965bdc);
        if (D_09bc1ed0) {
            FUN_0880d4b4(D_08965be4);
            if (D_09bc1ed0)
                FUN_0880d590(D_08965bec);
        }
    }
    return 0;
}
