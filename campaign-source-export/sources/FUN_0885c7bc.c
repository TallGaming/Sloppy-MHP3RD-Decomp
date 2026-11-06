/* Purpose: read the unsigned record field for enabled selectors that use it. */
typedef unsigned char u8;
typedef unsigned short u16;

struct SelectorObject0885c7bc {
    u8 field_00;
    u8 selector;
    u16 index;
};

extern const u8 *FUN_0885be6c(void *context,
                              const struct SelectorObject0885c7bc *object);

u8 FUN_0885c7bc(void *context, const struct SelectorObject0885c7bc *object)
{
    if (object->index != 0) {
        u8 selector = object->selector;

        if (selector == 5 || selector == 6 || selector == 7 || selector == 8 ||
            selector == 12 || selector == 13 || selector == 14 ||
            selector == 16 || selector == 17) {
            return FUN_0885be6c(context, object)[19];
        }
    }
    return 0;
}
