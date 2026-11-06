/*
 * Purpose: add an audio command to the semaphore-protected 64-entry ring.
 * The writable packet's second word is its sequence identifier.
 */
typedef struct {
    unsigned kind;
    unsigned char packet[64];
    unsigned size;
} AudioQueueEntry;

extern unsigned char D_08a32180[];
extern unsigned D_08a33380, D_08a33388, D_08a33390;
extern int D_08a3338c;
extern unsigned D_08a31df4, D_08a31df8;
extern signed char D_09bc1ed0;
extern const char D_08965c98[], D_08965ca0[], D_08965ca8[];
extern int FUN_08960bd8(int sema, int count, unsigned *timeout);
extern int FUN_08960bc0(int sema, int count);
extern unsigned FUN_08960a50(void);
extern void FUN_08960a68(unsigned flags);
extern int FUN_0885992c(void);
extern unsigned FUN_0885865c(void);
extern void *FUN_088ebb10(void *destination, int value, unsigned size);
extern void FUN_088ebb18(void *destination, const void *source, unsigned size);
extern int FUN_0880d4b4(const char *, ...);
extern int FUN_0880d590(const char *);

unsigned FUN_088599f0(unsigned kind, void *packet, unsigned size)
{
    unsigned sequence = 0;
    int report = 1;

    FUN_08960bd8(D_08a3338c, 1, 0);
    if (D_08a31df8++ == 0)
        D_08a31df4 = FUN_08960a50();

    if (FUN_0885992c() >= 0) {
        AudioQueueEntry *queue = (AudioQueueEntry *)D_08a32180;
        AudioQueueEntry *entry;
        unsigned *words = packet;

        sequence = words[1];
        report = sequence != 0;
        if (!report) {
            sequence = FUN_0885865c();
            words[1] = sequence;
        }
        entry = &queue[D_08a33390];
        entry->kind = kind;
        FUN_088ebb10(entry->packet, 0, sizeof(entry->packet));
        FUN_088ebb18(entry->packet, packet, size);
        entry->size = size;
        D_08a33390 = (D_08a33390 + 1) & 63;
        ++D_08a33388;
        if (kind == 2)
            ++D_08a33380;
    }

    if (D_08a31df8 != 0 && --D_08a31df8 == 0)
        FUN_08960a68(D_08a31df4);
    if (report && D_09bc1ed0) {
        FUN_0880d4b4(D_08965c98);
        if (D_09bc1ed0) {
            FUN_0880d4b4(D_08965ca0);
            if (D_09bc1ed0)
                FUN_0880d590(D_08965ca8);
        }
    }
    FUN_08960bc0(D_08a3338c, 1);
    return sequence;
}
