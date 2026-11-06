/* FUN_0894e440: consume and reconcile three resource requirements.
 * Main EBOOT, attempt-high-01 241-512 byte batch 20. Resource roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned short u16;

extern u8 *D_08aace80;
extern void *D_08ab1568;
extern void *D_09befbd4;
extern void *D_09bb7a80;
extern u8 D_09c41270;

int FUN_0894ba9c(void *);
void FUN_088662cc(void *, int);
u8 *FUN_08943ddc(void *, int, int);
int FUN_0887d7d8(void *, int);
void FUN_0887d884(void *, int, int);
int FUN_088b51b8(void *, u8, int);
void FUN_088a6090(int);
void FUN_0887dfcc(void *, int, int, int);

void FUN_0894e440(u8 *state)
{
    u8 *requirement;
    int record = FUN_0894ba9c(state);
    int item;

    FUN_088662cc(D_08aace80, -*(int *)(state + 0x18 + record * 0x10));
    requirement = FUN_08943ddc(
        D_09befbd4, *(&D_09c41270 + (signed char)state[4]),
        *(u16 *)(state + 0x24 + FUN_0894ba9c(state) * 0x10));
    for (item = 0; item != 3; item++, requirement += 4) {
        short id = *(short *)(requirement + 10);
        short needed = *(short *)(requirement + 12);
        int remainder = needed;

        if (id != 0) {
            int held = FUN_0887d7d8(D_08ab1568, id);
            if (held > 0) {
                remainder = 0;
                if (held < needed) {
                    remainder = needed - held;
                    needed = held;
                }
                FUN_0887d884(D_08ab1568, id, -needed);
                FUN_088a6090(FUN_088b51b8(D_09bb7a80, D_08aace80[0x26], 1));
            }
            FUN_0887dfcc(D_08ab1568, id, remainder, 0xffff);
        }
    }
}
