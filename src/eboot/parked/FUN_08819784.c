/*
 * Candidate single-inheritance RTTI dynamic-cast traversal.  This expresses
 * the public GCC 4.0.4 tinfo.cc semantics; target ownership and full C++ ABI
 * configuration remain unproved.
 */
typedef struct RuntimeType RuntimeType;
typedef struct DynamicCastResult DynamicCastResult;

typedef int (*DoDynamicCast)(const RuntimeType *, int, int,
                             const RuntimeType *, const void *,
                             const RuntimeType *, const void *,
                             DynamicCastResult *);

struct RuntimeType {
    const void **vtable;
    const char *name;
};

struct DynamicCastResult {
    const void *destination_pointer;
    int whole_to_destination;
    int whole_to_source;
    int destination_to_source;
    int whole_details;
};

typedef struct SingleInheritanceType {
    RuntimeType common;
    const RuntimeType *base_type;
} SingleInheritanceType;

int FUN_08819784(const SingleInheritanceType *self, int source_to_destination,
                 int access_path, const RuntimeType *destination,
                 const void *object, const RuntimeType *source,
                 const void *source_object, DynamicCastResult *result)
{
    if (self->common.name == destination->name) {
        result->destination_pointer = object;
        result->whole_to_destination = access_path;
        if (source_to_destination >= 0)
            result->destination_to_source =
                (const char *)object + source_to_destination == source_object ? 6 : 1;
        else if (source_to_destination == -2)
            result->destination_to_source = 1;
        return 0;
    }
    if (object == source_object && self->common.name == source->name) {
        result->whole_to_source = access_path;
        return 0;
    }
    return ((DoDynamicCast)self->base_type->vtable[7])(
        self->base_type, source_to_destination, access_path, destination,
        object, source, source_object, result);
}
