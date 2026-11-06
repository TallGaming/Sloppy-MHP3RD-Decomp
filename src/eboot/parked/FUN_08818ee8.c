/*
 * Purpose: document the recovery path used after an unexpected handler throws
 * again.  The original routine is C++ (__cxa_call_unexpected) and contains a
 * real try/catch cleanup object, so this deliberately uncompiled C partial
 * records its saved state and catch-path decisions without inventing a C ABI
 * for C++ exception dispatch.
 */

typedef int bool;
#define false 0
#define true 1

typedef int unwind_sword;

struct type_info;
struct lsda_header_info {
    const unsigned char *Start;
    const unsigned char *LPStart;
    const unsigned char *ttype_base;
    const unsigned char *TType;
    const unsigned char *action_table;
    unsigned char ttype_encoding;
    unsigned char call_site_encoding;
};

struct cxa_exception_prefix {
    struct type_info *exception_type;       /* +0x00 */
    void *exception_destructor;             /* +0x04 */
    void (*unexpected_handler)(void);       /* +0x08 */
    void (*terminate_handler)(void);        /* +0x0c */
    void *next_exception;                   /* +0x10 */
    int handler_count;                      /* +0x14 */
    unwind_sword handler_switch_value;      /* +0x18 */
    const unsigned char *action_record;     /* +0x1c */
    const unsigned char *language_specific_data; /* +0x20 */
    void *catch_temp;                       /* +0x24 */
};

struct cxa_eh_globals {
    struct cxa_exception_prefix *caught_exceptions;
    unsigned int uncaught_exceptions;
};

extern void *cxa_begin_catch(void *unwind_exception);
extern struct cxa_eh_globals *cxa_get_globals_fast(void);
extern const unsigned char *parse_lsda_header(void *context,
                                               const unsigned char *lsda,
                                               struct lsda_header_info *info);
extern bool check_exception_spec(struct lsda_header_info *info,
                                 const struct type_info *throw_type,
                                 void *thrown_object,
                                 unwind_sword filter_value);
extern void cxx_terminate(void (*handler)(void));

/*
 * This is the body reached by __cxa_call_unexpected's catch clause.  The
 * surrounding begin-catch, unexpected call, end-catch cleanup, rethrow, and
 * bad_exception construction remain C++-ABI dependencies, not C substitutes.
 */
static void
recover_after_unexpected_throw(const unsigned char *saved_lsda,
                               unwind_sword saved_filter,
                               void (*saved_terminate)(void),
                               void *saved_type_table_base,
                               struct lsda_header_info *info,
                               const struct type_info *bad_exception_type)
{
    struct cxa_eh_globals *globals = cxa_get_globals_fast();
    struct cxa_exception_prefix *new_exception = globals->caught_exceptions;
    void *new_object = new_exception + 1;

    /* The parser repopulates TType while this recovery path restores its base. */
    info->ttype_base = (const unsigned char *)saved_type_table_base;
    parse_lsda_header(0, saved_lsda, info);

    if (check_exception_spec(info, new_exception->exception_type,
                             new_object, saved_filter))
        return; /* Original code rethrows this exception. */

    if (check_exception_spec(info, bad_exception_type, 0, saved_filter))
        return; /* Original code constructs and throws std::bad_exception. */

    cxx_terminate(saved_terminate);
}
