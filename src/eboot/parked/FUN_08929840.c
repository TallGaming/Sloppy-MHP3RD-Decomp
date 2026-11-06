/* FUN_08929840: test whether one menu action is currently available.
 * Main EBOOT, attempt-high-01 241-512 byte batch 13. Action roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned int u32;

extern u8 *D_08aace80;
extern u8 *D_09bc1ed8;
extern void *D_09e5e1a8;
extern void *D_09bb7a80;

u32 FUN_09c9adf4(void *);
int FUN_089274f4(void);
int FUN_0892733c(void);
int FUN_088b51b8(void *, u8, int);
u32 FUN_08923398(void *);
u32 FUN_08928d5c(void);
int FUN_0886a58c(void *);

int FUN_08929840(u8 *state, int action)
{
    u32 result;

    if ((signed char)state[10] == 0) {
        if (action == 3) {
            result = FUN_09c9adf4(D_09e5e1a8);
        } else {
            int context;

            if (action > 3) {
                if (action == 5) {
                    return FUN_089274f4();
                }
                return 1;
            }
            if (action < 1) {
                return 1;
            }
            if (FUN_0892733c() == 0) {
                return 0;
            }
            context = FUN_088b51b8(D_09bb7a80, D_08aace80[0x26], 0);
            if ((*(u32 *)(context + 0xba0) & 8) != 0) {
                return 0;
            }
            result = FUN_08923398(state);
        }
    } else {
        if ((signed char)state[10] != 1) {
            return 1;
        }
        if (action == 4) {
            result = FUN_08928d5c();
        } else {
            if (action < 5) {
                if (action != 2) {
                    return 1;
                }
                return FUN_0886a58c(D_08aace80) != 0;
            }
            if (action != 5) {
                if (action == 6) {
                    return 0;
                }
                return 1;
            }
            result = *(u32 *)(D_09bc1ed8 + 0x10fa354) & 1;
        }
    }
    return result != 0;
}
