/* Purpose: return an indexed 36-byte element from an optional pointer table. */
extern unsigned char D_0897d5f8[];

void *FUN_0885f710(unsigned int unused, unsigned int table_index,
                   unsigned int element_index)
{
    void **tables = (void **)(D_0897d5f8 + 0x360);
    void *table;
    (void)unused;
    table_index &= 0xff;
    if (table_index == 0x65)
        return 0;
    table = tables[table_index];
    if (table == 0)
        return 0;
    return (unsigned char *)table + (element_index & 0xffff) * 0x24;
}
