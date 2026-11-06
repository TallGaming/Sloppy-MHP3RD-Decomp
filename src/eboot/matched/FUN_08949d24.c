/*
 * FUN_08949d24: find VALUE in byte 0x7D of two 12-byte entries.
 *
 * Main EBOOT, attempt-high-01 batch 3. The entry layout is a hypothesis.
 */

typedef signed char s8;
typedef unsigned char u8;

int FUN_08949d24(u8 *record, s8 value)
{
    s8 *slot = (s8 *)(record + 0x7d);
    int count = 0;

    do {
        s8 current = *slot;

        count++;
        slot += 0x0c;
        if (current == value)
            return 1;
    } while (count != 2);
    return 0;
}
