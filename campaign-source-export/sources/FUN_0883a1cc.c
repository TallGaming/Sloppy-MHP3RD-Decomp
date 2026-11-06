/*
 * Purpose hypothesis: scan state-owned six-byte records against a caller
 * record, returning success after a matching record selects a byte-fill path.
 *
 * This is an uncompiled field/ABI view, not a whole-function candidate. The
 * target makes repeated calls to the verified six-byte comparator
 * FUN_088305b4 and has a conditional tail transfer to the verified byte-fill
 * thunk FUN_088ebb10. The state layout, incoming parameter roles, loop bound,
 * and byte-fill arguments remain unproved by the available direct callers.
 */

typedef unsigned char u8;

typedef struct UnknownRecordState {
    u8 unresolved;
} UnknownRecordState;

/* The true global binding and its record layout are unresolved. */
extern UnknownRecordState *D_0883a1cc_state;

/* Verified registered dependency: returns nonzero when two six-byte records differ. */
extern int FUN_088305b4(const void *left, const void *right);

/* Verified typed tail thunk: void *(void *destination, int value, unsigned int size). */
extern void *FUN_088ebb10(void *destination, int value, unsigned int size);

/*
 * Deliberately not defined: caller flow does not yet prove the signature or
 * object offsets needed to express the scan and byte-fill behavior honestly.
 */
