/*
 * Purpose: initialize global state, six repeated byte pairs, and defaults.
 * Hypothesis: the four floats are adjacent shared defaults.
 *
 * Attempt 1: the readable initializer has the right loop semantics, but uses
 * a different base form for the byte-pair stores.
 * Attempt 2: preserves the reference loop body exactly. The global state and
 * default-float accesses remain unresolved and scheduled differently.
 *
 * Blockers: globals at 0x08a29198 and 0x08965250 have no recovered symbols;
 * GCC also schedules the default initialization differently. Revisit after
 * data-symbol recovery.
 */
typedef unsigned char u8;
typedef unsigned int u32;

extern void *D_08a29198;
extern float D_08965250[4];

#define FIELD(base, type, offset) (*(type *)((char *)(base) + (offset)))

void FUN_0882c0ac(void *state) {
    u8 *entry = (u8 *)state + 0xB0;
    int remaining = 6;

    D_08a29198 = state;
    do {
        remaining--;
        entry[0x90] = 0;
        entry[0x92] = 0;
        entry += 0x230;
    } while (remaining != 0);
    FIELD(state, u8, 0xE0A) = 1;
    FIELD(state, float, 0xED0) = D_08965250[0];
    FIELD(state, u32, 0xE94) = 0;
    FIELD(state, float, 0xED4) = D_08965250[1];
    FIELD(state, float, 0xC) = D_08965250[2];
    FIELD(state, float, 0x10) = D_08965250[3];
}
