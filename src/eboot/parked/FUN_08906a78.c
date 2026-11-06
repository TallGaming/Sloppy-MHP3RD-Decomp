/*
 * FUN_08906a78: test whether the low byte of VALUE appears in six bytes at offset 0x68.
 *
 * Main EBOOT, attempt-high-01. The record layout is a hypothesis.
 */

typedef unsigned char u8;
typedef unsigned int u32;

int FUN_08906a78(u8 *record, u32 value)
{
    int count = 0;
    u8 *cursor = record;

    do {
        char *slot = (char *)(cursor + 0x68);

        count++;
        cursor++;
        if ((value & 0xff) == (int)*slot)
            return 1;
    } while (count != 6);
    return 0;
}
