/*
 * FUN_08848aac partial argument and field view.
 *
 * One caller reaches this function.  Target reads selector bytes +1 and +2
 * from its second lane.  The first lane is used as an object base, including
 * a 32-bit field at +0x20.  The full descriptor ownership and helper
 * contracts are unresolved, so this field view is not a build candidate.
 */
#include <stdint.h>

typedef struct Owner_08848aac {
    uint8_t unknown_0000[0x20];
    uint32_t field_0020;
} Owner_08848aac;

typedef struct Selector_08848aac {
    uint8_t unknown_00;
    uint8_t type;
    uint8_t variant;
} Selector_08848aac;

void FUN_08848aac_field_view(Owner_08848aac *owner,
                              const Selector_08848aac *selector)
{
    uint8_t type = selector->type;
    uint8_t variant = selector->variant;

    (void)owner;
    (void)type;
    (void)variant;
}
