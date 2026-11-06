/*
 * Purpose: populate a six-float derived table from shared constants.
 * Hypothesis: the source scale is the float at object offset 0x4.
 *
 * Attempt 1: separate global declarations preserve the arithmetic but create
 * unrelated relocation bases and different register allocation.
 * Attempt 2: a contiguous four-float table reflects the reference addresses,
 * but GCC coalesces the relocations and reorders the stores.
 *
 * Blockers: the constants at 0x0896519c through 0x089651a8 have no recovered
 * data symbol, and their load/store schedule differs. Revisit after data-
 * symbol recovery or with a matching table-initializer source shape.
 */
extern float D_0896519c[4];

#define FIELD(base, type, offset) (*(type *)((char *)(base) + (offset)))

void FUN_08829e6c(void *object) {
    float base = D_0896519c[0];
    float scale = FIELD(object, float, 0x4);
    float high = D_0896519c[3];
    float scaled = scale * base;
    float low = D_0896519c[1];
    float middle = D_0896519c[2];

    FIELD(object, float, 0x1150) = high;
    FIELD(object, float, 0x1140) = low;
    FIELD(object, float, 0x1154) = scaled;
    FIELD(object, float, 0x1144) = middle;
    FIELD(object, float, 0x1148) = scaled;
    FIELD(object, float, 0x114C) = high;
}
