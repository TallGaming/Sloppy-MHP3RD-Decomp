/*
 * FUN_088f68b8: clear byte 0x5F3 in each active entry of an eight-entry array.
 *
 * Main EBOOT, G2 high-address branch slice. The entry layout is a hypothesis.
 */

typedef unsigned char u8;

void FUN_088f68b8(void *unused, u8 *entry)
{
    int remaining = 8;

    do {
        remaining--;
        if (entry[0x5f0] != 0)
            entry[0x5f3] = 0;
        entry += 0xb0;
    } while (remaining != 0);
}
