/* Purpose: select one of three active players and settle their view offsets. */
extern unsigned char *D_08aace80;
extern void *D_09bb7a80;
extern void *D_08a29198;
extern int *FUN_088b51b8(void *, int, int);
extern void FUN_088b5048(void *);
extern void FUN_088b5508(void *);
extern void FUN_088b5650(void *);
extern void FUN_088b79b8(void *, int);
extern void FUN_0882ccc4(void *);

void FUN_0888d7ec(unsigned char *state, short selected, char notify)
{
    int i;

    for (i = 0; i < 3; i++) {
        if (D_08aace80[0x30 + i * 0xfc] != 0) {
            int *player = FUN_088b51b8(D_09bb7a80, i, 1);
            int offset;
            if (selected == i) {
                player[1] &= ~4;
                if (notify != 0)
                    (*(void (**)(int *))(*(unsigned int *)player + 200))(player);
            } else {
                player[1] |= 4;
            }
            if (*(unsigned short *)(state + 0x1480) != 0) {
                player[0x1d] = *(unsigned short *)(state + 0x1480);
                continue;
            }
            offset = (short)player[0x1d];
            if ((offset < 0 ? -offset : offset) < 0x1001)
                player[0x1d] = 0;
            else if (offset < 0)
                player[0x1d] += 0x1000;
            else
                player[0x1d] -= 0x1000;
        }
    }
    FUN_088b5048(D_09bb7a80);
    FUN_088b5508(D_09bb7a80);
    FUN_088b5650(D_09bb7a80);
    FUN_088b79b8(D_09bb7a80, 0);
    FUN_0882ccc4(D_08a29198);
}
