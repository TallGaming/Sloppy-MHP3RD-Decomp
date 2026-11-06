/* Purpose: determine whether all required active peers have acknowledged the current state. */
extern unsigned int D_08a29198;
extern unsigned char *D_09bc1ed8;
extern unsigned char *D_08aace80;
extern unsigned int D_09bb7a68;
extern void *D_09bb7bc0;
extern int FUN_0882a3ac(unsigned int);
extern void FUN_088c26bc(void *, int, int, int);

int FUN_088606cc(unsigned char *state)
{
    unsigned int index;
    int complete;

    if (FUN_0882a3ac(D_08a29198) < 1)
        return 1;
    if (state[0x72] == 0)
        return 0;
    if ((*(unsigned int *)(D_09bc1ed8 + 0x10fa354) & 1) == 0) {
        if ((D_09bb7a68 & 1) != 0 && D_08aace80[0x718] == 0) {
            state[0x71] = 1;
            return 1;
        }
        return 0;
    }
    index = D_08aace80[0x26] & 0x1f;
    if (((state[0x70] >> index) & 1) == 0 && (D_09bb7a68 & 1) != 0) {
        state[0x70] |= 1U << index;
        FUN_088c26bc(D_09bb7bc0, 0xd, 0, 0);
    }
    complete = 1;
    for (index = 0; index < 4; index++) {
        if (D_08aace80[0x30 + index * 0xfc] != 0 && ((state[0x70] >> index) & 1) == 0)
            complete = 0;
    }
    if (complete == 1) {
        state[0x71] = 1;
        return 1;
    }
    return complete;
}
