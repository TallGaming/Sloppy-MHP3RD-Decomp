/*
 * FUN_088d225c: query an object and return its first value or a sentinel.
 *
 * Main EBOOT, G2 small-function matching. Names and types are hypotheses.
 */

struct Result_088d225c
{
    int value_00;
};

struct Object_088d225c;
struct Methods_088d225c
{
    void *unknown_00[11];
    struct Result_088d225c *(*query_2c)(struct Object_088d225c *);
};
struct Object_088d225c
{
    struct Methods_088d225c *methods;
};

int FUN_088d225c(struct Object_088d225c *object)
{
    struct Result_088d225c *result = object->methods->query_2c(object);

    if (result != 0) {
        return result->value_00;
    }
    return (int)0xffbbd4fa;
}
