/* FUN_0893dc14: draw one of two labels beside a prepared panel.
 * Main EBOOT, attempt-high-01 241-512 byte batch 16. Label roles are hypotheses. */
typedef unsigned int u32;

extern void *D_09beb0bc;
extern void *D_09e5e1a8;
extern short D_08a11d38;
extern short D_08a11d34;
extern short D_08a11d14;
extern void *PTR_DAT_0896a294;
extern void *PTR_DAT_0896a298;
extern void *PTR_DAT_0896a29c;
extern int D_0896a2a0;

void FUN_088fa2b0(void *, int, int);
int FUN_09c9aba0(void *, int);
void FUN_089049f4(void *, int, void *, int, int, int, int, int);

void FUN_0893dc14(u32 *state, int panel)
{
    void *local[4];
    int offset;
    int value;

    FUN_088fa2b0(D_09beb0bc, panel, 1);
    offset = (int)(short)((D_08a11d38 - D_08a11d34) * -8);
    D_08a11d14 = (D_08a11d38 - D_08a11d34) * 8 + 0x14;
    local[0] = PTR_DAT_0896a294;
    local[1] = PTR_DAT_0896a298;
    local[2] = PTR_DAT_0896a29c;
    local[3] = (void *)D_0896a2a0;
    value = FUN_09c9aba0(D_09e5e1a8, (state[1] & 1) == 0 ? 0x6a4 : 0x6a3);
    FUN_089049f4(D_09beb0bc, value, local, 0, 0, 0, offset, 0);
}
