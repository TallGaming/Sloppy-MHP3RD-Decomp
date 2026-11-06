/*
 * FUN_088d229c: query an object and return its second value or minus one.
 *
 * Main EBOOT, G2 small-function matching. Names and types are hypotheses.
 */

struct Result_088d229c
{
    int unknown_00;
    int value_04;
};

struct Object_088d229c;
struct Methods_088d229c
{
    void *unknown_00[11];
    struct Result_088d229c *(*query_2c)(struct Object_088d229c *);
};
struct Object_088d229c
{
    struct Methods_088d229c *methods;
};

int FUN_088d229c(struct Object_088d229c *object)
{
    struct Result_088d229c *result = object->methods->query_2c(object);

    if (result != 0) {
        return result->value_04;
    }
    return -1;
}
