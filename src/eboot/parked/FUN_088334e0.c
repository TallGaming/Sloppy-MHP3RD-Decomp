/*
 * Purpose: retain the evidence-backed incomplete layout view for
 * FUN_088334e0.  This is not a compilable whole-function candidate.
 *
 * The target has six direct calls.  Its conditional path consumes the
 * return value of the sixth call, and five paired unaligned load/store
 * transfers establish a 20-byte transfer from the first callee result to
 * incoming argument lane one.  The first callee is a registered address
 * wrapper, but its pointed-object type is only a u16 hypothesis and cannot
 * prove the needed 20-byte range.  One caller owner is not registered as C;
 * four callees remain PARKED, so complete parameter ownership and ABI are
 * not proved.
 */
typedef struct FUN_088334e0_Payload20 {
    unsigned char bytes[20];
} FUN_088334e0_Payload20;

/* The exact parameter positions and payload owner remain unresolved. */
