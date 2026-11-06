/* FUN_08928d5c: check whether the current context permits the requested action.
 * Main EBOOT, attempt-high-01 241-512 byte batch 13. Context roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned int u32;

extern u8 *D_08aace80;
extern void *D_09bb7a80;
extern void *D_09bb7e90;

int FUN_088b51b8(void *, u8, int);
int FUN_0892733c(void *);
int FUN_09ceaedc(int);
int FUN_09ce913c(int);
int FUN_09ce91b8(int);
int FUN_0889f790(int, int, int);
int FUN_088cca4c(void *);

int FUN_08928d5c(void *state)
{
    int context;
    int result = 1;

    if ((*(u32 *)(D_08aace80 + 0x60474) & 1) == 0) {
        context = FUN_088b51b8(D_09bb7a80, D_08aace80[0x26], 0);
        if (context == 0) {
            return 0;
        }
        if (FUN_0892733c(state) == 0 &&
            (signed char)*(u8 *)(context + 0x18c) != 11) {
            result = 0;
        }
        if ((*(u32 *)(context + 0xba0) & 8) != 0 ||
            FUN_09ceaedc(context) != 0 || FUN_09ce913c(context) != 0 ||
            FUN_09ce91b8(context) != 0 ||
            FUN_0889f790(context, 6, 0x1c) != 0) {
            return 0;
        }
        if (FUN_0889f790(context, 6, 0x1d) != 0) {
            return 0;
        }
    } else {
        context = FUN_088b51b8(D_09bb7a80, D_08aace80[0x26], 0);
        if (context == 0 || FUN_088cca4c(D_09bb7e90) != 1 ||
            (*(u32 *)(context + 0x1424) & 2) != 0 ||
            (*(u32 *)(context + 0xba0) & 8) != 0 ||
            FUN_0889f790(context, 0, 0xd) != 0) {
            return 0;
        }
    }
    return result;
}
