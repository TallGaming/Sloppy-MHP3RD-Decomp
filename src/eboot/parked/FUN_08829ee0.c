/*
 * Purpose: write a four-float output from three object fields and one global.
 * Hypothesis: the fields at 0xeb0 through 0xeb8 are adjacent components.
 *
 * Attempt 1: direct global address materialization adds an extra instruction.
 * Attempt 2: staging the values still materializes the full global address.
 * Attempt 3: an unresolved global declaration obtains the expected instruction
 * count, but the data symbol is absent and GCC schedules the loads differently.
 *
 * Blocker: the global at 0x089651b0 lacks a symbol, and the local FPU load and
 * store schedule differs. Revisit after data-symbol recovery or a matching
 * nearby source shape is available.
 */
#define FIELD(base, type, offset) (*(const type *)((const char *)(base) + (offset)))

extern float D_089651b0;

void FUN_08829ee0(const void *object, float *out) {
    float third = FIELD(object, float, 0xEB8);
    float first = FIELD(object, float, 0xEB0);
    float second = FIELD(object, float, 0xEB4);
    float fourth = D_089651b0;

    out[0] = first;
    out[3] = fourth;
    out[1] = second;
    out[2] = third;
}
