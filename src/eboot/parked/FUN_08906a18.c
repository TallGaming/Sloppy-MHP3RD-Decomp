/*
 * FUN_08906a18: return a compact entry value together with its table index.
 *
 * The object layout and field meanings are hypotheses based on the accesses.
 */
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned short u16;

struct Entry08906a18 {
    s8 value00;
    u8 unknown01;
    u16 value02;
};

struct Object08906a18 {
    u8 unknown00[140];
    struct Entry08906a18 entries[];
};

struct Result08906a18 {
    s8 value00;
    u8 index01;
    u16 value02;
};

struct Result08906a18 FUN_08906a18(volatile struct Object08906a18 *object,
                                   unsigned int index)
{
    struct Result08906a18 result;

    index = (u8)index;
    result.value00 = object->entries[index].value00;
    result.index01 = index;
    result.value02 = object->entries[index].value02;
    return result;
}
