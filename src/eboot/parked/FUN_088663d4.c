/* Purpose: translate a decimal category/row/item code into the internal item index. */
unsigned int FUN_088663d4(int unused, unsigned int code)
{
    unsigned int category;
    unsigned int row;
    unsigned int item;

    (void)unused;
    code &= 0xffff;
    row = (code / 100) % 100;
    item = code % 100;
    category = code / 10000;
    if (category == 1) {
        if (((row - 1) & 0xff) < 8 && ((item - 1) & 0xff) < 0x40)
            return row * 0x40 + item + 0x13f;
    } else if (category == 0) {
        if (((row - 1) & 0xff) < 6 && ((item - 1) & 0xff) < 0x40)
            return (row * 0x40 + item - 0x41) & 0xffff;
    } else if (category == 2) {
        if (row == 1 && ((item - 1) & 0xff) < 0x20)
            return item + 0x3bf;
        if (row == 2 && ((item - 1) & 0xff) < 0x20)
            return item + 0x3df;
    } else if (category == 4) {
        if (row == 1 && ((item - 1) & 0xff) < 0x20)
            return item + 0x37f;
        if (row == 2 && ((item - 1) & 0xff) < 0x20)
            return item + 0x39f;
    }
    return 0xffff;
}
