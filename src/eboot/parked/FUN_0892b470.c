/* FUN_0892b470: initialize a selectable seven- or six-entry menu.
 * Main EBOOT, attempt-high-01 241-512 byte batch 14. Menu roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned int u32;

extern u8 *D_08aace80;

void FUN_0891f238(void *, int);
void FUN_08929b48(void *, int, int);
void FUN_0891f02c(void *, int, int, int, int, int);
void FUN_088f9ce4(void *, int);
void FUN_08902688(void *, int);
void FUN_089227b4(void *);

void FUN_0892b470(u8 *state)
{
    int index;

    state[4] = 1;
    state[5] = 0;
    state[6] = 0;
    state[7] = 0;
    state[8] = 0;
    FUN_0891f238(state, 10);
    state[0x13] = 2;
    if ((*(u32 *)(D_08aace80 + 0x60474) & 0x200) == 0) {
        state[0x14] = 7;
        FUN_08929b48(state, 0, 1);
        index = (short)((short)(signed char)state[0xb] +
                        (short)(signed char)state[10] *
                            (short)(signed char)state[0x14]);
        FUN_0891f02c(state, 1, 0, index, 0, 0);
        FUN_088f9ce4(state + 0x28, 0);
        FUN_08902688(state + 0x28, 1);
        *(int *)(state + 0x24) = 0;
        FUN_089227b4(state);
        state[0x577] = 0;
        return;
    }
    state[0x14] = 6;
    FUN_08929b48(state, 0, 1);
    index = (short)((short)(signed char)state[0xb] +
                    (short)(signed char)state[10] *
                        (short)(signed char)state[0x14]);
    FUN_0891f02c(state, 1, 0, index, 0, 0);
    FUN_088f9ce4(state + 0x28, 0);
    FUN_08902688(state + 0x28, 1);
    *(int *)(state + 0x24) = 0;
    FUN_089227b4(state);
    state[0x577] = 0;
}
