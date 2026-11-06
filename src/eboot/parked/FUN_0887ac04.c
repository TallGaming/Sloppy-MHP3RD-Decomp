/* Purpose: send a fixed byte count through either backend and normalize short/error results. */
extern int D_08aad03c;
extern int FUN_08961040(int, const void *, int *, int, int);
extern int FUN_08961170(int, const void *, int);
extern int FUN_08961188(int, ...);
extern int FUN_08879f60(int, ...);

int FUN_0887ac04(int socket, const void *buffer, short length)
{
    int requested = length;
    int result;

    if (D_08aad03c == 1) {
        int transferred = requested;
        result = FUN_08879f60(FUN_08961040(socket, buffer, &transferred, 0, 1));
        if (result >= 0)
            return transferred == requested ? requested : -0xc;
        return result;
    }
    result = FUN_08961170(socket, buffer, requested);
    if (result != requested) {
        if (result < 0)
            return FUN_08879f60(FUN_08961188(0x8001000c));
        return FUN_08879f60(result);
    }
    return result;
}
