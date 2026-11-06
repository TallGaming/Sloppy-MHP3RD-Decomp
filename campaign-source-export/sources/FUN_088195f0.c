/*
 * Candidate __class_type_info::__do_catch relation test.  The receiver and
 * source records each expose a vtable pointer at word zero and a name pointer
 * at word one.  The class/runtime owner remains unproved.
 */
typedef struct RuntimeType RuntimeType;
typedef int (*UpcastRelation)(const RuntimeType *source,
                              const RuntimeType *receiver,
                              void **object);

struct RuntimeType {
    void **vtable;
    const char *name;
};

int FUN_088195f0(const RuntimeType *receiver, const RuntimeType *source,
                 void **object, unsigned int depth)
{
    if (receiver->name == source->name)
        return 1;
    if (depth >= 4)
        return 0;
    return ((UpcastRelation)source->vtable[5])(source, receiver, object);
}
