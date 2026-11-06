/* FUN_08951b48: handle category selection and confirmation input.
 * Main EBOOT, attempt-high-01 241-512 byte batch 21. Input roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

extern u32 D_09bb7a70;
extern void *D_08a31df0;
extern void *D_09e5e1a8;
int FUN_0894bf5c(void);
void FUN_0894e5dc(void *, int);
void FUN_09c99d88(void *, int);
void FUN_09c9abb4(void *, int, int);
void FUN_0883bac8(void *, int);

int FUN_08951b48(u8 *state)
{
    u16 input = *(u16 *)(state + 0x4b18);
    u8 old;
    u8 next;

    if ((input & 0x2000) != 0) {
        if ((signed char)state[10] < 5) {
            if (FUN_0894bf5c() == 0) {
                FUN_0894e5dc(state, (signed char)state[10]);
                FUN_09c99d88(D_09e5e1a8, 0);
                return 0;
            }
            FUN_09c99d88(D_09e5e1a8, 7);
            return 1;
        }
        FUN_0894e5dc(state, -1);
        FUN_09c9abb4(D_09e5e1a8, 0x18, 0);
        FUN_09c99d88(D_09e5e1a8, 0);
        return 0;
    }
    if ((input & 0x4000) != 0) {
        return 3;
    }
    if (input != 0) {
        old = state[10];
        next = old;
        if ((D_09bb7a70 & 0x10) != 0) {
            next = old == 0 ? 5 : old - 1;
        } else if ((D_09bb7a70 & 0x40) != 0) {
            next = old < 5 ? old + 1 : 0;
        }
        if (next != old) {
            state[10] = next;
            FUN_0883bac8(D_08a31df0, 5);
        }
    }
    return 2;
}
