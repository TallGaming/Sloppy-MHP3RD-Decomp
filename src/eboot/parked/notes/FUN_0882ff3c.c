/*
 * Purpose: append a two-byte event payload to a state-owned circular record
 * area and advance its two unsigned halfword cursors.
 *
 * Evidence: four direct callers preserve the first argument as the state
 * pointer and supply the second argument as the event value.  The local
 * semantic review records unsigned-halfword reads at offsets 0 and 2, payload
 * byte writes at state + cursor + 24 and +25, and a 1404-byte boundary test.
 *
 * This is deliberately declaration-only.  The reset/global write has no
 * established public D_ binding, while caller ownership of the state layout
 * is still unproved.  It must not be compiled or registered as a match.
 */
typedef unsigned short MhpU16;

typedef struct MhpEventCursor MhpEventCursor;

void FUN_0882ff3c(MhpEventCursor *state, MhpU16 event_value);
