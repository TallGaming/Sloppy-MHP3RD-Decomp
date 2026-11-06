/* Purpose: read the selected record field or decode the special selector. */
typedef unsigned char u8;
typedef unsigned short u16;

struct SelectorObject0885dca8 {
    u8 field_00;
    u8 selector;
    u16 index;
    u16 special;
};

struct BasicRecord0885dca8 {
    u8 fields[40];
};

extern const struct BasicRecord0885dca8 *D_0897d9a0[5];
extern const u8 *FUN_0885be6c(void *context, const struct SelectorObject0885dca8 *object);

u8 FUN_0885dca8(void *context, const struct SelectorObject0885dca8 *object)
{
    u8 selector = object->selector;

    if (selector == 101)
        return object->special >> 14;
    if (selector >= 5) {
        if (selector == 5 || selector == 6 || selector == 7 || selector == 8 ||
            selector == 12 || selector == 13 || selector == 14 ||
            selector == 16 || selector == 17)
            return FUN_0885be6c(context, object)[18];
        return FUN_0885be6c(context, object)[16];
    }
    return D_0897d9a0[selector][object->index].fields[18];
}
