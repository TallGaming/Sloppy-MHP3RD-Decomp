/*
 * Purpose hypothesis: select a category/index record and return its field at
 * byte offset 24, or return null when no category record exists.
 *
 * The callee uses only the low byte of category and low halfword of index.
 */
typedef unsigned int u32;

void *FUN_0885f6a8(void *unused, u32 category, u32 index);

void *FUN_0885fc18(void *unused, u32 category, u32 index)
{
    unsigned char *selected = FUN_0885f6a8(unused, category & 0xff, index & 0xffff);

    if (selected == 0) {
        return 0;
    }
    return selected + 24;
}
