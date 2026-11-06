/* Purpose: resolve a table-relative entry selected by a 16-bit index. */
extern int FUN_08867c18(void);
extern void FUN_088ebb18(void *destination, const void *source, unsigned int size);

int FUN_08867c30(unsigned int unused1, unsigned int unused2, int index)
{
    int base = FUN_08867c18();
    int local;
    (void)unused1;
    (void)unused2;
    if (index != 0xffff) {
        FUN_088ebb18(&local, (void *)(base + index * 4), 4);
        if (local != -1)
            return local + base;
    }
    return 0;
}
