/* Purpose: advance the asynchronous network-utility connection state machine. */
extern unsigned char D_08aad2ec[];
extern unsigned char D_08aad2e4[];
extern int D_08aad2e0;
extern int FUN_0887b4bc(unsigned char *);
extern int FUN_089610b0(void *);
extern int FUN_08960fd0(void);
extern int FUN_089610c0(int, int, int, int, int);
extern int FUN_08961128(int, void *);
extern int FUN_089611a8(void *);
extern void FUN_088ebb10(void *, int, unsigned int);
extern void FUN_088ebb18(void *, const void *, unsigned int);

static void reset_connection_steps(unsigned char *state)
{
    state[1] = 10;
    state[2] = 0;
    state[3] = 0;
    state[5] = 0;
    *(int *)(state + 8) = 0;
    *(int *)(state + 16) = 0;
    *(int *)(state + 20) = 0;
}

int FUN_0887b830(void)
{
    unsigned char work[152];
    unsigned char *state = D_08aad2ec;
    int result;

    if (state[0] == 2)
        return FUN_0887b4bc(state);
    if (state[0] > 2)
        return 3;

    if (state[0] == 0) {
        if (state[1] >= 15)
            return 0;
        if (state[1] == 0) {
            reset_connection_steps(state);
            return 0;
        }
        if (state[1] == 10) {
            FUN_088ebb10(work, 0, 68);
            state[1]++;
            return 0;
        }
        if (state[1] == 12) {
            result = FUN_089610b0(work);
            if (result < 0)
                FUN_088ebb10(D_08aad2e4, 0, 6);
            else
                FUN_088ebb18(D_08aad2e4, work, 6);
            if (state[4] == 2 && FUN_08961128(8, work) >= 0)
                D_08aad2e0 = FUN_089611a8(work);
            return 2;
        }
        return 0;
    }

    if (state[1] == 90) {
        result = FUN_08960fd0();
        if (result == 0)
            state[1]++;
        else if (result == 2 || result == 3)
            state[1] = 91;
        return 0;
    }
    if (state[1] == 91) {
        state[0] = 2;
        state[1] = 0;
        return 3;
    }
    if (state[1] == 11) {
        result = FUN_089610c0(0x20000, 32, 0, 32, 0);
        if (result < 0)
            state[1] = 90;
        else
            state[1]++;
        return 0;
    }
    return 0;
}
