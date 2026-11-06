/* Purpose: create, configure, bind, and listen on a socket using the active backend. */
extern int D_08aad03c;
extern int FUN_089610b0(void *);
extern int FUN_08961098(void *, unsigned short, int, int, int, int, int);
extern int FUN_08961180(int, int, int);
extern int FUN_08961160(int, int, int, void *, int);
extern int FUN_08961158(int, void *, int);
extern int FUN_089611b8(int, int);
extern void FUN_08961190(int);
extern int FUN_08961188(void);
extern int FUN_08879f60(int);
extern void thunk_FUN_0880c468(void *, int, unsigned int);

int FUN_0887a3f8(unsigned char *settings)
{
    int socket;
    int result;
    int option;

    if (D_08aad03c == 1) {
        unsigned char address[6];
        socket = FUN_089610b0(address);
        result = FUN_08879f60(socket);
        if (result < 0)
            return result;
        return FUN_08879f60(FUN_08961098(address, *(unsigned short *)(settings + 0x12),
                                         0x2000, 250000, 100, 3, 0));
    }
    socket = FUN_08961180(2, 1, 0);
    if (socket >= 0) {
        unsigned char address[16];
        option = 1;
        result = FUN_08961160(socket, 0xffff, 1, &option, 4);
        if (result >= 0) {
            option = 1;
            result = FUN_08961160(socket, 0xffff, 0x1009, &option, 4);
            if (result >= 0) {
                thunk_FUN_0880c468(address, 0, sizeof(address));
                address[1] = 2;
                *(unsigned short *)(address + 2) = (*(unsigned short *)(settings + 0x12) << 8) |
                                                   (*(unsigned short *)(settings + 0x12) >> 8);
                if (FUN_08961158(socket, address, sizeof(address)) >= 0 &&
                    FUN_089611b8(socket, 3) >= 0)
                    return socket;
            }
        }
        FUN_08961190(socket);
    }
    return FUN_08879f60(FUN_08961188());
}
