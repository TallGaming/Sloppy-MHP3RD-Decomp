/* Purpose: test whether a character code is accepted by the name-entry filter. */
int FUN_0886a5d0(int unused, unsigned int character)
{
    (void)unused;
    character &= 0xffff;
    if ((character >= 0x20 && character <= 0x40) ||
        (character >= 0x5b && character <= 0x60) ||
        (character >= 0x7b && character <= 0x7f))
        return 1;
    if ((character >= 0xa1 && character <= 0xa7) ||
        (character >= 0xaa && character <= 0xab) ||
        character == 0xac || character == 0xb0 ||
        (character >= 0xb4 && character <= 0xb5) ||
        character == 0xbb || character == 0xbf ||
        character == 0xd7 || character == 0xf7)
        return 1;
    if ((character >= 0x2018 && character <= 0x201a) ||
        (character >= 0x201c && character <= 0x201e) || character == 0x20ac)
        return 1;
    if ((character >= 0x3000 && character <= 0x3002) ||
        (character >= 0x300c && character <= 0x300d) ||
        (character >= 0x30fb && character <= 0x30fc))
        return 1;
    if (character == 0xff01 || (character >= 0xff03 && character <= 0xff06) ||
        (character >= 0xff08 && character <= 0xff20) ||
        (character >= 0xff3b && character <= 0xff40) ||
        (character >= 0xff5b && character <= 0xff5e) || character == 0xffe5)
        return 1;
    return 0;
}
