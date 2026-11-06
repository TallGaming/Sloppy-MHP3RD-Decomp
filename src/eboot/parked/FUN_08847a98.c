/*
 * FUN_08847a98 field view.
 *
 * The sole caller supplies one service-object pointer.  The target performs
 * one 32-bit write at byte offset 0x2ab4.  Artificial runs show that this
 * stored value is independent of the input address and mock return values.
 * The value's binding, the second absolute zero store, and the conditional
 * no-op call sequence remain unresolved.  This intentionally partial view
 * is not a build candidate.
 */
#include <stdint.h>

typedef struct Service_08847a98 {
    uint8_t unknown_0000[0x2ab4];
    uint32_t field_2ab4;
} Service_08847a98;

void FUN_08847a98_field_view(Service_08847a98 *service, uint32_t value)
{
    service->field_2ab4 = value;
}
