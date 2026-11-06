/* Purpose: connect or accept a socket using the active backend and translate its result. */
extern int D_08aad03c;
extern unsigned char DAT_08aacebc[];
extern int FUN_089610a8(int, int, int);
extern int FUN_08961168(int, void *, int);
extern int FUN_08961188(void);
extern int FUN_08879f60(int, ...);
extern void thunk_FUN_0880c468(void *, int, unsigned int);
extern void thunk_FUN_0880c088(void *, const void *, unsigned int);

int FUN_0887a274(int socket)
{
    int result;
    int index;

    if (D_08aad03c == 1) {
        result = FUN_089610a8(socket, 0, 1);
        if (result != -0x7fbef8f7 && FUN_08879f60(result) >= 0)
            return 0;
        return -1;
    }
    for (index = 0; index < 16; index++) {
        unsigned char *entry = DAT_08aacebc + index * 0x18;
        if (*(int *)entry == socket) {
            unsigned char address[16];
            thunk_FUN_0880c468(address, 0, sizeof(address));
            address[1] = 2;
            thunk_FUN_0880c088(address + 4, entry + 4, 4);
            *(unsigned short *)(address + 2) = *(unsigned short *)(entry + 0x14);
            result = FUN_08961168(socket, address, sizeof(address));
            if (result >= 0)
                return 0;
            result = FUN_08961188();
            if ((unsigned int)(result + 0x7ffeff89) < 2)
                return -1;
            if (result == -0x7ffeff81)
                return 0;
            return FUN_08879f60(result);
        }
    }
    return -1;
}
