/*
 * FUN_088ef328: return the first inactive index among ten 24-byte entries.
 *
 * Main EBOOT, G2 high-address branch slice. The entry layout is a hypothesis.
 */

typedef unsigned char u8;

u8 FUN_088ef328(u8 *entries)
{
    unsigned int index = 0;

    do {
        if (entries[index * 0x18 + 1] == 0)
            return index & 0xff;
        index++;
    } while (index != 10);
    return 0xff;
}
