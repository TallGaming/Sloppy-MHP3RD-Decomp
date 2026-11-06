/* FUN_08951fb0: handle wrapped input and guarded confirmation.
 * Main EBOOT, attempt-high-01 241-512 byte batch 21. Input roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 D_09bb7a70;
extern void *D_08a31df0;
extern void *D_09c49568;
extern void *D_09e5e1a8;
int FUN_09c39998(void *);
void FUN_09c99d88(void *, int);
void FUN_09c9abb4(void *, int, int);
void FUN_0883bac8(void *, int);

int FUN_08951fb0(u8 *state)
{
    u16 input = *(u16 *)(state + 0x4b18);
    u8 old;
    u8 next;
    if ((input & 0x2000) != 0) {
        if (state[3] != 0 || FUN_09c39998(D_09c49568) != 0) {
            return 0;
        }
        FUN_09c99d88(D_09e5e1a8, 7);
        if ((*(u32 *)(state + 0x4b14) & 2) == 0) {
            FUN_09c9abb4(D_09e5e1a8, 0x1a, 0);
            *(u32 *)(state + 0x4b14) |= 2;
        }
        return 2;
    }
    if ((input & 0x4000) != 0) {
        return 3;
    }
    if (input != 0) {
        old = state[3];
        next = old;
        if ((D_09bb7a70 & 0x10) != 0) {
            next = old == 0 ? 2 : old - 1;
        } else if ((D_09bb7a70 & 0x40) != 0) {
            next = old < 2 ? old + 1 : 0;
        }
        if (next != old) {
            state[3] = next;
            FUN_0883bac8(D_08a31df0, 5);
        }
    }
    return 2;
}
