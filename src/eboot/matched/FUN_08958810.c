/*
 * FUN_08958810: apply FUN_088f9cd0 to four 0x50-byte entries.
 *
 * Main EBOOT, G2 final frame-and-branch slice. The entry layout is a hypothesis.
 */

typedef unsigned char u8;

void FUN_088f9cd0(void *entry);

void FUN_08958810(u8 *entry)
{
    int remaining = 4;

    do {
        remaining--;
        FUN_088f9cd0(entry);
        entry += 0x50;
    } while (remaining != 0);
}
