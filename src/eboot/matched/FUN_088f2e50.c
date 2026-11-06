/*
 * FUN_088f2e50: return field 0x0A of a matching two-entry record, or -1.
 *
 * Main EBOOT, G2 high-address frame-and-branch slice. The entry layout is a hypothesis.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;

int FUN_088f2e04(void *entries, u16 key);

int FUN_088f2e50(u8 *entries, u16 key)
{
    int index = FUN_088f2e04(entries, key);
    int result = -1;

    if (index != -1)
        result = *(s16 *)(entries + index * 0x0c + 0x0a);
    return result;
}
