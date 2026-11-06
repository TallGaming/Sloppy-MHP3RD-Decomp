/*
 * FUN_088f2e04: find a type-1 entry with the supplied 16-bit key among two entries.
 *
 * Main EBOOT, G2 high-address branch slice. The entry layout is a hypothesis.
 */

typedef unsigned char u8;
typedef short s16;
typedef int s32;

int FUN_088f2e04(u8 *entry, s16 key)
{
    int index = 0;

    while (*(s32 *)(entry + 4) != 1 || *(s16 *)(entry + 8) != key) {
        entry += 0x0c;
        index++;
        if (index == 2)
            return -1;
    }
    return index;
}
