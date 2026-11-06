/* FUN_0892e0f8: configure a status panel and optional detail row.
 * Main EBOOT, attempt-high-01 241-512 byte batch 14. Panel roles are hypotheses. */
typedef unsigned char u8;

extern u8 *D_08aace80;
extern void *D_09beb0bc;
extern int D_08a0929c;
extern int D_08a093e0;
extern int D_08a09404;
extern void *D_08a092bc;
extern void *PTR_LAB_0896b3f8;

void FUN_08900bf0(void *, void *, int, int, int, int, int, int);
void FUN_08904570(void *, void *, int, int, int, int, int, int, int);
int FUN_08867d40(void *, int);

void FUN_0892e0f8(u8 *state, int panel, int resource)
{
    void *local[4];
    int value;

    D_08a092bc = local;
    local[0] = &PTR_LAB_0896b3f8;
    FUN_08900bf0(D_09beb0bc, &D_08a0929c, panel, 9, 0, 0, 0, 0);
    FUN_08904570(D_09beb0bc, &D_08a093e0, resource, 0, panel, 0, 0, 0, 0);
    if ((state[0x1ca] & 1) != 0) {
        value = FUN_08867d40(D_08aace80, (signed char)state[0x1c4] + 0x17);
        FUN_08904570(D_09beb0bc, &D_08a09404, value, 0, panel, 0, 0, 2, 0);
    }
}
