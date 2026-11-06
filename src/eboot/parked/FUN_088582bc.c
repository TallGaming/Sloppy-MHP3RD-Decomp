/*
 * Purpose: retain the supported incomplete state-status view of
 * FUN_088582bc while the two writable-object bindings and their field layouts
 * remain unknown.
 *
 * A typed caller establishes an int(void) result consumed as a status.  The
 * synthetic state witnesses support a priority relationship: a nonzero reset
 * condition performs word-sized bulk state clearing and returns zero; absent
 * that condition, a nonzero status reports through known output wrappers and
 * returns a negative status.  Names, storage layout, message data, and the
 * precise error value are unproved.  This is a field view, not a compilable
 * candidate or a behavioral stub.
 */
typedef struct FUN_088582bc_state_view {
    unsigned int unresolved_words[2];
} FUN_088582bc_state_view;
