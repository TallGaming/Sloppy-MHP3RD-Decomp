/*
 * FUN_08959ba4: apply FUN_088f9cbc to four 0x58-byte entries.
 *
 * Main EBOOT, G2 final frame-and-branch slice. The entry layout is a hypothesis.
 */

typedef unsigned char u8;

void FUN_088f9cbc(void *entry);

void FUN_08959ba4(u8 *entry)
{
    int remaining = 4;

    do {
        remaining--;
        FUN_088f9cbc(entry);
        entry += 0x58;
    } while (remaining != 0);
}
