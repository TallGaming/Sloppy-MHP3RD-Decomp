/* Purpose: replace a saved network record whose six-byte identifier matches the input. */
extern void thunk_FUN_0880c088(void *, const void *, unsigned int);

int FUN_088865c8(unsigned char *object, const unsigned char *record)
{
    int index;

    if (*(signed char *)(object + 0x1bd0) <= 0)
        return 0;
    for (index = 0; index != *(signed char *)(object + 0x1bd0); index++) {
        unsigned char *saved = object + 0x1bd4 + index * 0x90;
        int byte_index;
        for (byte_index = 0; byte_index < 6; byte_index++) {
            unsigned char input_byte = record[byte_index];
            unsigned char saved_byte = saved[byte_index];
            if (input_byte < saved_byte || saved_byte < input_byte)
                break;
        }
        if (byte_index == 6) {
            thunk_FUN_0880c088(saved, record, 0x90);
            return 1;
        }
    }
    return 0;
}
