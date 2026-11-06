/* Purpose: rebuild the four-slot lobby peer summary and status tables. */
extern unsigned char *D_08abce80;
extern unsigned char *D_08ab4650;
extern void *D_09bb7a80;
extern void *FUN_088b51b8(void *, unsigned char, int);
extern void *FUN_088b5120(void *, int, int, int);
extern void FUN_088ebb18(void *, const void *, unsigned int);

void FUN_0886c2e0(unsigned char *state)
{
    unsigned char *global = D_08abce80;
    unsigned char *local;
    int slot = 0;
    int index;

    if (*(unsigned int *)(global + 0x60474) & 4)
        return;

    local = FUN_088b51b8(D_09bb7a80, global[0x26], 1);
    if (local != 0) {
        global[0x7d1] = local[0x62];
        if (global[0x7d1] >= 6)
            global[0x7d1]--;
    }

    for (index = 0; index < 4 && slot < 4; index++) {
        unsigned char *peer = FUN_088b51b8(D_09bb7a80, index, 1);
        unsigned char *summary;
        unsigned int peer_number;

        if (peer == 0)
            continue;
        peer_number = *(unsigned short *)(peer + 0x60) & 0xff;
        if (*(unsigned short *)(peer + 0x60) == global[0x26])
            continue;
        summary = global + 0x750 + slot * 34;
        if (global[peer_number * 0xfc + 0x30] != 0)
            FUN_088ebb18(summary + 8,
                         D_08ab4650 + index * 0x14c + 0x1284, 26);
        else
            FUN_088ebb18(summary + 8, peer + 0x2faf4, 26);
        global[0x7e1 + slot] = peer_number;
        global[0x7d2 + slot] = peer[0x63] == global[0x26] ? 0x80 : 0x81;
        slot++;
    }
    state[0x7dc] = slot != 0;

    for (index = 0; index < 4 && slot < 4; index++) {
        unsigned char *peer = FUN_088b5120(D_09bb7a80, index, 1, 0);
        if (peer != 0) {
            FUN_088ebb18(global + 0x750 + slot * 34 + 8,
                         peer + 0x2faf4, 26);
            global[0x7e1 + slot] = *(unsigned short *)(peer + 0x60);
            global[0x7d2 + slot] = peer[0x2fdb6] ? 0x80 : 0xc0;
            slot++;
        }
    }

    for (index = 0; index < 4; index++) {
        unsigned char *peer = FUN_088b51b8(D_09bb7a80, index, 1);
        if (peer != 0)
            global[0x7d8 + *(unsigned short *)(peer + 0x60)] = peer[0x142d];
    }
}
