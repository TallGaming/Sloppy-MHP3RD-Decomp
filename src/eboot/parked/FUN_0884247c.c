/*
 * Purpose: ABI and data-flow view for FUN_0884247c.
 *
 * The only declared caller reaches the target with its context in lane 0.
 * Synthetic target runs show that lane 1 is a source pointer.  The target
 * calls the verified three-halfword counter and the parked scalar classifier
 * with the shared service pointer.  Its branch ownership is not recovered,
 * so this file is deliberately an uncompiled field view, not a body.
 */
typedef unsigned char u8;

extern void *D_08a3345c;
extern int FUN_0885dc74(void *service, const void *source);
extern int FUN_0885f610(void *service, unsigned int selector);

struct FUN_0884247c_ObservedContract {
    void *caller_context_lane_0;
    void *shared_service;
    const u8 *source_lane_1;
    unsigned int selector_at_source_plus_1;
};

/* Observed call lanes:
 * FUN_0885dc74(D_08a3345c, source_lane_1)
 * FUN_0885f610(D_08a3345c, source_lane_1[1])
 */
