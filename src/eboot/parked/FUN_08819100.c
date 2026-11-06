/*
 * Purpose: target-specific semantic recovery for FUN_08819100.  Its globals,
 * resume/rethrow, begin-catch, and terminate call order matches GCC 4.0.4
 * __cxa_rethrow().
 *
 * UNCOMPILED: names and member relationships below express the public C++ ABI
 * hypothesis only.  Target field offsets, the exception-class constant, the
 * unwind implementation, generated headers, and EH metadata are unproved.
 * This is not an unchanged-public-unit or byte-match claim.
 */
typedef struct CxaException CxaException;
typedef struct UnwindException UnwindException;
typedef struct {
    CxaException *caught_exceptions;
    unsigned int uncaught_exceptions;
} CxaEhGlobals;

extern CxaEhGlobals *FUN_088188cc(void); /* __cxa_get_globals candidate */
extern void FUN_0881fb40(UnwindException *exception); /* resume-or-rethrow candidate */
extern void *FUN_088185f4(UnwindException *exception); /* begin-catch candidate */
extern void FUN_08819014(void); /* std::terminate candidate */

void FUN_08819100(void)
{
    CxaEhGlobals *globals = FUN_088188cc();
    CxaException *header = globals->caught_exceptions;

    globals->uncaught_exceptions += 1;
    if (header != 0) {
        /* Public branch: clear foreign caught state, else negate handlerCount. */
        /* Target class test and member offsets remain intentionally unspelled. */
        FUN_0881fb40((UnwindException *)header);
        (void)FUN_088185f4((UnwindException *)header);
    }
    FUN_08819014();
}
