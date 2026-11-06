/* FUN_08944094: draw a four-layer panel with a selected palette color.
 * Main EBOOT, attempt-high-01 241-512 byte batch 16. Color roles are hypotheses. */
typedef unsigned int u32;

extern void *D_09beb0bc;
extern u32 D_0896a3a8[];
extern short D_08a1670c;
extern short D_08a1670e;
extern short D_08a16710;
extern short D_08a16712;
extern int D_08a16730;
extern int D_08a16754;
extern int D_08a16778;

u32 FUN_088fabf4(void *, void *, int, int);
void FUN_088fc270(void *, int, int, int, int, int, int, int, int);
void FUN_08900bf0(void *, void *, void *, int, int, int, int, int);

void FUN_08944094(int unused, u32 palette, void *panel,
                  short x, short y, char neutral)
{
    u32 color = 0xff7f7f7f;
    u32 position;
    int px = x;
    int py = y;

    if (neutral != 1) {
        color = D_0896a3a8[palette & 0xff];
    }
    position = FUN_088fabf4(&D_08a1670c, panel, px, py);
    FUN_088fc270(D_09beb0bc, (short)position, (short)(position >> 16),
                 (short)(D_08a16710 - D_08a1670c),
                 (short)(D_08a16712 - D_08a1670e),
                 color & 0xff, (color >> 8) & 0xff,
                 (color >> 16) & 0xff, color >> 24);
    FUN_08900bf0(D_09beb0bc, &D_08a16730, panel, 1, 0, px, py, 0);
    FUN_08900bf0(D_09beb0bc, &D_08a16754, panel, 1, 0, px, py, 0);
    FUN_08900bf0(D_09beb0bc, &D_08a16778, panel, 1, 0, px, py, 0);
}
