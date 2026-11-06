/* Purpose: resolve the table entry selected by an object byte and halfword index. */
typedef unsigned char u8;
typedef unsigned short u16;

struct SelectorObject0885be6c {
    u8 field_00;
    u8 selector;
    u16 index;
};

extern const u8 D_08980144[][40];
extern const u8 D_0897dffc[][40];
extern const u8 D_08984dac[][40];
extern const u8 D_08986f1c[][40];
extern const u8 D_089825ac[][40];
extern const u8 D_08992168[][28];
extern const u8 D_0898fa78[][28];
extern const u8 D_0898e71c[][28];
extern const u8 D_08990d64[][28];
extern const u8 D_0898ab2c[][80];
extern const u8 D_0898c01c[][80];
extern const u8 D_08991800[][28];
extern const u8 D_0898d5d4[][28];
extern const u8 D_089904dc[][28];
extern const u8 D_089891dc[][80];
extern const u8 D_0898f164[][28];
extern const u8 D_0898ddb4[][28];

const u8 *FUN_0885be6c(void *unused, const struct SelectorObject0885be6c *object)
{
    switch (object->selector) {
    case 0:
        return D_08980144[object->index];
    case 1:
        return D_0897dffc[object->index];
    case 2:
        return D_08984dac[object->index];
    case 3:
        return D_08986f1c[object->index];
    case 4:
        return D_089825ac[object->index];
    case 5:
        return D_08992168[object->index];
    case 6:
        return D_0898fa78[object->index];
    case 7:
        return D_0898e71c[object->index];
    case 8:
        return D_08990d64[object->index];
    case 9:
        return D_0898ab2c[object->index];
    case 10:
    case 11:
        return D_0898c01c[object->index];
    case 12:
        return D_08991800[object->index];
    case 13:
        return D_0898d5d4[object->index];
    case 14:
        return D_089904dc[object->index];
    case 16:
        return D_0898f164[object->index];
    case 17:
        return D_0898ddb4[object->index];
    case 15:
        return D_089891dc[object->index];
    default:
        return 0;
    }
}
