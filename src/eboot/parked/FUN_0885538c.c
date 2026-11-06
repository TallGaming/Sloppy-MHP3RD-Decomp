/*
 * Field and ABI view for FUN_0885538c.
 *
 * This is deliberately an uncompiled recovery note, not a candidate body.
 * The only verified direct dependency is FUN_088552b4, which accepts an
 * 8-bit table number and returns a 16-bit entry.  The sole known incoming
 * game edge is FUN_08855d14; a separate parked caller reaches that wrapper
 * with an owner pointer, an 8-bit number, and two word-sized values.  The
 * wrapper-to-target argument preservation remains unproved, so this file
 * records the supported dependency boundary without inventing target fields
 * or a callable prototype.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

/* Verified public C boundary; target-side source and argument forwarding TBD. */
extern u16 FUN_088552b4(u8 number);

/*
 * Context only: this describes the observed upstream wrapper call shape, not
 * FUN_0885538c's signature.  Its word values may be state, resources, or
 * callback-related data and must not be assigned semantics until the wrapper
 * and its target call site are reconciled.
 */
typedef struct FUN_0885538c_UpstreamContext {
    void *owner;
    u8 number;
    u32 first_word;
    u32 second_word;
} FUN_0885538c_UpstreamContext;
