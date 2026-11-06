/*
 * FUN_0883d9b8: unresolved record predicate/dispatch recovery field view.
 *
 * This is deliberately not a callable candidate.  Direct call-flow proves
 * twenty byte-membership calls, one five-byte-list membership call, and one
 * word-mask predicate call, but does not yet bind this function's incoming
 * lanes to a record type or establish the branch/result composition.  Keeping
 * those facts as declarations avoids inventing a behavior-only stub.
 */

typedef unsigned char u8;
typedef unsigned int u32;

/* Independently supported PARKED dependency contracts, usable only after the
 * target's per-site lane flow is recovered. */
extern int FUN_088a52b0(const u8 *record, u8 value);
extern int FUN_088a52f8(void *object, signed char value);

/* Registered C dependency: tests a caller-supplied mask against record+0xca0. */
extern int FUN_088a6624(void *record, u32 mask);

struct FUN_0883d9b8_recovery_facts {
    unsigned int byte_membership_call_sites; /* 20 */
    unsigned int list_membership_call_sites; /* 1 */
    unsigned int word_mask_call_sites;       /* 1 */
};
