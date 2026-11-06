/*
 * Candidate __class_type_info::__do_upcast recursive helper.  The known
 * result fields and enum values come from public tinfo.cc; target ownership
 * and C++ configuration remain unproved.
 */
typedef struct RuntimeType {
    void **vtable;
    const char *name;
} RuntimeType;

typedef struct UpcastResult {
    const void *dst_ptr;
    int part_to_dst;
    int src_details;
    const RuntimeType *base_type;
} UpcastResult;

int FUN_088196d4(const RuntimeType *self, const RuntimeType *destination,
                 const void *object, UpcastResult *result)
{
    if (self->name != destination->name)
        return 0;
    result->dst_ptr = object;
    result->part_to_dst = 6;
    result->base_type = (const RuntimeType *)8;
    return 1;
}
