/*
 * FUN_08958a04: initialize five 12-byte entries and install their table pointer.
 *
 * Main EBOOT, G2 final frame-and-branch slice. The entry layout and table role are hypotheses.
 */

typedef unsigned char u8;

void FUN_0890169c(void *entry);

void FUN_08958a04(u8 *entry)
{
    int remaining = 5;

    do {
        remaining--;
        FUN_0890169c(entry);
        *(void **)entry = (void *)0x0896ab00;
        entry += 0x0c;
    } while (remaining != 0);
}
