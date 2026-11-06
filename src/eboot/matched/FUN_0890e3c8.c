/*
 * FUN_0890e3c8: find an active entry with ID among twenty 0x26C-byte entries.
 *
 * Main EBOOT, attempt-high-01. The entry layout is a hypothesis.
 */

typedef unsigned char u8;

int FUN_0890e3c8(u8 *entry, int id)
{
    int count = 0;

    while (entry[0] == 0 || *(int *)(entry + 0x18) != id) {
        count++;
        entry += 0x26c;
        if (count == 0x14)
            return 0;
    }
    return 1;
}
