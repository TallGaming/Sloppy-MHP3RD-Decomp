typedef unsigned char u8;

/* Purpose hypothesis: require every entry in a four-record table to pass. */
extern u8 D_08a29258[];
extern int FUN_088305b4(void *, void *);

int FUN_0882f054(void *value)
{
    u8 *entry;
    u8 *end = D_08a29258 + 1328;

    for (entry = D_08a29258; entry != end; entry += 332) {
        if (FUN_088305b4(entry, value) == 0) {
            return 0;
        }
    }
    return 1;
}
