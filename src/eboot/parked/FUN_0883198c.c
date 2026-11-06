/*
 * Purpose: retain verified call boundaries for FUN_0883198c.
 * This uncompiled field view records the confirmed three-slot byte-fill call.
 * The target also makes two packet/configuration-style calls and three calls
 * to an unresolved helper. Its return paths carry a status-sized constant, a
 * shared-state address, or the unresolved helper result; its public result
 * type cannot yet be selected.
 */
#include <stdint.h>

extern void *FUN_088ebb10(void *destination, int value, unsigned int size);

static void FUN_0883198c_abi_view(void *shared_state) {
    (void)FUN_088ebb10(shared_state, 0, 1328u);
    /* Other calls need their independent ABI and object-layout evidence. */
}

/*
 * Observed control topology: two distinct local work areas are supplied to
 * FUN_0882f2c0 and FUN_08831878 with the same seven configuration sources.
 * Keep this as a topology note until both callee declarations are proved.
 */
