/* Purpose: store a second mode globally and on the local peer record matching the current identifier. */
extern unsigned char *FUN_08885024(void);

void FUN_08888210(unsigned char *object, unsigned char mode)
{
    unsigned char *identifier;
    int index;

    object[0x1bce] = mode;
    identifier = FUN_08885024();
    if (*(signed char *)(object + 0x17af) <= 0)
        return;
    for (index = 0; index != *(signed char *)(object + 0x17af); index++) {
        unsigned char *peer = object + 0x818 + index * 0x14c;
        int byte_index;
        for (byte_index = 0; byte_index < 6; byte_index++) {
            unsigned char input_byte = identifier[byte_index];
            unsigned char peer_byte = peer[byte_index];
            if (input_byte < peer_byte || peer_byte < input_byte)
                break;
        }
        if (byte_index == 6) {
            object += index * 0x14c;
            if (object == (unsigned char *)-0x818)
                return;
            object[0x95a] = mode;
            return;
        }
    }
}
