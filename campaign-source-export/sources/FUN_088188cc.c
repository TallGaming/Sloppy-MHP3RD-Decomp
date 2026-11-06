/*
 * Purpose: obtain the per-thread exception state used by the adjacent C++ ABI
 * routines.  Caller evidence establishes the returned two-word prefix:
 * caught exception chain at offset 0 and uncaught-exception count at offset 4.
 *
 * This is deliberately uncompiled.  The actual fallback object, thread-key
 * state, and three helper bindings remain untyped, so treating this as a
 * normal game-C unit would invent data ownership and an ABI configuration.
 */
struct cxa_eh_globals_partial {
    void *caught_exceptions;
    unsigned int uncaught_exceptions;
};

struct cxa_eh_globals_partial *FUN_088188cc(void)
{
    /*
     * Hypothesis from the GCC 4.0.4 exception-runtime shape: select the
     * single-thread fallback or the current thread's exception globals.
     * The tested body calls three unresolved runtime helpers and performs no
     * direct writes to this returned two-word prefix.
     */
    return (struct cxa_eh_globals_partial *)0; /* unresolved storage binding */
}
