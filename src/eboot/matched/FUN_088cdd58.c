/*
 * FUN_088cdd58: query an owned object, then return one field of the result.
 *
 * Main EBOOT, G2 small-frame matching. Names and types are hypotheses.
 */

typedef unsigned char u8;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

struct Result_088cdd58
{
    void *unknown_00[3];
    void *value_0c;
};

struct Object_088cdd58;
struct Methods_088cdd58
{
    void *unknown_00[11];
    struct Result_088cdd58 *(*query_2c)(struct Object_088cdd58 *);
};
struct Object_088cdd58
{
    struct Methods_088cdd58 *methods;
};

void *FUN_088cdd58(u8 *record)
{
    struct Object_088cdd58 *object =
        FIELD(record, struct Object_088cdd58 *, 0x3034);
    return object->methods->query_2c(object)->value_0c;
}
