/* FUN_089302f0: build a two-row indexed panel and select its active row.
 * Main EBOOT, attempt-high-01 241-512 byte batch 14. Panel roles are hypotheses. */
typedef unsigned char u8;

extern u8 *D_08aace80;
extern void *D_09beb0bc;
extern int D_08a0dfc4;
extern int D_08a0df7c;
extern u8 D_08a0e12c;
extern u8 D_08a0e150;
extern void *D_08a0dfe4;
extern void *D_08a0e050;
extern void *D_08a0e074;
extern void *PTR_LAB_0896b3f8;
extern int D_09bee528;

void FUN_08900bf0(void *, void *, int, int, int, int, int, int);
int FUN_08867d40(void *, int);
void FUN_08904570(void *, void *, int, int, void *, int, int, int, int);
void FUN_08902688(void *, int);
void FUN_08900444(void *, void *, int, int);

void FUN_089302f0(char shifted, unsigned int selected, u8 *panel)
{
    void *local[4];
    int mode = shifted == 0 ? 0 : 10;
    int x = *(short *)(panel + 0x18);
    int y = *(short *)(panel + 0x1a);
    int value;

    D_08a0dfe4 = local;
    local[0] = &PTR_LAB_0896b3f8;
    D_08a0e050 = D_08a0dfe4;
    D_08a0e074 = D_08a0dfe4;
    FUN_08900bf0(D_09beb0bc, &D_08a0dfc4, (int)panel, 10, 0, 0, 0, 0);
    value = FUN_08867d40(D_08aace80, 0x1fa);
    FUN_08904570(D_09beb0bc, &D_08a0df7c, value, mode,
                 &D_08a0e12c, x, y, 0, 0);
    value = FUN_08867d40(D_08aace80, 0x1fb);
    FUN_08904570(D_09beb0bc, &D_08a0df7c, value, 0,
                 &D_08a0e150, x, y, 0, 0);
    FUN_08902688((void *)0x09bee52c, 1);
    FUN_08900444(&D_09bee528, &D_08a0e12c + (selected & 0xff) * 0x24, x, y);
}
