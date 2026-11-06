/* Purpose: compact the circular queue after removing one record. */
struct QueueRecord {
    unsigned int words[8];
};

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_08864d2c(void *object, unsigned int removed)
{
    unsigned int current = FIELD(object, unsigned int, 0x108c);
    struct QueueRecord *records = (struct QueueRecord *)((unsigned char *)object + 0x8c);
    unsigned int source = removed;
    while (((source + 1) & 0x7f) != current) {
        source = (source + 1) & 0x7f;
        records[removed] = records[source];
        removed = (removed + 1) & 0x7f;
    }
    *(unsigned short *)&records[removed] = 0;
}
