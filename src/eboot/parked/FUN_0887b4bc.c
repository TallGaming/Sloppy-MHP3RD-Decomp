/* Purpose: advance the network backend shutdown state machine. */
extern void FUN_089610f0(void);
extern void FUN_08961120(void);
extern void FUN_089610f8(int);
extern void FUN_08961130(int);
extern void FUN_08961108(void);
extern void FUN_08961140(void);
extern void FUN_08961078(void);
extern void FUN_08961198(void);
extern void FUN_0887a268(void);
extern void FUN_089610b8(void);

int FUN_0887b4bc(unsigned char *state)
{
    unsigned char phase = state[2];
    switch (phase) {
    case 0: state[2] = 10; return 0;
    case 10:
        if ((*(unsigned int *)(state + 0x10) & 2) == 0 ||
            (*(unsigned int *)(state + 0x10) & 4) != 0) {
            state[2] = 12;
            return 0;
        }
        if (state[4] == 1) FUN_089610f0();
        else if (state[4] == 2) FUN_08961120();
        state[2]++;
        return 0;
    case 11:
        if ((*(unsigned int *)(state + 0x10) & 4) != 0)
            state[2] = 12;
        return 0;
    case 12: state[2] = 20; return 4;
    case 20:
        if (state[5] < 4) { state[2] = 21; return 0; }
        if (state[4] == 1) FUN_089610f8(*(int *)(state + 0xc));
        else if (state[4] == 2) FUN_08961130(*(int *)(state + 0xc));
        *(int *)(state + 0xc) = -1;
        state[5] = 3;
        state[2]++;
        return 0;
    case 21:
        if (state[5] < 2) { state[2] = 22; return 0; }
        if (state[4] == 1) FUN_08961108();
        else if (state[4] == 2) FUN_08961140();
        state[5] = 2;
        state[2]++;
        return 0;
    case 22:
        if (state[5] == 0) { state[2] = 23; return 0; }
        if (state[4] == 1) FUN_08961078();
        else if (state[4] == 2) FUN_08961198();
        state[5] = 1;
        state[2]++;
        return 0;
    case 23:
        if (state[5] == 0) { state[2] = 24; return 0; }
        FUN_0887a268();
        FUN_089610b8();
        state[5] = 0;
        state[2]++;
        return 0;
    case 24: return 5;
    default: return 0;
    }
}
