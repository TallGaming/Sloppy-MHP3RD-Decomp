/* Purpose: normalize a sequence of wide character codes for matching. */
extern void *D_08a2919c;
extern int FUN_0882db80(void *, unsigned short);

void FUN_0886ab70(int unused, unsigned short *output,
                  const unsigned short *input, int last_index)
{
    int i;
    (void)unused;
    if (last_index < 0)
        return;
    for (i = 0; i <= last_index; i++, output++, input++) {
        unsigned short value = *input;
        *output = value;
        if (FUN_0882db80(D_08a2919c, value) != 0)
            *output -= 0x20;
        if ((unsigned short)(value - 0xe0) < 0x10 ||
            (unsigned short)(value - 0xf0) < 7 ||
            (unsigned short)(value - 0xf8) < 7)
            *output -= 0x20;
        if ((unsigned short)(value + 0xdf) < 0x1a)
            *output += 0x120;
        if ((unsigned short)(value + 0xbf) < 0x1a)
            *output += 0x100;
        switch (value) {
        case 0xff: *output = 0x178; break;
        case 0x131: *output = 0x1c0; break;
        case 0x101: case 0x113: case 0x11b: case 0x129: case 299:
        case 0x142: case 0x14d: case 0x153: case 0x161: case 0x169:
        case 0x16b: case 0x16f: case 0x17e: case 0x1ce: case 0x1d0:
        case 0x1d2: case 0x1d4:
            output--;
            break;
        }
    }
}
