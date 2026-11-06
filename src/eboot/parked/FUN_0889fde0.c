/*
 * FUN_0889fde0: service object callbacks and update two status flags.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: three callback/byte forms retain five branch and operand differences.
 */

typedef unsigned char u8;
typedef unsigned int u32;
typedef signed char s8;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

extern u8 *D_08aace80;
typedef void (*Callback)(void);
void FUN_0889fd70(void *, int);
int FUN_0889fc9c(void *, int);
void FUN_0889fdac(void *, int);

void FUN_0889fde0(u8 *object)
{
    if (FIELD(object, s8, 0x1a4) == 0) {
        if (object[0x115] != 0) {
            object[0x115]--;
        }
        ((Callback)(*(void ***)object)[0x1a])();
    }
    if ((FIELD(D_08aace80, u32, 0x60474) & 1) != 0) {
        return;
    }
    FUN_0889fd70(object, 0x800);
    if (FUN_0889fc9c(object, 1) == 0) {
        FUN_0889fd70(object, 0x2000);
    } else {
        FUN_0889fdac(object, 0x2000);
    }
}
