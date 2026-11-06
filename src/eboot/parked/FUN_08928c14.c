/* FUN_08928c14: refresh and render the selected context page.
 * Main EBOOT, attempt-high-01 241-512 byte batch 13. Page roles are hypotheses. */
typedef unsigned char u8;

extern u8 *D_08aace80;
extern u8 *D_08a31df0;
extern void *D_09bb7a80;
extern int D_08a0aae4;

int FUN_088b51b8(void *, u8, int);
void FUN_089029f4(void *);
int FUN_088a8c4c(int, int);
void FUN_0884e700(void *, int, int, int, int, void *, int, int);
void FUN_0884cb18(void *, int, int);

void FUN_08928c14(u8 *state, int context)
{
    int value;

    if (context == 0) {
        context = FUN_088b51b8(D_09bb7a80, D_08aace80[0x26], 0);
    }
    FUN_089029f4(D_08a31df0 + 0x1180);
    value = FUN_088a8c4c(context, (signed char)state[0xd]);
    FUN_0884e700(D_08a31df0, value, 0, context, 0, &D_08a0aae4,
                 (signed char)state[0x4ba], 0x100);
    FUN_0884cb18(D_08a31df0, (signed char)state[0xd], context);
}
