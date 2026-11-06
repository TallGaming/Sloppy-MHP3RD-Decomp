/*
 * FUN_089068a8: look up a resource and pass it to an object-field update.
 *
 * The object layout, resource owner, and operation meanings are hypotheses.
 */
typedef unsigned char u8;

struct Object089068a8 {
    u8 unknown00[94];
    u8 resource_index5e;
};

extern void *volatile D_08a2919c;
extern void *D_09e5e1a8;
extern void *FUN_09c9aba0(void *owner, int resource_id);
extern void FUN_0882d66c(void *context, void *field, int size, void *resource);

void FUN_089068a8(struct Object089068a8 *object)
{
    void *context;
    void *resource;

    context = D_08a2919c;
    resource = FUN_09c9aba0(D_09e5e1a8, object->resource_index5e + 648);
    FUN_0882d66c(context, (u8 *)object + 34, 30, resource);
}
