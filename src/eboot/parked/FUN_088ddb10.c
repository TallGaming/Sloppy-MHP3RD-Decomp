/*
 * Purpose: reset state fields and apply the default floating-point value.
 * Hypothesis: the nested record begins at offset 0xa0.
 *
 * Attempt 1: the natural reset has the correct operations but several stores
 * are scheduled in a different order.
 * Attempt 2: reordered independent source assignments match every local field
 * access except the float store's placement.
 *
 * Blockers: the reference global at 0x08968634 has no recovered symbol, and
 * GCC schedules the float store after the zero store at offset 0x80. Revisit
 * after data-symbol recovery or with a matching reset source shape.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((char *)(base) + (offset)))

extern float D_08968634;

void FUN_088ddb10(void *state) {
    float default_value = D_08968634;
    void *nested = (char *)state + 0xA0;

    FIELD(state, u32, 0x80) = 0;
    FIELD(state, float, 0x88) = default_value;
    FIELD(state, u32, 0xB0) = 0;
    FIELD(nested, u16, 0x42) = 15;
    FIELD(nested, u8, 0x40) = 0;
    FIELD(nested, u32, 0x4C) = 0;
}
