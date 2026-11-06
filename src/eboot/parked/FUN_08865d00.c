/* Purpose: initialize the queue table, entry pool, and queue-control globals. */
extern unsigned char D_08a338ac[];
extern void FUN_088ebb10(void *destination, int value, unsigned int size);
extern void FUN_08865c78(void *entry);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_08865d00(void)
{
    unsigned char *header = (unsigned char *)0x08a33e30;
    unsigned char *entry;
    unsigned int index;
    for (index = 0; index < 0x10; index++)
        header[index] = 0;
    header[1] = 5;
    FUN_088ebb10(D_08a338ac, 0, 0x580);
    entry = D_08a338ac;
    for (index = 0; index < 0x20; index++, entry += 0x2c) {
        FIELD(entry, unsigned short, 6) = index;
        FIELD(entry, unsigned int, 8) = 1u << (index & 0x1f);
        FUN_08865c78(entry);
    }
    FUN_088ebb10((void *)0x08a33890, 0, 0x1c);
    *(unsigned int *)0x08a33890 = 0xffffffff;
    *(unsigned int *)0x08a338a4 = 1;
}
