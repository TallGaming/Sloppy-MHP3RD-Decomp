/*
 * FUN_088f2ea8: test for a type-2 entry with the supplied 16-bit key among two entries.
 *
 * Main EBOOT, G2 high-address branch slice. The entry layout is a hypothesis.
 */

typedef unsigned char u8;
typedef short s16;
typedef int s32;

int FUN_088f2ea8(u8 *entry, s16 key)
{
    int count = 0;

    while (*(s32 *)(entry + 4) != 2 || *(s16 *)(entry + 8) != key) {
        count++;
        entry += 0x0c;
        if (count == 2)
            return 0;
    }
    return 1;
}
