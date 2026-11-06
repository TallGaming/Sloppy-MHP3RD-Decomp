/* Return whether a six-byte record is absent from the four saved keys. */
extern unsigned char *D_09bf5250;
extern int FUN_088305b4(const void *left, const void *right);

int FUN_088392a8(const void *record)
{
    unsigned int offset = 0x1140;
    unsigned char index;

    for (index = 0; index != 4; ++index) {
        if (FUN_088305b4(record, D_09bf5250 + offset) == 0)
            return 0;
        offset += 0x90;
    }
    return 1;
}
