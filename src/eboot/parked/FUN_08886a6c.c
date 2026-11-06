/* Purpose: process a local identifier update and clear it after acknowledgement. */
extern unsigned char *D_08a3387c;
extern unsigned char *D_08aace80;
extern int D_09bb7e78;
extern void FUN_08834fcc(void *);
extern void FUN_08886958(void *, const void *);
extern int FUN_088c926c(int, int, int, int, int, int, int, int, int, int);
extern void FUN_0880c468(void *, int, int);

void FUN_08886a6c(unsigned int *request)
{
    unsigned int saved[5];
    unsigned char local_id[8];
    unsigned char *state = (unsigned char *)request[2];
    int byte;

    saved[0] = request[0];
    saved[1] = request[1];
    saved[2] = request[2];
    saved[3] = request[3];
    saved[4] = request[4];
    FUN_08834fcc(local_id);
    FUN_08886958(state, local_id);
    for (byte = 0; byte < 6; byte++) {
        if (state[0x1bc0 + byte] < local_id[byte])
            return;
        if (state[0x1bc0 + byte] > local_id[byte])
            break;
    }
    if (byte == 6) {
        *(unsigned int *)(state + 0x1bbc) |= 0x200;
        if (*(signed char *)(D_08a3387c + 0x2978c) == 0 &&
            (FUN_088c926c(D_09bb7e78, 0x16, 0xab, 0, 5, -1, -1, 0, 0, 0),
             (*(unsigned int *)(D_08aace80 + 0x60474) & 8) != 0))
            FUN_0880c468(state + 0x1bc0, 0, 8);
    }
}
