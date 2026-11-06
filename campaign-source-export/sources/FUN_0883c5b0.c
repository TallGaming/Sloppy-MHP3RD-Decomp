/*
 * Purpose: retain the supported ABI/ownership field view for FUN_0883c5b0.
 *
 * This is not a whole-function candidate and must not be compiled as one.
 * Direct caller evidence supplies an object pointer in the first integer
 * lane. The target first invokes FUN_0883c560 with that object. Synthetic
 * artificial-state probes show a later path invokes FUN_08902be4,
 * FUN_088f9fc8, and FUN_0883bcbc, but the latter two parked callee contracts
 * and their object-field provenance are not sufficient for a callable C body.
 */

typedef struct Fun0883c5b0Object Fun0883c5b0Object;

/* Supported first-lane view only; return and full object layout are open. */
void FUN_0883c5b0_abi_view(Fun0883c5b0Object *object)
{
    (void)object;
}
