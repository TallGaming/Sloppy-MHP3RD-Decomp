/* Purpose: insert a key/value pair into the first empty global slot. */
extern unsigned char D_08aace80[];

void FUN_0887c3c4(int key, int value)
{
    int *entries = (int *)(D_08aace80 + 0x49084);
    int index = 0;
    int *entry = entries;
    int current = entries[0];
    for (;;) {
        if (current == 0) {
            entry[1] = value;
            entry[0] = key;
            return;
        }
        index++;
        entry = entries + index * 2;
        if (index == 8)
            break;
        current = entry[0];
    }
}
