/*
 * FUN_088dc0a8: publish a two-entry array, clear each entry head and initialize it.
 *
 * Main EBOOT, G2 high-address frame-and-branch slice. The entry layout is a hypothesis.
 */

typedef unsigned char u8;
typedef unsigned int u32;

void FUN_088db70c(void *entries);
void FUN_088db790(void *entries);

void FUN_088dc0a8(void *entries)
{
    u8 *entry = entries;
    int count = 0;

    *(void **)0x09bc1ac0 = entries;
    do {
        count++;
        *(u32 *)entry = 0;
        entry += 0x24;
    } while (count != 2);
    FUN_088db70c(entries);
    FUN_088db790(entries);
}
