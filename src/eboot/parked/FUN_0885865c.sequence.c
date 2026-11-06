/* Purpose: atomically reserve and return the next shared event sequence value. */

extern unsigned int D_08a31df4;
extern unsigned int D_08a31df8;
extern unsigned int D_08a320c8;

extern unsigned int FUN_08960a50(void);
extern void FUN_08960a68(unsigned int flags);

unsigned int FUN_0885865c(void)
{
    unsigned int sequence;

    D_08a31df8++;
    if (D_08a31df8 == 1) {
        D_08a31df4 = FUN_08960a50();
    }
    if (D_08a320c8 == 0)
        D_08a320c8 = 1;
    sequence = D_08a320c8++;
    if (D_08a31df8 != 0) {
        D_08a31df8--;
        if (D_08a31df8 == 0) {
            FUN_08960a68(D_08a31df4);
        }
    }
    return sequence;
}

