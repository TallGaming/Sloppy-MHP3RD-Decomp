/* FUN_0892ce54: configure a panel from either a fixed or indexed resource.
 * Main EBOOT, attempt-high-01 241-512 byte batch 14. Panel roles are hypotheses. */
typedef unsigned char u8;

extern u8 *D_08aace80;
extern void *D_09beb0bc;
extern int D_08a0db20;
extern int D_08a0db44;
extern short D_08a0db48;
extern void *D_08a0db64;

int FUN_08867d40(void *, int);
int FUN_08867d54(void *, int);
void FUN_08904570(void *, void *, int, int, int, int, int, int, int);
int FUN_088fb80c(void *, int);
void FUN_089019f4(void *, int, int, int, int, int);
void FUN_0890112c(void *, void *, int, int, int, int, int);

void FUN_0892ce54(int unused, int panel, short resource, char fixed)
{
    int value;
    u8 local[16];

    if (fixed == 0) {
        value = FUN_08867d40(D_08aace80, 0x201);
        FUN_08904570(D_09beb0bc, &D_08a0db20, value, 3, panel, 0, 0, 0, 0);
        return;
    }
    if (resource != -1) {
        value = FUN_08867d54(D_08aace80, resource);
        FUN_08904570(D_09beb0bc, &D_08a0db20, value, 0, panel, 0, 0, 0, 0);
        value = FUN_088fb80c(&D_08a0db44, 0);
        FUN_089019f4(local, resource, value,
                     (int)(short)(D_08a0db48 - (short)D_08a0db44), 1, 1);
        D_08a0db64 = local;
        FUN_0890112c(D_09beb0bc, &D_08a0db44, panel, 0, 0, 0, 0);
    }
}
