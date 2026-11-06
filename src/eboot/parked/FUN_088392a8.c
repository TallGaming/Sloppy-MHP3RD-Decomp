/* Purpose: express the four-record membership test with a running record pointer. */
typedef unsigned char u8;

extern int FUN_088305b4(const void *left, const void *right);

int FUN_088392a8(const void *record, const u8 *records)
{
    const u8 *current;
    int index;

    current = records + 0x140;
    index = 0;
    do {
        if (FUN_088305b4(record, current) == 0) {
            return 0;
        }
        current += 0x90;
        index++;
    } while (index != 4);
    return 1;
}
