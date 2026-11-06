/*
 * Purpose: preserve the independently supportable ABI view for the 196-byte
 * exception-unwind phase-two routine at FUN_0881f688.
 *
 * The equal-size GCC 4.0.4 _Unwind_RaiseException_Phase2 lead is not an exact
 * identification: the fixed Group A comparison has 17 ordinary word
 * differences.  This file is intentionally an uncompiled field/ABI draft,
 * not a source candidate.  The target's three direct dependencies include
 * abort plus two still-PARKED functions, so their prototypes and the context
 * ownership must be recovered before a whole natural-C body is attempted.
 */

typedef unsigned int mhp3rd_unwind_word;
typedef unsigned long long mhp3rd_unwind_class;

/* GCC's public unwind ABI supports this header layout.  The target's exact
 * exception/context ownership and private-word use remain unverified. */
struct mhp3rd_unwind_exception_header {
    mhp3rd_unwind_class exception_class;
    void (*exception_cleanup)(int reason, struct mhp3rd_unwind_exception_header *header);
    mhp3rd_unwind_word private_1;
    mhp3rd_unwind_word private_2;
};

struct mhp3rd_unwind_context; /* Layout and producer are still unresolved. */

/* Hypothesis from the public phase-two interface, pending caller proof:
 * FUN_0881f688(exception, context) -> unwind reason code.
 * No body is supplied because the target's two non-library callee ABIs are
 * PARKED and the public body is demonstrably non-exact under Group A. */
extern int FUN_0881f688(struct mhp3rd_unwind_exception_header *exception,
                        struct mhp3rd_unwind_context *context);
