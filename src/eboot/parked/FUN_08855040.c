/*
 * Purpose: retain the selector-dispatch boundary for FUN_08855040.
 *
 * Input-taint review identifies EABI integer lane 1 as the control selector
 * for all three conditional branches.  Artificial selector cases reach three
 * distinct paths: two tail-dispatch into presently PARKED dependencies, and
 * one path calls the reviewed FUN_0889bd70 before tail-dispatching to reviewed
 * FUN_08866140.  The selector is not forwarded in any observed outgoing
 * argument position; it selects routing locally.  Artificial caller probes
 * corroborate that FUN_08858030 forwards its command into this routine's
 * selector lane.  The full upstream object ABI is not
 * established.  This is a partial view, not a candidate implementation.
 */
#include <stdint.h>

typedef struct FUN_08855040_SelectorDispatchView {
    uint32_t unknown_lane0;
    uint32_t selector_lane1;       /* Proven branch-control input lane. */
    uint32_t unresolved_tail_data[6];
} FUN_08855040_SelectorDispatchView;

typedef enum FUN_08855040_PathView {
    FUN_08855040_PATH_PARKED_A,
    FUN_08855040_PATH_PARKED_B,
    FUN_08855040_PATH_RECORDED_THEN_REVIEWED,
    FUN_08855040_PATH_UNRESOLVED_DEFAULT
} FUN_08855040_PathView;
