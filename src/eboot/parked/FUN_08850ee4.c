/*
 * FUN_08850ee4 field view.
 *
 * This multi-branch UI/render setup routine first forwards its first two
 * incoming lanes to FUN_0884fdf0, then enters FUN_0884f5e0 with those same
 * lanes, a constant mode of one, and the sixth incoming integer lane.  It
 * submits two descriptor batches,
 * registers descriptor slots, and repeatedly couples a template/stack
 * record with FUN_08904570 before resolving a render entry.
 *
 * The routine uses several local copied records and static descriptor
 * blocks.  Call tracing proves their repeated layout role but not their
 * complete object ownership or the contracts of the parked render helpers.
 * This is therefore intentionally an uncompiled field view.
 */
#include <stdint.h>

typedef struct DescriptorRecord {
    uint8_t bytes[0x24];
} DescriptorRecord;

typedef struct LocalRenderRecord {
    uint8_t bytes[0x10];
} LocalRenderRecord;

typedef struct RenderSetupState {
    uint8_t bytes[0x260];
    DescriptorRecord shared_descriptor;
} RenderSetupState;

/*
 * The original has additional integer and stack input lanes.  They remain
 * unnamed until the caller and frame setup establish their ownership.
 */
void FUN_08850ee4_field_view(RenderSetupState *state,
                             const void *incoming_record,
                             uintptr_t sixth_integer_lane);
