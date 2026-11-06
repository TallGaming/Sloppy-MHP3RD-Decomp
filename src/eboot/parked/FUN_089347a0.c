/* FUN_089347a0: handle directional page input and report the resulting action.
 * Main EBOOT, attempt-high-01 241-512 byte batch 15. Input roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned int u32;

extern u8 *D_08a31df0;
extern u8 *D_08aace80;
extern void *D_09bb7a80;

int FUN_08926a6c(void);
u32 FUN_0883bd58(void);
void FUN_0883bac8(void *, int);
int FUN_088b51b8(void *, u8, int);
void FUN_088acb84(int, int);

int FUN_089347a0(u8 *state)
{
    u32 input;
    int action = 0;
    int context;

    if (FUN_08926a6c() == 0) {
        return 3;
    }
    input = FUN_0883bd58();
    if ((input & 0x2000) != 0) {
        if ((signed char)state[0x1c4] != 0) {
            FUN_0883bac8(D_08a31df0, 3);
            action = 2;
        } else {
            FUN_0883bac8(D_08a31df0, 2);
            action = 1;
        }
    } else if ((input & 0x4000) != 0) {
        FUN_0883bac8(D_08a31df0, 3);
        action = 2;
    } else if ((input & 0x80) != 0) {
        if ((signed char)state[0x1c4] != 0) {
            state[0x1c4] = 0;
            FUN_0883bac8(D_08a31df0, 4);
        }
    } else if ((input & 0x20) != 0 && (signed char)state[0x1c4] != 1) {
        state[0x1c4] = 1;
        FUN_0883bac8(D_08a31df0, 4);
    }

    if (action == 1) {
        context = FUN_088b51b8(D_09bb7a80, D_08aace80[0x26], 1);
        FUN_088acb84(context, (signed char)state[0x4be]);
        return 1;
    }
    return action == 2 ? 2 : 0;
}
