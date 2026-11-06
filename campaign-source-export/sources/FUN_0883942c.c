/*
 * Purpose: uncompiled ABI view for the shared event dispatcher at
 * FUN_0883942c. This is not a whole candidate.
 *
 * Multiple callers establish the three input lanes as an event kind and two
 * forwarded pointers. The target conditionally calls the ABI-incomplete
 * clearing wrapper, writes a stack-local event object, and invokes an
 * indirect callback with that object, zero, and 32. The callback-table
 * object, callback prototype, event-object field meanings, and clear-wrapper
 * contract are not independently established.
 */
typedef unsigned char u8;

typedef void (*UnresolvedEventCallback)(void);

void FUN_0883942c(int kind, void *first, void *second);
