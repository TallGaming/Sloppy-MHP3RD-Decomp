/*
 * Purpose: build a small local event from the current six-byte packet record,
 * append its next byte, check the record, then select event path 17.
 *
 * This is an uncompiled field/ABI view.  The target has no direct callers;
 * its callable signature is therefore not established.  FUN_088303e0's
 * legacy void declaration is ABI-incomplete here: target flow consumes its
 * cursor result, supported by its registered length-prefixed implementation.
 */
typedef unsigned char u8;

typedef struct Event17 {
    u8 record[6];
    u8 unknown_06[12];
    u8 next_byte;
} Event17;

extern const u8 *FUN_0882fc48(void);
extern const u8 *FUN_088303e0(void *context, const u8 *input);
extern const u8 *FUN_088304bc(u8 *destination, const u8 *source);
extern int FUN_0883a8ac(const void *record);
extern int FUN_088399f0(u8 selector);

int FUN_08838d88_partial(void)
{
    Event17 event;
    const u8 *cursor = FUN_088303e0(&event, FUN_0882fc48());

    (void)FUN_088304bc(&event.next_byte, cursor);
    (void)FUN_0883a8ac(event.record);
    return FUN_088399f0(17);
}
