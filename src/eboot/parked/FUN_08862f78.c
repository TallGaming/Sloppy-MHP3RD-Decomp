/* Purpose: build the disc-block lookup table for every known entry. */
extern int FUN_08862f2c(void *, int);
typedef unsigned int (*EntrySizeFn)(void *, int);

void FUN_08862f78(int *object)
{
    unsigned int offset = 0;
    short block = 0;
    int index;
    EntrySizeFn get_size = *(EntrySizeFn *)(*(unsigned char **)object + 0x18);

    for (index = 0; index < 0x1743; index++) {
        short *record = (short *)(object + 0xa5ea + index);
        unsigned int size;
        if (FUN_08862f2c(object, index) == 0) {
            record[0] = -1;
            record[1] = 0;
            continue;
        }
        size = get_size(object, index);
        if (size + offset < 0x370001) {
            record[0] = block;
            record[1] = (short)(offset >> 11);
            offset += size;
        } else {
            block++;
            record[0] = block;
            record[1] = 0;
            offset = size;
        }
    }
}
