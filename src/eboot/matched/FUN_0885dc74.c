typedef unsigned char u8;
typedef unsigned short u16;

/* Purpose hypothesis: count nonzero values in three adjacent halfwords. */
int FUN_0885dc74(void *unused, const void *source)
{
    const u16 *cursor = (const u16 *)source;
    int count = 0;
    int index = 0;

    do {
        count += cursor[3] != 0;
        index++;
        cursor++;
    } while (index != 3);

    return count;
}
