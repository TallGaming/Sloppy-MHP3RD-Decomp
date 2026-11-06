/*
 * Purpose: retain the caller- and field-supported recovery boundary for
 * FUN_0883a9ac, a multi-stage controller reached from FUN_0882e570.
 *
 * This is an uncompiled partial field view, not a whole-function candidate.
 * The only direct caller establishes its argument lanes locally.  The target
 * itself consumes entry a0 in overlapping 32-bit chunks at offsets 0 and 3,
 * then later reuses equivalent chunks after stack staging.  This supports an
 * input-record pointer boundary but does not prove the record's logical
 * fields, size, ownership, or a callable result type.
 *
 * The target invokes two independently usable contexts: the verified typed
 * byte-fill thunk twice and the registered six-byte comparison helper once.
 * It also calls the registered global-field setter.  The remaining direct
 * calls are PARKED or unknown, so their arguments and meanings deliberately
 * remain absent here.  Several return-value branches and writes through
 * loaded bases make a complete natural body unsafe without those interfaces.
 */
typedef unsigned char FUN_0883a9ac_u8;
typedef struct FUN_0883a9ac_input FUN_0883a9ac_input;

extern void *FUN_088ebb10(void *destination, int value, unsigned int size);
extern int FUN_0883a8ac(const void *six_byte_value);
extern void FUN_08839fd4(int value);

/*
 * a0 is the only target entry GPR read before local definition.  The direct
 * caller does not forward its own entry slots, so this declaration records a
 * target-level pointer hypothesis only.  It is intentionally not a body or a
 * whole-function signature claim.
 */
typedef int (*FUN_0883a9ac_signature_hypothesis)(FUN_0883a9ac_input *input);
