/*
 * Purpose: update integer-derived float fields and reset a state bit.
 * Hypothesis: the bit at word offset 0xba0 is an inactive flag.
 *
 * Attempt 1: direct field assignments reproduce every operation, including
 * the bitfield instruction, but schedule the independent load and conversions
 * differently.
 * Attempt 2: staging the conversions retains the same schedule.
 *
 * Blocker: GCC 4.0.4 schedules the bitfield load before the integer-to-float
 * transfers; the reference transfers both integers first. Revisit with a
 * matching nearby scheduling shape or a supported compiler-level change.
 */
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct StateBits {
    unsigned int unused : 7;
    unsigned int active : 1;
} StateBits;

#define FIELD(base, type, offset) (*(type *)((char *)(base) + (offset)))

void FUN_088ab0b8(void *state, u16 value, int first, int second) {
    float first_float = (float)first;
    float second_float = (float)second;

    FIELD(state, u16, 0x18E) = value;
    FIELD(state, StateBits, 0xBA0).active = 0;
    FIELD(state, float, 0x19C) = first_float;
    FIELD(state, float, 0x198) = second_float;
    FIELD(state, u32, 0x1A0) = 0;
}
