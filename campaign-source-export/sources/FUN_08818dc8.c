/*
 * Purpose: recover the GCC libsupc++ exception-personality helper that tests
 * whether a thrown object can be caught as CATCH_TYPE, adjusting its pointer
 * when RTTI says that it can.  This is an uncompiled semantic partial: the
 * PSP C++ ABI's actual std::type_info vtable declarations are not present.
 */

typedef int bool;
#define false 0
#define true 1

struct type_info;

/*
 * These two calls are virtual std::type_info operations.  The member-like
 * declarations document the recovered ABI contract only; their concrete
 * vtable layout must come from the target libsupc++ configuration.
 */
extern bool type_info_is_pointer(const struct type_info *type);
extern bool type_info_do_catch(const struct type_info *catch_type,
                               const struct type_info *throw_type,
                               void **thrown_ptr,
                               unsigned int outer);

static bool
get_adjusted_ptr(const struct type_info *catch_type,
                 const struct type_info *throw_type,
                 void **thrown_ptr_p)
{
    void *thrown_ptr = *thrown_ptr_p;

    /* Pointer exceptions carry the actual pointer in the exception object. */
    if (type_info_is_pointer(throw_type))
        thrown_ptr = *(void **)thrown_ptr;

    if (type_info_do_catch(catch_type, throw_type, &thrown_ptr, 1)) {
        *thrown_ptr_p = thrown_ptr;
        return true;
    }

    return false;
}
