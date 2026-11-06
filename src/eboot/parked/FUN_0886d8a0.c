/* Purpose: select one of three large object offsets from a small mode. */
void *FUN_0886d8a0(void *object, int mode)
{
    void *result = (unsigned char *)object + 0x5fae5;
    if (mode == 1 ||
        (result = (unsigned char *)object + 0x5fb5b, mode == 2) ||
        (result = (unsigned char *)object + 0x7e5, mode == 0))
        return result;
    return (unsigned char *)object + 0x7e5;
}
