/* Purpose: draw a framed panel and its optional foreground elements. */
extern void *D_09beb0bc;
extern unsigned char D_089c8b18[];
extern unsigned char D_089c89d4[];
extern short D_089c8ac4;
extern short D_089c8ac6;
extern void FUN_088fa2b0(void *, int, int);
extern void FUN_088fcf58(void *, int, int, int, int, void *);
extern void FUN_08901000(void *, void *, int, int, int, int);
extern void FUN_088fa038(void *, int);
extern void FUN_088ff8f0(void *, int, void *, int, int, int, void *, int, int, int);

void FUN_0887273c(unsigned char *panel)
{
    short x = *(short *)(panel + 0x34);
    short y = *(short *)(panel + 0x38);

    FUN_088fa2b0(D_09beb0bc, 3, 1);
    FUN_088fcf58(D_09beb0bc, 0, 0, 0x1e0, 0x110, panel);
    FUN_08901000(D_09beb0bc, D_089c8b18, 0xd, 0, x, y);
    FUN_08901000(D_09beb0bc, D_089c8b18, 0xd, 1, (short)(0x1e0 - x), y);
    FUN_08901000(D_09beb0bc, D_089c8b18, 0xd, 2, x, (short)(0x110 - y));
    FUN_08901000(D_09beb0bc, D_089c8b18, 0xd, 3,
                 (short)(0x1e0 - x), (short)(0x110 - y));
    FUN_088fa038(D_09beb0bc, 5);
    if (*(int *)(panel + 0x10) > 0x3b) {
        if (*(int *)(panel + 0x18) == 0) {
            FUN_088ff8f0(D_09beb0bc, *(int *)(panel + 0x14), D_089c89d4,
                         0, 0, 0, panel + 0x1c, -1, -1, 0);
        } else {
            FUN_088ff8f0(D_09beb0bc, *(int *)(panel + 0x18), D_089c89d4,
                         0, D_089c8ac4, D_089c8ac6, panel + 0x24, -1, -1, 0);
            if (*(int *)(panel + 0x10) > 0x4d)
                FUN_088ff8f0(D_09beb0bc, *(int *)(panel + 0x14), D_089c89d4,
                             0, 0, 0, panel + 0x1c, -1, -1, 0);
        }
    }
    FUN_088fa038(D_09beb0bc, 2);
}
