/*
 * FUN_0891f1f8: clear a global-state byte when a readiness check succeeds.
 *
 * The global state layout and check meaning are hypotheses.
 */
typedef unsigned char u8;

extern u8 *D_08aace80;
extern int FUN_0891f1cc(void);

int FUN_0891f1f8(void)
{
    if (FUN_0891f1cc() != 0) {
        return 0;
    }
    D_08aace80[14] = 0;
    return 1;
}
