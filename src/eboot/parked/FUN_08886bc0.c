/* Purpose: find a saved network record by its six-byte identifier. */
void *FUN_08886bc0(unsigned char *object, const unsigned char *identifier)
{
    int index;

    if (*(signed char *)(object + 0x1bd0) <= 0)
        return 0;
    for (index = 0; index != *(signed char *)(object + 0x1bd0); index++) {
        unsigned char *record = object + 0x1bd4 + index * 0x90;
        int byte_index;
        for (byte_index = 0; byte_index < 6; byte_index++) {
            unsigned char input_byte = identifier[byte_index];
            unsigned char saved_byte = record[byte_index];
            if (input_byte < saved_byte || saved_byte < input_byte)
                break;
        }
        if (byte_index == 6)
            return record;
    }
    return 0;
}
