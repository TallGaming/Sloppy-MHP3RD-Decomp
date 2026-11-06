/*
 * Purpose: test the selector ranges as explicit source control flow for the
 * independently verified resolver and record-byte access path.
 */
typedef unsigned char u8;
typedef unsigned short u16;

struct SelectorObject { u8 unused_0; u8 selector; u16 index; };
const u8 *FUN_0885be6c(void *context, const struct SelectorObject *object);

u8 FUN_0885dca8(void *context, const struct SelectorObject *object)
{
    u8 selector = object->selector;
    const u8 *record;

    if (selector >= 5 && selector <= 8) {
        record = FUN_0885be6c(context, object);
        return record[18];
    }
    if (selector >= 9 && selector <= 11) {
        record = FUN_0885be6c(context, object);
        return record[16];
    }
    if (selector >= 12 && selector <= 14) {
        record = FUN_0885be6c(context, object);
        return record[18];
    }
    if (selector == 15) {
        record = FUN_0885be6c(context, object);
        return record[16];
    }
    if (selector >= 16 && selector <= 17) {
        record = FUN_0885be6c(context, object);
        return record[18];
    }
    return 0;
}
