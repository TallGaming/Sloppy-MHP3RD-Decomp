/*
 * FUN_08945c64: append one pair of half-words to a 40-entry array.
 *
 * Main EBOOT, attempt-high-01 batch 3. The record layout and capacity are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned short u16;

int FUN_08945c64(u8 *record, const u16 *pair)
{
    int index = *(int *)(record + 0x208);
    u16 *slot = (u16 *)(record + 0x158 + index * 4);

    if (index < 0x28) {
        u16 first = pair[0];
        u16 second = pair[1];

        *(int *)(record + 0x208) = index + 1;
        slot[1] = second;
        slot[0] = first;
    }
    return index < 0x28;
}
