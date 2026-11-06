/* Purpose: express the recovered enabled-selector predicate without a switch table. */
typedef unsigned char u8;
typedef unsigned short u16;

struct SelectorObject0885c7bc {
    u8 unknown_00;
    u8 selector;
    u16 enabled;
};

extern u16 FUN_0885be6c(void *unused_lane0,
                        const struct SelectorObject0885c7bc *object);

void FUN_0885c7bc(void *context, const struct SelectorObject0885c7bc *object)
{
    u8 selector = object->selector;

    if (object->enabled != 0 &&
        (selector == 5 || selector == 6 || selector == 7 || selector == 8 ||
         selector == 12 || selector == 13 || selector == 14 ||
         selector == 16 || selector == 17)) {
        FUN_0885be6c(context, object);
    }
}
