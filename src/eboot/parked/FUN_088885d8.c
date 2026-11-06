/* Purpose: clear the six-byte peer token and its adjacent counters for the local identifier. */
extern unsigned char *FUN_08885024(void);
extern void thunk_FUN_0880c468(void *, int, unsigned int);

void FUN_088885d8(unsigned char *object)
{
    unsigned char *identifier = FUN_08885024();
    int index;

    if (*(signed char *)(object + 0x17af) < 1)
        return;
    for (index = 0; index != *(signed char *)(object + 0x17af); index++) {
        unsigned char *peer = object + 0x818 + index * 0x14c;
        int byte_index;
        for (byte_index = 0; byte_index < 6; byte_index++) {
            if (identifier[byte_index] != peer[byte_index])
                break;
        }
        if (byte_index == 6) {
            object += index * 0x14c + 0x810;
            if (object == (unsigned char *)-8)
                return;
            thunk_FUN_0880c468(object + 0x139, 0, 6);
            *(unsigned short *)(object + 0x142) = 0;
            *(unsigned short *)(object + 0x140) = 0;
            return;
        }
    }
}
