/*
 * Purpose: retain the callback-local field and registration view without
 * inventing the event dispatcher callback signature.
 *
 * Verified FUN_08832600 registers this true code pointer in event slot six
 * along with two context pointers.  That establishes callback ownership only:
 * the dispatcher-facing argument lanes remain unproved.  Target-local flow
 * conditionally updates byte and halfword fields and has one reviewed helper
 * call, FUN_08839fd4, whose established interface stores an integer in global
 * state.  The incomplete event layout and branch predicates preclude a whole
 * candidate.
 */

typedef unsigned char u8;
typedef unsigned short u16;

extern void FUN_08839fd4(int value);

/* Callback argument and event field ownership remain unresolved. */
