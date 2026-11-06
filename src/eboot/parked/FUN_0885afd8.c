/* Purpose: return one 32-byte element from an indexed optional table. */
extern void *D_08a333c4[];

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void *FUN_0885afd8(int table_index, unsigned int element_index)
{
    void *table = table_index[D_08a333c4];
    if (table != 0) {
        if (FIELD(table, unsigned int, 0x0c) > element_index)
            return &((unsigned char *)table)[element_index * 0x20 + 0x10];
    }
    return 0;
}
