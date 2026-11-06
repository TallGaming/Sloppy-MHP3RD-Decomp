/* Readable, uncompiled ABI reconstruction of GCC libsupc++ __cxa_begin_catch.
 * This target is a library-identification draft, not a match claim. */
typedef int s32;
typedef unsigned int u32;

struct cxa_exception_prefix {
    void *exception_type; void *exception_destructor;
    void *unexpected_handler; void *terminate_handler;
    struct cxa_exception_prefix *next_exception; /* +0x10 */
    s32 handler_count;                            /* +0x14 */
    u32 handler_switch_value; const void *action_record;
    const void *language_specific_data; void *catch_temp;
    void *adjusted_ptr;                           /* +0x28 */
    u32 unwind_exception_class_lo;                /* +0x30 */
    u32 unwind_exception_class_hi;                /* +0x34 */
};
struct cxa_eh_globals {
    struct cxa_exception_prefix *caught_exceptions; /* +0x00 */
    s32 uncaught_exceptions;                        /* +0x04 */
};
extern struct cxa_eh_globals *cxa_get_globals(void);
extern void cxx_terminate(void);

/* `unwind_exception` is header + 0x30.  Class words are the PSP ABI spelling
 * of __gxx_exception_class; all other names remain binding hypotheses. */
void *FUN_088185f4_begin_catch_partial(void *unwind_exception)
{
    struct cxa_exception_prefix *header =
        (struct cxa_exception_prefix *)unwind_exception - 1;
    struct cxa_eh_globals *globals = cxa_get_globals();
    struct cxa_exception_prefix *previous = globals->caught_exceptions;
    if (header->unwind_exception_class_lo != 0x432b2b00u ||
        header->unwind_exception_class_hi != 0x474e5543u) {
        if (previous != 0) cxx_terminate();
        globals->caught_exceptions = header;
        return 0;
    }
    if (header->handler_count < 0)
        header->handler_count = -header->handler_count + 1;
    else
        header->handler_count += 1;
    globals->uncaught_exceptions -= 1;
    if (header != previous) {
        header->next_exception = previous;
        globals->caught_exceptions = header;
    }
    return header->adjusted_ptr;
}
