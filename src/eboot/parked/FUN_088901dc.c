/* Purpose: retain the verified incomplete control/effect view for FUN_088901dc.
 *
 * This framed target has thirteen conditional gates, three calls to PARKED
 * callees.  Two direct-call results feed later local gates.  It makes seven
 * non-stack word writes, two byte writes, and a final compatible jump to the verified
 * byte-fill wrapper FUN_088ebb10.  No direct caller or callback-table binding
 * establishes its parameter lanes or destination object ownership.  This is a
 * field view, not a whole candidate and is intentionally not compiled.
 */
#include <stdint.h>

typedef struct FUN_088901dc_unknown_destination {
    uint8_t observed_byte[2];
} FUN_088901dc_unknown_destination;

extern void *FUN_088ebb10(void *destination, int value, unsigned int size);
