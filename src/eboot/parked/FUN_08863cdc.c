/* Purpose: advance the UI message state machine for an asynchronous result. */
extern unsigned char *D_09bb7a7c;
extern unsigned char *D_09bb5c40;
extern unsigned char *D_08aace80;
extern void *FUN_0886821c(void *, unsigned int);
extern void FUN_0880e1d4(void *, void *, const void *);
extern void FUN_0888d444(void *, const void *);
extern void FUN_08865540(void *);
extern unsigned char D_08966374[];
extern unsigned char D_08a3347c[];

void FUN_08863cdc(unsigned char *state, int unused, unsigned int message)
{
    unsigned int detail = 0;
    int phase = *(int *)(state + 0x2f54c);
    int status = *(int *)(state + 0x2f548);

    (void)unused;
    if (phase == 0) {
        if (D_09bb5c40[0x1450] == 0 && D_09bb5c40[0x1451] == 0 &&
            status != 0 && state[0x2f544] != 0) {
            D_08aace80[0x5fbd9] = 0;
            switch (status) {
            case 1: detail = 0x20; message = 0x1f; break;
            case 2: detail = 0x21; message = 0x1f; break;
            case 3: detail = 0x22; message = 0x1f; break;
            case 4: detail = 0; message = 0x1f; break;
            case 5: detail = 0x24; message = 0x23; break;
            case 6: detail = 0x25; message = 0x23; break;
            case 7: detail = 0x26; message = 0x23; break;
            case 8: detail = 0; message = 0x23; break;
            case 9: detail = 0x24; message = 0x27; break;
            case 10: detail = 0x25; message = 0x27; break;
            case 11: detail = 0x26; message = 0x27; break;
            case 12: detail = 0; message = 0x27; break;
            }
            if (D_08aace80[0x718] != 0 && message == 0x23)
                message = 0x28;
            if (detail == 0)
                FUN_0880e1d4(D_08a3347c, FUN_0886821c(D_08aace80, message), D_08966374);
            else
                FUN_0880e1d4(D_08a3347c, FUN_0886821c(D_08aace80, message),
                             FUN_0886821c(D_08aace80, detail));
            FUN_0888d444(D_09bb5c40, D_08a3347c);
            *(int *)(state + 0x2f54c) = 1;
            D_09bb7a7c[0x1e] = 1;
            FUN_08865540(state);
            return;
        }
    } else if (phase == 1 && D_09bb5c40[0x1451] == 0) {
        *(int *)(state + 0x2f548) = 0;
        *(int *)(state + 0x2f54c) = 0;
        D_09bb7a7c[0x1e] = 0;
    }
    FUN_08865540(state);
}
