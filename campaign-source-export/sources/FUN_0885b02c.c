/*
 * Purpose: uncompiled ABI and routing view for the large audio dispatcher.
 *
 * Caller evidence preserves the third integer lane as a command pointer.  A
 * bounded zero-state artificial selector sweep reaches FUN_0885afd8 and
 * completes, while the full state-dependent dispatch and indirect callback
 * table remain unresolved.  This is not a complete candidate.
 */
typedef unsigned int u32;

struct AudioCommand {
    u32 selector;
};

int FUN_0885b02c(void *owner, void *state, struct AudioCommand *command);
