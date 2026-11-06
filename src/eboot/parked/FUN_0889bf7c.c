/*
 * FUN_0889bf7c: count matches while holding a nested global critical section.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: critical-section globals lack symbols and cleanup scheduling differs.
 */

typedef unsigned char u8;

extern int D_08a31df4;
extern int D_08a31df8;
int FUN_08960a50(void);
void FUN_08960a68(int state);
int FUN_0889a6e0(void *key, int mode);

int FUN_0889bf7c(u8 *result, void *key)
{
    int depth = ++D_08a31df8;

    if (depth == 1) {
        D_08a31df4 = FUN_08960a50();
    }
    result[0x12] = FUN_0889a6e0(key, 0);
    *(int *)result = 0;
    depth = D_08a31df8;
    if (depth != 0) {
        depth--;
        D_08a31df8 = depth;
        if (depth == 0) {
            FUN_08960a68(D_08a31df4);
        }
    }
    return *(int *)result;
}
