/*
 * Purpose: retain the evidence-bounded stateful thread-initialization view
 * for FUN_088214c8 without assigning unproved PSP import identities.
 *
 * The target has no discovered direct callers but consumes two integer entry
 * slots before its first import call; the second slot is also used as a word
 * load base.  It reads and writes nonstack state, obtains system time, then
 * calls verified PSP thread creation and start imports.  The create result is
 * tested by target control flow before the start call.  The normal return
 * path contains one target write to the word return register after start.
 *
 * Three surrounding PSP import targets have no verified local binding or
 * prototype.  Consequently, the object layouts, input meanings, created
 * thread entry/arguments, return contract, and ownership are unresolved.
 * This is an UNCOMPILED PARTIAL, not a candidate body.
 */

typedef unsigned int mhp3rd_word;

static mhp3rd_word FUN_088214c8_thread_setup_view(
    mhp3rd_word first_input,
    const mhp3rd_word *second_input);
