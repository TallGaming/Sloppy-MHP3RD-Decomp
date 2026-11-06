/*
 * Purpose: preserve the supported ABI field view for FUN_08847f6c.
 *
 * The declared interval is 772 bytes.  It has two verified direct caller
 * sites and twelve direct outgoing calls, but the required callee interfaces
 * are not yet verified.  This is an uncompiled partial view, not a candidate.
 */
typedef unsigned int fun_08847f6c_word;

typedef struct FUN_08847f6c_CallContext {
    fun_08847f6c_word opaque_word;
} FUN_08847f6c_CallContext;

/* The first argument is prepared at both verified caller sites. */
extern void FUN_08847f6c(FUN_08847f6c_CallContext *context, ...);
