/* Purpose: split a large transfer into entries in a 128-slot request ring. */
extern unsigned char *D_09bc1ed8;
extern int FUN_08960bb0(void);
extern unsigned int FUN_088e62f0(void *, int);
extern void FUN_08960b88(int);
extern void FUN_08960b28(int);

typedef struct TransferEntry {
    unsigned short state;
    unsigned short id;
    int source;
    int size;
    int offset;
    int total;
    int argument;
    unsigned char active;
    unsigned char source_mode;
    unsigned char kind;
    unsigned char special;
} TransferEntry;

int FUN_08862aac(unsigned char *owner, unsigned short id, int source,
                 unsigned char kind, int argument, char wake)
{
    int lock = FUN_08960bb0();
    int total = (*(int (**)(void *, unsigned short))(*(unsigned int *)owner + 0x14))(owner, id);
    unsigned char special = 0;
    unsigned int slot;
    int offset = 0;
    int remaining = total;

    if (*(signed char *)(owner + 0x2f534) != 0 &&
        FUN_088e62f0(D_09bc1ed8, 1) % 100 < 5)
        special = 1;

    do {
        TransferEntry *entry;
        slot = *(unsigned int *)(owner + 0x1090) & 0x7f;
        entry = (TransferEntry *)(owner + 0x8c + slot * 0x20);
        entry->state = 1;
        entry->id = id;
        entry->source = source;
        entry->size = remaining > 0x20000 ? 0x20000 : remaining;
        entry->offset = offset;
        entry->total = total;
        entry->argument = argument;
        entry->active = offset == 0;
        entry->source_mode = owner[0x2f534];
        entry->kind = kind;
        entry->special = special;
        offset += entry->size;
        remaining -= entry->size;
        if (remaining > 0)
            *(unsigned int *)(owner + 0x1090) = (slot + 1) & 0x7f;
    } while (remaining > 0);

    ((TransferEntry *)(owner + 0x8c + slot * 0x20))->active = 1;
    *(unsigned int *)(owner + 0x1090) = (slot + 1) & 0x7f;
    FUN_08960b88(lock);
    if (wake != 0)
        FUN_08960b28(*(int *)(owner + 0x297a4));
    return 1;
}
