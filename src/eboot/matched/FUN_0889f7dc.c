/*
 * FUN_0889f7dc: query an object and store a short in the returned record.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned short u16;

struct Object_0889f7dc;
struct Methods_0889f7dc
{
    void *unknown_00[17];
    u8 *(*method_44)(struct Object_0889f7dc *);
};
struct Object_0889f7dc
{
    struct Methods_0889f7dc *methods;
};

void FUN_0889f7dc(struct Object_0889f7dc *object, u16 value)
{
    u8 *record = object->methods->method_44(object);
    *(u16 *)(record + 0x76) = value;
}
