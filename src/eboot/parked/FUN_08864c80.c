/* Purpose: clear all inactive queue records and advance the queue cursor. */
extern unsigned int FUN_08960bb0(void);
extern void FUN_08960b88(unsigned int state);

struct QueueRecord {
    unsigned short active;
    unsigned char unused[0x12];
    unsigned int *pending;
    unsigned char tail[8];
};

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_08864c80(void *object)
{
    unsigned int state = FUN_08960bb0();
    unsigned int current = FIELD(object, unsigned int, 0x108c);
    struct QueueRecord *records = (struct QueueRecord *)((unsigned char *)object + 0x8c);
    unsigned int index;
    for (index = 0; index < 0x80; index++) {
        if (index != current)
            records[index].active = 0;
        if (records[index].pending != 0) {
            *records[index].pending = 1;
            current = FIELD(object, unsigned int, 0x108c);
        }
    }
    if (records[current].active == 0) {
        FIELD(object, unsigned int, 0x1090) = current;
    } else {
        FIELD(object, unsigned int, 0x1090) = (current + 1) & 0x7f;
    }
    FUN_08960b88(state);
}
