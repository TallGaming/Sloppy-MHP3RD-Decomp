/* Purpose: retain the verified, incomplete field/control-flow view for FUN_0885fba8.
 *
 * The target has a normal stack save, three conditional gates, one unsigned
 * halfword read, and one direct call to FUN_0885fb74.  The call precedes every
 * local gate, and a later gate tests its return register.  The callee now has
 * known null-or-record-plus-24 behavior, but the target still does not prove
 * which of its second and third incoming lanes supply category and index.  This
 * is a field view, not a whole candidate and is intentionally not compiled.
 */
#include <stdint.h>

typedef struct FUN_0885fba8_unknown_object {
    uint16_t observed_halfword;
} FUN_0885fba8_unknown_object;

/* The resolver's ABI comes from the verified callee work; wrapper lane mapping
 * and the returned record's ownership remain unresolved here. */
extern const uint8_t *FUN_0885fb74(void *unused, uint8_t category, uint16_t index);
