/* Purpose: advance the multiplayer session-start handshake state machine. */
extern unsigned char *D_08abce80;
extern void *D_08a29198;
extern void *D_08a33464;
extern void *D_09bb7e74;
extern void *D_09bb7e78;
extern int FUN_0886c70c(void *, int);
extern void FUN_0882a374(void *);
extern void FUN_08861ea0(void *, int, int);
extern void FUN_088605bc(void *, const void *);
extern int FUN_08860498(void *, void *);
extern int FUN_088606cc(void *);
extern unsigned int FUN_08860bcc(unsigned int, const void *);
extern void FUN_088c85f0(void *, int, int);
extern void FUN_088c6e3c(void *, int, int, int);
extern void FUN_088c7428(void *, int, int);
extern void FUN_088c82c0(void *, int);
extern void FUN_088c7320(void *, int, int);
extern void FUN_088c8850(void *, int, int);
extern void FUN_088c6dd0(void *, int, int);

int FUN_08860f8c(unsigned char *state, unsigned char *request)
{
    unsigned char *selection = *(unsigned char **)(request + 0x14);
    int phase = request[1];

    if (FUN_0886c70c(D_08abce80, 0) != 0 && phase != 4)
        return 0;

    switch (phase) {
    case 0:
        D_08abce80[0x6bc] = 1;
        state[0x78] = 1;
        *(int *)(state + 0x74) = 0;
        FUN_088605bc(state, request);
        request[1]++;
        return 0;

    case 1:
        D_08abce80[0x6047b] = 0;
        FUN_08861ea0(D_08a33464, 16, 0);
        FUN_088c85f0(D_09bb7e78, 16, 0);
        FUN_088c6e3c(D_09bb7e78, 0, 16, selection[10]);
        FUN_088c7428(D_09bb7e78, 0, selection[13]);
        FUN_0882a374(D_08a29198);
        *(int *)request = 0;
        return 1;

    case 2:
        if (--*(int *)(state + 0x74) < 0) {
            FUN_088c82c0(D_09bb7e78, 0);
            FUN_088c7320(D_09bb7e78, 0, 1);
            request[1]++;
        }
        return 0;

    case 3:
        *(int *)request = 0;
        return 1;

    case 4:
        FUN_0882a374(D_08a29198);
        FUN_08861ea0(D_08a33464, 1, 0);
        *(int *)request = 0;
        return 1;

    case 5:
        (*(int *)(state + 0x74))++;
        if (!FUN_088606cc(state))
            return 0;
        if (state[0x71] == 0 && FUN_08860498(state, request) == 0) {
            request[1]++;
            return 0;
        }
        D_08abce80[0x6047b] = 1;
        FUN_08861ea0(D_08a33464, 1, 1);
        FUN_088c8850(D_09bb7e78, 16, 0);
        FUN_088c6dd0(D_09bb7e78, 0, 16);
        *(int *)(state + 0x74) = 16;
        request[1] = 10;
        return 0;

    case 6:
        FUN_08860bcc((unsigned int)state, selection);
        if (*(int *)(selection + 0x10) == 0)
            request[1]++;
        return 0;

    case 7:
        request[1] = 2;
        return 0;

    default:
        return 0;
    }
}
