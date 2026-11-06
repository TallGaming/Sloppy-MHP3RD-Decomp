/*
 * Purpose: preserve the supported partial ABI and data-flow view for
 * FUN_08830038.  This is not a whole-function candidate and is not compiled.
 *
 * The target accepts a source pointer in its second integer argument and
 * passes that pointer to verified memcpy wrapper FUN_088ebb18.  The target
 * builds the memcpy destination from internal state plus 24 bytes.  The copy
 * size originates in the target's third argument or caller-derived state;
 * its type is not yet resolved.  Its remaining
 * loads/stores touch two-byte-aligned fields through the first argument and
 * saved internal pointers.  Four direct callers forward arguments zero and
 * one unchanged.  They supply argument two from a caller-specific value.
 * The target does not consume the incoming fourth integer argument.
 */

typedef unsigned short FUN_08830038_U16;

typedef struct FUN_08830038_PartialState {
    /* Observed two-byte-aligned accesses; ownership and full layout unknown. */
    FUN_08830038_U16 field_00;
    FUN_08830038_U16 field_02;
} FUN_08830038_PartialState;

/*
 * Candidate contract, intentionally incomplete:
 *   void FUN_08830038(FUN_08830038_PartialState *state,
 *                     const void *source, unsigned int unresolved_size);
 *
 * The target also uses an unresolved internal pointer and performs a copy to
 * its +24 byte field.  Do not compile this view until caller ownership and
 * the size-source type are recovered.
 */
