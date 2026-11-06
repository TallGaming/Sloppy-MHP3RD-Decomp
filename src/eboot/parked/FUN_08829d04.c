typedef unsigned char u8;
typedef int s32;

extern u8 *D_08a20fec;
void FUN_08827824(void *state, void *part, void *arg);
void FUN_08826d60(void *state, s32 index, s32 value);

void FUN_08829d04(void)
{
    volatile u8 *arg = D_08a20fec + 0x1a5bc;
    u8 *state = D_08a20fec;

    if (state[state[0x23] + 0x68] != 3)
        return;

    arg[2] = 4;
    arg[0] = 4;
    arg[3] = -1;
    arg[1] = 0;
    FUN_08827824(state, D_08a20fec + 0x1b4, D_08a20fec + 0x1a5bc);
    state = D_08a20fec;
    FUN_08826d60(state, state[0x23], 5);
    D_08a20fec[0x21] = 6;
}
