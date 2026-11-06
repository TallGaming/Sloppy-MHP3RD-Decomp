/*
 * Purpose: retain the partial object/control view for FUN_08854c4c.
 *
 * Evidence shows one direct call to FUN_08854abc, three scalar comparisons,
 * three float constant loads, and three return paths. An artificial call hook
 * establishes that incoming FPR12 is forwarded to FUN_08854abc and its FPR0
 * result controls this routine's branch selection. The sole observed write
 * was outside the artificial object, consistent with a stack save. Exact
 * comparison senses, constants, and integer result mapping are unresolved,
 * so this uncompiled field view is not a candidate body.
 */
#include <stdint.h>

typedef struct FUN_08854c4c_ScalarFlowView {
    float incoming_fpr12;              /* Proven forwarded to FUN_08854abc. */
    float callee_result_fpr0;          /* Proven to select later control flow. */
    float comparison_limits[3];        /* Identity and ordering unresolved. */
} FUN_08854c4c_ScalarFlowView;

typedef struct FUN_08854c4c_ResultView {
    uint32_t branch_selected_status;   /* Multiple return paths observed. */
    float dependency_scalar;           /* Returned/consumed float relationship unresolved. */
} FUN_08854c4c_ResultView;
