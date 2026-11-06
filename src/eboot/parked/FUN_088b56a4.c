/*
 * FUN_088b56a4: register an indexed object and optionally notify its method.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: index arithmetic differs and the global base lacks a symbol.
 */

typedef unsigned char u8;
typedef unsigned short u16;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

struct Object_088b56a4;
struct Methods_088b56a4
{
    void *unknown_00[35];
    void (*method_8c)(struct Object_088b56a4 *, void *);
};
struct Object_088b56a4
{
    struct Methods_088b56a4 *methods;
};

extern u8 *D_08abce80;

void FUN_088b56a4(u8 *table, u8 *object, u16 index, u8 notify)
{
    FIELD(table, void *, 0x08 + index * 4) = object;
    FIELD(object, u16, 0x60) = index;
    object[0x63] = index;
    if (notify != 0) {
        struct Object_088b56a4 *typed = (struct Object_088b56a4 *)object;
        typed->methods->method_8c(typed, D_08abce80 + index * 252 + 48);
    }
}
