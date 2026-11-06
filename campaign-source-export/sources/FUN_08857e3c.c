/*
 * Purpose: retain the supported, incomplete state-management view for
 * FUN_08857e3c while its writable-state layout and call-site ABI are unknown.
 *
 * The function's default synthetic path performs only aligned word-state
 * traffic, returns a nonzero value, and conditionally reaches the allocator
 * free-list routine.  No declared caller or typed global binding currently
 * establishes the object layout.  This is intentionally a field view, not a
 * compilable candidate or a behavioral stub.
 */
typedef struct FUN_08857e3c_state_view {
    unsigned int unresolved_words[10];
} FUN_08857e3c_state_view;
