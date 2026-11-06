/* Purpose: retain the confirmed partial state and ABI view for FUN_088328e4.
 * The target has four resolved direct calls and mixed byte, halfword, and
 * word object accesses. Its complete function signature is not yet proved.
 */
#include <stdint.h>

typedef struct Fun088328e4PartialState {
    uint8_t unresolved_object_state;
} Fun088328e4PartialState;

/* No executable candidate is asserted while caller argument roles are open. */
