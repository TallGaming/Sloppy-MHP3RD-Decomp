/*
 * Purpose: publish an audio record pointer in the shared 32-slot table.
 * Out-of-range indices leave the table unchanged and return the slot error.
 */
extern void *D_08a320d0[32];
extern signed char D_09bc1ed0;
extern const char D_08965bdc[];
extern const char D_08965be4[];
extern const char D_08965bec[];
extern int FUN_0880d4b4(const char *, ...);
extern int FUN_0880d590(const char *);

int FUN_088587a4(unsigned slot, void *record)
{
    if (slot < 32) {
        D_08a320d0[slot] = record;
        return 0;
    }

    if (D_09bc1ed0) {
        FUN_0880d4b4(D_08965bdc);
        if (D_09bc1ed0) {
            FUN_0880d4b4(D_08965be4);
            if (D_09bc1ed0)
                FUN_0880d590(D_08965bec);
        }
    }
    return (int)0x80000001u;
}
