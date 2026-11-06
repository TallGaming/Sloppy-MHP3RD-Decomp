/* FUN_0894cb7c: populate a three-choice menu with availability state.
 * Main EBOOT, attempt-high-01 241-512 byte batch 19. Menu roles are hypotheses. */
typedef unsigned char u8;

extern void *D_09be9f18;
extern void *D_09beb0bc;
extern void *D_09c49568;
extern void *D_09e5e1a8;

void FUN_088e6ff0(void *, int, int);
void FUN_088e7048(void *, int);
void FUN_08905430(void *, int, int);
int FUN_09c39998(void *);
int FUN_09c9aba0(void *, int);
void FUN_089053a4(void *, int, int, int, int, int, int, int);

void FUN_0894cb7c(u8 *state)
{
    int active;
    int value;
    int item;

    FUN_088e6ff0(D_09be9f18, 0xe, 0xe);
    FUN_088e7048(D_09be9f18, 0);
    FUN_08905430(D_09beb0bc, 6, 10);
    active = FUN_09c39998(D_09c49568);
    value = FUN_09c9aba0(D_09e5e1a8, 200);
    FUN_089053a4(D_09beb0bc, 0, state[3] == 0, active != 0,
                 0, value, 0xff, 0xff);
    for (item = 1; item <= 3; item++) {
        value = FUN_09c9aba0(D_09e5e1a8, item + 200);
        FUN_089053a4(D_09beb0bc, 0, item == (signed char)state[3],
                     1, item, value, 0xff, 0xff);
    }
}
