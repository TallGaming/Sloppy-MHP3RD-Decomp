/* Purpose: create/configure a socket and register its address metadata. */
extern int D_08aad03c;
extern unsigned char D_08aacebc[];
extern int FUN_089610b0(void *);
extern int FUN_08961058(void *, unsigned short, void *, unsigned short, int, int, int, int);
extern int FUN_08961180(int, int, int);
extern int FUN_08961160(int, int, int, const void *, int);
extern void FUN_08961190(int);
extern int FUN_08961188(void);
extern int FUN_08879f60(int);
extern void FUN_0880c088(void *, const void *, int);

int FUN_0887afd8(unsigned char *address)
{
    int socket;
    int one = 1;
    int i;

    if (D_08aad03c == 1) {
        unsigned char native[12];
        int result = FUN_08879f60(FUN_089610b0(native));
        if (result < 0) return result;
        return FUN_08879f60(FUN_08961058(native, *(unsigned short *)(address + 0x12),
                                          address, *(unsigned short *)(address + 0x10),
                                          0x2000, 250000, 100, 0));
    }
    socket = FUN_08961180(2, 1, 0);
    if (socket >= 0 && FUN_08961160(socket, 0xffff, 1, &one, 4) >= 0 &&
        FUN_08961160(socket, 0xffff, 0x1009, &one, 4) >= 0) {
        for (i = 0; i < 16; i++) {
            unsigned char *entry = D_08aacebc + i * 0x18;
            if (*(int *)entry < 0) {
                *(int *)entry = socket;
                FUN_0880c088(entry + 4, address, 4);
                *(unsigned short *)(entry + 0x14) =
                    (*(unsigned short *)(address + 0x10) << 8) |
                    (*(unsigned short *)(address + 0x10) >> 8);
                return socket;
            }
        }
        return socket;
    }
    if (socket >= 0) FUN_08961190(socket);
    return FUN_08879f60(FUN_08961188());
}
