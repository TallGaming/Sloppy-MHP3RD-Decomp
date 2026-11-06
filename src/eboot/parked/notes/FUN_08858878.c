/*
 * FUN_08858878: uncompiled ownership and ABI field view.
 *
 * Direct-edge evidence establishes one unresolved game caller and two calls to
 * newlib printf plus one call to newlib puts.  Conservative caller provenance
 * shows four word lanes at its call site: three loaded values and the caller's
 * second input lane.  The caller also reads the result register after the call.
 * This supports a game-owned diagnostic/selection routine, but does not
 * establish C types, result semantics, or the data objects controlling its
 * branches.
 *
 * This declaration is a word-lane ABI field view, not a behavioral recovery:
 * names describe provenance rather than a claimed game interface.  No
 * placeholder body is supplied.
 */

typedef unsigned int fun_08858878_word_t;

fun_08858878_word_t FUN_08858878(
    fun_08858878_word_t loaded_0,
    fun_08858878_word_t forwarded_1,
    fun_08858878_word_t loaded_2,
    fun_08858878_word_t loaded_3);
