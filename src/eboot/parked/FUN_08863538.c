/* Purpose: classify an asynchronous result into one of twelve UI states. */
extern unsigned char *D_08aace80;
extern unsigned char *D_09bc1ed8;
extern unsigned char *D_09bb7a58;

void FUN_08863538(unsigned char *state, int result)
{
    int local = state[0x2f544] != 0;
    int online = (*(unsigned int *)(D_09bc1ed8 + 0x10fa354) & 1) != 0;
    int status;

    if (result == (int)0x80020321) {
        status = local ? 1 : (online ? 9 : 5);
    } else if (result == (int)0x80010002) {
        status = local ? 2 : (online ? 10 : 6);
    } else if (result < 0 || D_09bb7a58[0xd] != 0) {
        status = local ? 4 : (online ? 12 : 8);
    } else {
        status = local ? 3 : (online ? 11 : 7);
    }
    *(int *)(state + 0x2f548) = status;
    D_08aace80[0x5fbd9] = 0;
}
