/* FUN_089286fc: initialize a seven-mode menu around a selected context.
 * Main EBOOT, attempt-high-01 241-512 byte batch 13. Menu roles are hypotheses. */
typedef unsigned char u8;

extern u8 *D_08aace80;
extern u8 *D_08a31df0;
extern void *D_09bb7a80;

int FUN_088b51b8(void *, u8, int);
u8 FUN_0883c970(void *, int, int, int);
void FUN_089030a8(void *, int, int, int, int);
void FUN_0891f02c(void *, int, int, int, int, int);
void FUN_0891f064(void *, int);

int FUN_089286fc(u8 *state, int context)
{
    state[0x15] = 2;
    state[0x1c5] = 7;
    state[0x1c0] = 0;
    state[0x1c1] = 0;
    if (context == 0) {
        context = FUN_088b51b8(D_09bb7a80, D_08aace80[0x26], 0);
    }
    state[0xd] = 0;
    state[0x4ba] = 0;
    state[0x4bb] = FUN_0883c970(D_08a31df0, context + 0x478, 0x100, 0);
    FUN_089030a8(D_08a31df0 + 0x1180, 0, 0, 1, 1);
    FUN_0891f02c(state, 0, -1, 0, 0, 0);
    FUN_0891f064(state, -1);
    return 1;
}
