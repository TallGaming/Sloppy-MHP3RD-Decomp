/*
 * Purpose: retain the observed entry ABI and state-transition boundary for
 * FUN_0881f74c without assigning it an unwind-runtime identity from nearby
 * functions.
 *
 * Entry-register review shows that all four PSP EABI integer argument slots
 * are consumed before local replacement.  The body has five direct calls and
 * no direct indirect-call instruction, so it does not itself dispatch an
 * observable callback.  Its callee state contracts remain unresolved.
 *
 * This is deliberately an uncompiled ABI draft, not a whole C candidate:
 * callers and four non-library dependencies are PARKED, and the public unwind
 * references are only non-exact near-size leads.
 */

typedef unsigned int mhp3rd_word;

/* Each slot may be a scalar, pointer, or a member of a larger exception/state
 * protocol.  Caller recovery must replace these opaque words with real types. */
extern mhp3rd_word FUN_0881f74c(mhp3rd_word argument_0,
                                mhp3rd_word argument_1,
                                mhp3rd_word argument_2,
                                mhp3rd_word argument_3);
