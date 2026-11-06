/*
 * Purpose: retain the recovered call-family view for FUN_08845534.
 *
 * This is deliberately not a whole candidate.  The target invokes the typed
 * table resolver and descriptor dispatcher repeatedly, but the caller-owned
 * object layout and the target's input lanes are not yet recovered.
 */
typedef unsigned char u8;
typedef unsigned short u16;

extern int FUN_08867d40(void *context, u16 index);
extern void FUN_08904570(void *unused, u16 *record, int descriptor_word,
                         u8 descriptor_byte, int request_word, short x,
                         short y, int descriptor_word2, u8 stack_byte);
extern const u8 *FUN_0885be6c(void *unused, const void *selector_object);
extern int FUN_088a52b0(const u8 *record, u8 value);

struct FUN_08845534_call_family {
    void *context;
    u16 resolver_index;
    u16 *record;
    const void *selector_object;
};

static void FUN_08845534_field_view(const struct FUN_08845534_call_family *view)
{
    int descriptor = FUN_08867d40(view->context, view->resolver_index);
    const u8 *record = FUN_0885be6c(view->context, view->selector_object);
    if (record != 0 && FUN_088a52b0(record, 0) != 0) {
        FUN_08904570(view->context, view->record, descriptor, 0, 0, 0, 0,
                      descriptor, 0);
    }
}
