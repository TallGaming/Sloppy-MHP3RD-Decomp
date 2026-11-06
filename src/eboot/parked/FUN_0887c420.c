/* Purpose: clear the first global key/value slot matching a key. */
extern unsigned char D_08aace80[];

void FUN_0887c420(int key)
{
    int *entries = (int *)(D_08aace80 + 0x49084);
    int index = 0;
    int *entry = entries;
    int current = entries[0];
    for (;;) {
        if (key == current) {
            entry[1] = 0;
            entry[0] = 0;
            return;
        }
        index++;
        entry = entries + index * 2;
        if (index == 8)
            break;
        current = entry[0];
    }
}
