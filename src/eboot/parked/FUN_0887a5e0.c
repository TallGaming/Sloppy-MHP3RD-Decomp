/* Purpose: accept a connection, return its address, and register the handle. */
extern int D_08aad03c;
extern unsigned char D_08aacebc[];
extern int FUN_08961070(void);
extern int FUN_089611c0(int, void *, int *);
extern int FUN_089611c8(int, void *, int *);
extern int FUN_08961188(void);
extern int FUN_08879f60(int);
extern void FUN_0880c088(void *, const void *, int);

int FUN_0887a5e0(int socket, void *address, unsigned short *port)
{
    unsigned char native[30];
    int length = 0x10;
    int accepted;
    int i;

    if (D_08aad03c == 1) {
        int error = FUN_08961070();
        return error == (int)0x80410709 ? -1 : FUN_08879f60(error);
    }
    accepted = FUN_089611c0(socket, native, &length);
    if (accepted < 0) {
        int error = FUN_08961188();
        return error == (int)0x8001000b ? -1 : FUN_08879f60(error);
    }
    length = 0x10;
    if (FUN_089611c8(accepted, native, &length) < 0)
        return FUN_08879f60(FUN_08961188());
    FUN_0880c088(address, native + 4, 4);
    *port = (unsigned short)((native[2] << 8) | native[3]);
    for (i = 0; i < 16; i++) {
        unsigned char *entry = D_08aacebc + i * 0x18;
        if (*(int *)entry < 0) {
            *(int *)entry = accepted;
            FUN_0880c088(entry + 4, native + 4, 4);
            *(unsigned short *)(entry + 0x14) = *(unsigned short *)(native + 2);
            break;
        }
    }
    return accepted;
}
