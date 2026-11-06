/* Purpose: look up a nonzero relative entry and return its absolute address. */
extern int FUN_08864f3c(void);

void *FUN_08864f48(void *table, int index)
{
    int offset;
    if (index >= FUN_08864f3c())
        return 0;
    offset = *(int *)((unsigned char *)table + index * 8 + 4);
    if (offset == 0)
        return 0;
    return (unsigned char *)table + offset;
}
