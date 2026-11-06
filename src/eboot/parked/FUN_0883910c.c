/*
 * Purpose: build a local decoded record from the shared packet cursor and,
 * when the record predicate is true, select event path 12.
 *
 * This is an uncompiled natural field/ABI view.  There are no direct callers
 * for this callback entry.  FUN_08839020 and FUN_08838528 are unresolved
 * game-code dependencies, so their complete types and the local record layout
 * cannot be represented as a whole fixed-profile candidate yet.
 */
typedef unsigned char u8;

typedef struct Event12Record {
    /* Decoder flow reaches at least byte 0x8f from its supplied base. */
    u8 unknown[0x90];
} Event12Record;

extern const u8 *FUN_0882fc48(void);
extern void FUN_08839020(Event12Record *record, const u8 *cursor);
extern int FUN_08838528(Event12Record *record, const u8 *cursor);
extern int FUN_088399f0(u8 selector);

int FUN_0883910c_partial(void)
{
    Event12Record record;
    const u8 *cursor = FUN_0882fc48();

    FUN_08839020(&record, cursor);
    if (FUN_08838528(&record, cursor) != 0) {
        return FUN_088399f0(12);
    }
    return 0;
}
