/* Purpose: resolve a registered connection into type and offset metadata. */
extern int D_08aad03c;
extern unsigned char D_08aacebc[];
extern unsigned char D_08aad040[];
extern int FUN_089611a0(int *, void *);
extern int FUN_08961088(int *, void *);
extern int FUN_08879f60(int);
extern int FUN_0880bff4(const void *, const void *, int);

int FUN_0887a7e4(int handle, unsigned short *output)
{
    unsigned int *node;
    int size;
    int i;

    output[0] = 0;
    output[2] = 0;
    output[3] = 0;
    if (output[1] != 0) {
        size = 0x240;
        if (D_08aad03c == 1) {
            int result = FUN_08879f60(FUN_08961088(&size, D_08aad040));
            if (result < 0) return result;
        } else if (FUN_089611a0(&size, D_08aad040) < 0) {
            return -1;
        }
        if (size < 1) return -1;
    }
    if (handle < 0) return -1;

    if (D_08aad03c == 1) {
        node = (unsigned int *)D_08aad040;
        while (node != 0 && handle != (int)node[1])
            node = (unsigned int *)node[0];
        if (node == 0) return -1;
        output[0] = node[8] >= 1 && node[8] <= 4 ? node[8] : 0;
        output[2] = 0x2000 - (short)node[6];
        output[3] = node[7];
        return 0;
    }
    for (i = 0; i < 16; i++) {
        unsigned char *entry = D_08aacebc + i * 0x18;
        if (*(int *)entry == handle) {
            node = (unsigned int *)D_08aad040;
            while (node != 0 &&
                   (FUN_0880bff4(node + 4, entry + 4, 4) != 0 ||
                    *(short *)((unsigned char *)node + 0x16) != *(short *)(entry + 0x14)))
                node = (unsigned int *)node[0];
            if (node == 0) return -1;
            output[0] = *(unsigned short *)(node + 6) <= 10 ? *(unsigned short *)(node + 6) : 0;
            output[2] = 0x2000 - (short)node[1];
            output[3] = node[2];
            return 0;
        }
    }
    return -1;
}
