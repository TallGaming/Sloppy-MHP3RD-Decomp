/*
 * Candidate single-inheritance RTTI public-source lookup.  Its public GCC
 * 4.0.4 semantics are retained for diagnosis; target ownership and C++ ABI
 * configuration are not established.
 */
typedef struct RuntimeType RuntimeType;
typedef int (*FindPublicSource)(const RuntimeType *, int, const void *,
                                const RuntimeType *, const void *);

struct RuntimeType {
    const void **vtable;
    const char *name;
};

typedef struct SingleInheritanceType {
    RuntimeType common;
    const RuntimeType *base_type;
} SingleInheritanceType;

int FUN_08819854(const SingleInheritanceType *self, int source_to_destination,
                 const void *object, const RuntimeType *source,
                 const void *source_object)
{
    if (source_object == object && self->common.name == source->name)
        return 6;
    return ((FindPublicSource)self->base_type->vtable[5])(
        self->base_type, source_to_destination, object, source, source_object);
}
