/* FUN_0894ac68: handle left/right selection and confirm/cancel input.
 * Main EBOOT, attempt-high-01 241-512 byte batch 19. Input roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned short u16;

extern void *D_09e5e1a8;
void FUN_09c99d88(void *, int);

int FUN_0894ac68(signed char *state)
{
    u16 input = *(u16 *)(state + 0x4b18);

    if ((input & 0x2000) != 0) {
        if (state[0x15] == 0) {
            return 0;
        }
        FUN_09c99d88(D_09e5e1a8, 3);
        return 3;
    }
    if ((input & 0x4000) != 0) {
        if (state[0x15] != 1) {
            FUN_09c99d88(D_09e5e1a8, 3);
            state[0x15] = 1;
            return 2;
        }
        FUN_09c99d88(D_09e5e1a8, 3);
        return 3;
    }
    if ((input & 0x80) != 0) {
        if (state[0x15] != 0) {
            FUN_09c99d88(D_09e5e1a8, 0x15);
            state[0x15] = 0;
        }
    } else if ((input & 0x20) != 0 && state[0x15] != 1) {
        FUN_09c99d88(D_09e5e1a8, 0x15);
        state[0x15] = 1;
    }
    return 2;
}
