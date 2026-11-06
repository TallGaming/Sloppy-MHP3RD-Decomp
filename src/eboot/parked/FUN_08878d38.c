/*
 * Purpose: find the first linked record whose threshold reaches a value.
 * Hypothesis: the object points to a sentinel chain at offset 4; record word
 * zero is the downward link and word one is the forward traversal link.
 */
typedef struct Record Record;
struct Record {
    Record *down;
    Record *next;
    unsigned int unknown[3];
    unsigned int threshold;
};

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

Record *FUN_08878d38(const void *object, unsigned int value)
{
    Record *record = FIELD(object, Record *, 4);
    while (record->down != 0) {
        record = record->down;
    }
    do {
        if (record->threshold >= value) {
            return record;
        }
        record = record->next;
    } while (record != 0);
    return 0;
}
