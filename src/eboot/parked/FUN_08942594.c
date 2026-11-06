/* FUN_08942594: construct a five-element information panel.
 * Main EBOOT, attempt-high-01 241-512 byte batch 16. Panel roles are hypotheses. */
typedef unsigned char u8;

extern void *D_09beb0bc;
extern void *D_09e5e1a8;
extern u8 *D_08aace80;
extern void *PTR_LAB_0896b3f8;
extern void *D_08a10fb0;
extern void *D_08a10fd4;
extern int D_08a10f24;
extern int D_08a10f00;
extern int D_08a111ac;
extern int D_08a111d0;
extern int D_08a111f4;
extern int D_08a11218;
extern int D_08a1123c;
extern int D_08a11260;

void FUN_08900bf0(void *, void *, void *, int, int, int, int, int);
int FUN_09c9aba0(void *, int);
int FUN_08867d40(void *, int);
void FUN_08904570(void *, void *, int, int, void *, int, int, int, int);
void FUN_08901c48(void *, void *, void *, void *, int, void *, int, int, int);
void FUN_089048a8(void *, void *, int, int, int, void *, int, int, int);

void FUN_08942594(int unused, u8 *data)
{
    void *local[4];
    int value;

    D_08a10fb0 = local;
    local[0] = &PTR_LAB_0896b3f8;
    D_08a10fd4 = D_08a10fb0;
    FUN_08900bf0(D_09beb0bc, &D_08a10f24, &D_08a10f00, 10, 0, 0, 0, 0);
    value = FUN_09c9aba0(D_09e5e1a8, 0x17);
    FUN_08904570(D_09beb0bc, &D_08a111ac, value, 0xb,
                 &D_08a10f00, 0, 0, 0, 0);
    value = FUN_08867d40(D_08aace80, 0x227);
    FUN_08904570(D_09beb0bc, &D_08a111d0, value, 0x19,
                 &D_08a10f00, 0, 0, 0, 0);
    value = FUN_08867d40(D_08aace80, 0x22d);
    FUN_08904570(D_09beb0bc, &D_08a111f4, value, 0x19,
                 &D_08a10f00, 0, 0, 0, 0);
    FUN_08901c48(D_09beb0bc, &D_08a11218, &D_08a1123c, data + 8,
                 0, &D_08a10f00, 0, 0, 0);
    FUN_089048a8(D_09beb0bc, &D_08a11260, data[0x2b] + 1, 1,
                 0, &D_08a10f00, 0, 0, 0);
}
