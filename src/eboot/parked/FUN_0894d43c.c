/* FUN_0894d43c: update a wrapped selection and refresh its panel.
 * Main EBOOT, attempt-high-01 241-512 byte batch 19. Selection roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned int u32;

extern u32 D_09bb7a70;
extern void *D_08a31df0;

u8 FUN_0894af68(void *, u8);
void FUN_0883bac8(void *, int);
void FUN_088fb378(void *, int, int);
void FUN_089029f4(void *);

void FUN_0894d43c(u8 *state, u32 input, u8 mode, char enabled)
{
    u32 count = FUN_0894af68(state, mode);
    u32 old;
    u32 next;

    if ((int)count <= (signed char)state[0x14]) {
        state[0x14] = count - 1;
    }
    if (enabled == 1 && count > 1) {
        old = state[0x14];
        next = old;
        if ((D_09bb7a70 & 0x80) != 0) {
            next = old == 0 ? (count - 1) & 0xff : (old - 1) & 0xff;
        } else if ((D_09bb7a70 & 0x20) != 0) {
            next = (int)old < (int)(count - 1) ? (old + 1) & 0xff : 0;
        }
        if (next != old) {
            state[0x14] = next;
            FUN_0883bac8(D_08a31df0, 4);
            if ((input & 0x80) != 0) {
                FUN_088fb378((void *)0x09bf027c, 0, 1);
            } else if ((input & 0x20) != 0) {
                FUN_088fb378((void *)0x09bf027c, 1, 1);
            }
        }
    }
    FUN_089029f4((void *)0x09bf027c);
}
