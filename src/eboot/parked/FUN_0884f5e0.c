/*
 * FUN_0884f5e0 field view.
 *
 * This is the UI/render-state orchestration region reached by
 * FUN_08850ee4.  It performs three descriptor-resolver calls, initializes
 * two frame-local records, and forwards a shared selector object's byte at
 * +0x1 and halfwords at +0x2, +0x6, and +0xa to render helpers.
 * It also calls the page wrapper once; that wrapper now has independently
 * observed low-byte page/count lanes, but this caller's saved-lane origins
 * have not been reconstructed.
 *
 * The object providing the selector pointer, the meanings of the local
 * records, and the return/value contracts of eleven parked dependencies are
 * not recovered.  Consequently this is deliberately an uncompiled field
 * view, not a whole-function candidate.
 */
#include <stdint.h>

typedef struct SelectorFields {
    uint8_t unknown_00;
    uint8_t selector;
    uint16_t object_id;
    uint16_t unknown_04;
    uint16_t value_06;
    uint16_t unknown_08;
    uint16_t value_0a;
} SelectorFields;

typedef struct FrameRecord {
    uint8_t bytes[0x1c];
} FrameRecord;

/*
 * Observed call lanes establish these fields only.  They do not establish
 * the containing state's ownership or the exact signatures below.
 */
void FUN_0884f5e0_field_view(const SelectorFields *selector,
                             FrameRecord *first_record,
                             FrameRecord *second_record);
