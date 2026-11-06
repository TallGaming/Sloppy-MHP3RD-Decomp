/* Purpose: resolve a two-level table entry selected by a decimal-packed index. */
void *FUN_08879704(void *unused, unsigned char *base, unsigned int index)
{
    unsigned int *table; int offset; (void)unused;
    if (!base) return 0; table=(unsigned int *)(base+(index/100)*8);
    if (index%100>=table[0]) return 0;
    offset=*(int *)(base+table[1]+(index%100)*4);
    return offset==-1?0:base+offset;
}
