/*
 * Purpose: ABI/dataflow partial for a small game-owned dispatch wrapper.
 *
 * This is deliberately not a whole-function candidate.  The private decode
 * establishes four word argument lanes at callers, one direct dispatch call,
 * and two return paths.  Only lanes two and three are demonstrably forwarded
 * into that dispatch.  The ownership and layouts of the derived contexts and
 * loaded fallback value are not yet recovered, so no field offsets, helper
 * semantics, or final target prototype are asserted here.
 */
#include <stdint.h>

typedef struct Fun0882ef70CallLanes {
    uintptr_t lane0;
    uintptr_t lane1;
    uintptr_t forwarded_lane2;
    uintptr_t forwarded_lane3;
} Fun0882ef70CallLanes;

typedef struct Fun0882ef70DispatchLanes {
    uintptr_t global_or_constant_context;
    uintptr_t derived_context;
    uintptr_t forwarded_lane2;
    uintptr_t forwarded_lane3;
} Fun0882ef70DispatchLanes;
