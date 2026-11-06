/* Purpose: copy a six-byte value into the peer record matching the current identifier. */
extern unsigned char *FUN_08885024(void);
extern void thunk_FUN_0880c088(void *, const void *, unsigned int);

void FUN_088882e0(unsigned char *object, const void *value)
{
    unsigned char *identifier = FUN_08885024();
    int index;

    if (*(signed char *)(object + 0x17af) <= 0)
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
            if (object != (unsigned char *)-8)
                thunk_FUN_0880c088(object + 0x144, value, 6);
            return;
        }
    }
}
