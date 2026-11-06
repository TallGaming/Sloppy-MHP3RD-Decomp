/*
 * FUN_08828d38: call FUN_08827824 on the global state when its word 0x1C is set.
 *
 * Main EBOOT, match slice 8 (small leaf functions with branches, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

/* The record layout is unknown: FIELD reads or writes a member of the given
 * type at a byte offset. Offsets and widths come from the reference code. */
#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

extern u8 * D_08a20fec; /* Hypothesis: type from the access only. */
void FUN_08827824(void *state, void *part, void *arg);

void FUN_08828d38(void *arg)
{
    u8 *state = D_08a20fec;

    if (FIELD(state, s32, 0x1c) != 0)
        FUN_08827824(state, state + 0x19c, arg);
}
