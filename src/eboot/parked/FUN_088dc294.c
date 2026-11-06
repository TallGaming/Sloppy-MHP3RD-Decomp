/*
 * Purpose: initialize a countdown state from an integer duration.
 * Hypothesis: the float field stores 60 divided by the original duration.
 *
 * Attempt 1: direct assignments reproduce the state updates but use a local
 * float constant and differ in instruction scheduling.
 * Attempt 2: staged locals retain the same schedule.
 * Attempt 3: post-decrement preserves the likely source semantics but retains
 * the same GCC schedule and local constant.
 *
 * Blockers: the reference constant at 0x089685d0 has no recovered data symbol,
 * and the FPU/integer schedule differs. Revisit after data-symbol recovery or
 * with a matching nearby countdown initializer.
 */
typedef unsigned char u8;
typedef short s16;

#define FIELD(base, type, offset) (*(type *)((char *)(base) + (offset)))

void FUN_088dc294(void *state, int duration) {
    float rate = 60.0f / (float)duration--;

    FIELD(state, u8, 0x9C) = 1;
    FIELD(state, s16, 0x94) = duration;
    FIELD(state, float, 0x22C) = rate;
}
