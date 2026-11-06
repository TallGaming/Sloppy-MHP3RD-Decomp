/*
 * FUN_0890df10: count active flags in twenty 0x26C-byte entries.
 *
 * Main EBOOT, attempt-high-01. The entry layout is a hypothesis.
 */

typedef unsigned char u8;

int FUN_0890df10(u8 *entry)
{
    int count = 0;
    int remaining = 0x14;

    do {
        count += *entry != 0;
        remaining--;
        entry += 0x26c;
    } while (remaining != 0);
    return count;
}
