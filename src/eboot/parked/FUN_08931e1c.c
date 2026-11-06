/* FUN_08931e1c: advance one step of a six-state panel controller.
 * Main EBOOT, attempt-high-01 241-512 byte batch 15. State roles are hypotheses. */
typedef unsigned char u8;

extern u8 *D_08aace80;
extern void *D_09c49568;
extern void *D_09e6ff84;
extern int D_08a0b594;
extern int D_08a0b5b8;

void FUN_09c3bce4(void *, void *, int);
void *FUN_0886a004(void *);
void *FUN_08869f8c(void *);
void FUN_08906304(void *);
void FUN_0890641c(void *);
void FUN_08909f88(void *, void *, int, int, int);
void FUN_08931a10(void *);
void FUN_09c64518(void *, int);
void FUN_089317a4(void *);
void FUN_09d4da44(void *);

void FUN_08931e1c(u8 *state)
{
    u8 local[160];
    void *data;
    unsigned int step = state[0x1c0];

    switch (step) {
    case 1:
        FUN_09c3bce4(D_09c49568, &D_08a0b594, 1);
        if ((signed char)state[0xc45] == 0) {
            data = FUN_0886a004(D_08aace80);
        } else {
            data = FUN_08869f8c(D_08aace80);
        }
        if (data == 0) {
            FUN_0890641c(local);
            FUN_08906304(local);
            data = local;
        }
        FUN_08909f88(data, &D_08a0b5b8, 1, 0, 0);
        break;
    case 2:
        FUN_08931a10(state);
        break;
    case 3:
        FUN_09c64518(D_09c49568, 1);
        FUN_089317a4(state);
        break;
    case 4:
    case 5:
        FUN_09c64518(D_09c49568, 0);
        FUN_089317a4(state);
        break;
    case 6:
        FUN_09d4da44(D_09e6ff84);
        break;
    }
}
