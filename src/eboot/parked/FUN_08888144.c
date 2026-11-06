/* Purpose: store a flag on the local peer record matching the current identifier. */
extern unsigned char *FUN_08885024(void);

void FUN_08888144(unsigned char *object, unsigned char flag)
{
    unsigned char *identifier = FUN_08885024();
    int index;

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
            object[0x94f] = flag;
            return;
        }
    }
}
