/* Purpose: locate a peer by six-byte identifier and return its computed peer value. */
extern int FUN_088894d8(void *, int);

int FUN_088896fc(unsigned char *object, const unsigned char *identifier)
{
    int index;

    if (*(signed char *)(object + 0x17af) <= 0)
        return 0;
    for (index = 0; index != *(signed char *)(object + 0x17af); index++) {
        unsigned char *peer = object + 0x818 + index * 0x14c;
        int byte_index;
        for (byte_index = 0; byte_index < 6; byte_index++) {
            unsigned char input_byte = identifier[byte_index];
            unsigned char peer_byte = peer[byte_index];
            if (input_byte < peer_byte || peer_byte < input_byte)
                break;
        }
        if (byte_index == 6)
            return FUN_088894d8(object, index);
    }
    return 0;
}
