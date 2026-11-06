/*
 * Candidate single-inheritance RTTI upcast traversal.  The ABI and field
 * offsets are inferred from the immediate base-helper call and public GCC
 * 4.0.4 tinfo.cc; target ownership and complete C++ configuration are not
 * established.
 */
typedef struct RuntimeType RuntimeType;
typedef struct UpcastResult UpcastResult;

typedef int (*DoUpcast)(const RuntimeType *, const RuntimeType *,
                        const void *, UpcastResult *);

struct RuntimeType {
    const void **vtable;
    const char *name;
};

struct UpcastResult {
    const void *dst_ptr;
    int part_to_dst;
    int src_details;
    const RuntimeType *base_type;
};

typedef struct SingleInheritanceType {
    RuntimeType common;
    const RuntimeType *base_type;
} SingleInheritanceType;

extern int FUN_088196d4(const RuntimeType *, const RuntimeType *,
                         const void *, UpcastResult *);

int FUN_0881970c(const SingleInheritanceType *self,
                 const RuntimeType *destination, const void *object,
                 UpcastResult *result)
{
    if (FUN_088196d4(&self->common, destination, object, result))
        return 1;
    return ((DoUpcast)self->base_type->vtable[6])(self->base_type,
                                                   destination, object,
                                                   result);
}
