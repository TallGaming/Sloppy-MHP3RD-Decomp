/* Purpose: extract six small bit fields from global records into an object. */
extern unsigned char *D_08aace80;

void FUN_08869f34(void *object)
{
    unsigned char *output = (unsigned char *)object + 0x60b85;
    int index = 0;
    int offset = 0xa0;
    do {
        unsigned char *record = D_08aace80 + offset;
        index++;
        offset += 0xfc;
        if ((int)record != -0x16)
            *output = (*(unsigned short *)(record + 0x2a) & 0x1ff) >> 6;
        output++;
    } while (index != 6);
}
