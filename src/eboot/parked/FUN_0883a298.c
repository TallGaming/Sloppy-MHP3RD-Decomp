/*
 * Purpose: retain the recovered control and local-state boundary for
 * FUN_0883a298 without inventing the unbound helper APIs.
 *
 * This is an uncompiled partial field view, not a whole-function candidate.
 * The target has one direct caller and does not read an integer entry slot
 * before locally defining it.  Its 240-byte frame carries most recovered
 * memory traffic.  It performs two verified six-byte record comparisons and
 * one verified six-byte nonzero test before an ordered sequence of unbound
 * state helpers, three dispatch calls, and two local finalization calls.
 *
 * The three conditional paths, repeated dispatch sites, and stack-local
 * state make it a game-side coordinator rather than evidence of a standalone
 * library body.  The object binding behind the non-stack accesses and the
 * prototypes/return meanings of nine dependencies are still unresolved, so
 * a C body or named state structure would be fabricated.
 */
typedef unsigned char FUN_0883a298_byte;
typedef struct FUN_0883a298_shared_state FUN_0883a298_shared_state;

/* Supported only as a local-layout observation; field meanings are unknown. */
typedef struct FUN_0883a298_local_state_view {
    FUN_0883a298_byte storage[240];
} FUN_0883a298_local_state_view;

/* Confirmed callees whose declared behavior constrains the coordinator. */
extern int FUN_08830584(const FUN_0883a298_byte *record);
extern int FUN_08830550(const signed char *values);

/*
 * Signature hypothesis: no consumed integer entry slots were observed.
 * It remains a hypothesis because FPR entry slots and the shared-state
 * relocation require independent recovery before a callable definition.
 */
typedef void (*FUN_0883a298_signature_hypothesis)(void);
