/*
 * Purpose: reset a small state record to its default values.
 * Hypothesis: the global at 0x089672e0 is the shared default float.
 *
 * Attempt 1: a direct readable initializer has the intended field values, but
 * GCC schedules the independent float and zero stores differently.
 *
 * Blockers: the default float has no recovered data symbol, and the store
 * schedule differs. Revisit after data-symbol recovery or with a matching
 * nearby state-reset source shape.
 */
typedef signed char s8;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((char *)(base) + (offset)))

extern float D_089672e0;

void FUN_0889c050(void *state) {
    float default_value = D_089672e0;

    FIELD(state, s8, 0x0) = -1;
    FIELD(state, float, 0x28) = default_value;
    FIELD(state, u32, 0x4) = 0;
    FIELD(state, u32, 0x8) = 0;
    FIELD(state, u32, 0xC) = 0;
    FIELD(state, u32, 0x10) = 0;
    FIELD(state, float, 0x20) = default_value;
    FIELD(state, float, 0x24) = default_value;
    FIELD(state, u32, 0x2C) = 0;
}
