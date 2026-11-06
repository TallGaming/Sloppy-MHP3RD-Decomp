/* Purpose: return the UTF-8 unit width selected by a leading input byte. */
int FUN_0882db94(void *context, int value)
{
    unsigned char byte = (unsigned char)value;
    int test;

    (void)context;
    if (byte == 0)
        return byte;
    if ((signed char)byte >= 0)
        return 1;
    test = byte & 0x40;
    if (test == 0)
        return test;
    if ((byte & 0x20) == 0)
        return 2;
    if ((byte & 0x10) == 0)
        return 3;
    if ((byte & 0x08) == 0)
        return 4;
    return 0;
}
