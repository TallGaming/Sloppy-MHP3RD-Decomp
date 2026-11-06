/*
 * Purpose: prepare a local record, derive selector-dependent entries, and
 * dispatch each derived entry through a shared manager.
 *
 * This is an uncompiled field view.  The input record, the byte-to-entry
 * mapping table, and FUN_088ff8f0's callable contract still need evidence
 * from FUN_0884ce48 or other real callers.  It deliberately does not claim
 * a whole candidate.
 */
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef int s32;

struct LocalRecord08841f70 {
    u8 unknown_00[0x4c];
    s32 field_4c;
};

struct SelectorObject0885c7bc {
    u8 field_00;
    u8 selector;
    u16 index;
};

extern void *D_08a3345c;
extern void *D_09bf5250;
extern void FUN_088f9cd0(struct LocalRecord08841f70 *record);
extern void FUN_089033fc(struct LocalRecord08841f70 *record, void *source,
                         void *initializer);
extern u8 FUN_0885c7bc(void *context,
                       const struct SelectorObject0885c7bc *object);
extern s32 FUN_088fbcdc(void *context, s32 index);

void FUN_08841f70(void *context,
                  const struct SelectorObject0885c7bc *selector,
                  void *file_backed_source, void *unknown_input)
{
    struct LocalRecord08841f70 local_record;
    u8 selected;

    FUN_088f9cd0(&local_record);
    FUN_089033fc(&local_record, file_backed_source, 0);
    selected = FUN_0885c7bc(D_08a3345c, selector);

    /* The target loops over a byte-selected table, resolves entries through
     * the shared manager, then uses a second local object for an unresolved
     * FUN_088ff8f0 call.  Those object layouts are not yet proved. */
    (void)selected;
    (void)D_09bf5250;
    (void)context;
    (void)unknown_input;
}
