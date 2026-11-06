/*
 * Purpose: diagnostic ABI recovery for a shared-state scalar classifier.
 *
 * The sole direct caller sets argument 0 from D_08a29198 and forwards this
 * integer result as its own return. The target reads
 * four floats at state +0x0ea0/+0x0ea8/+0x0eb0/+0x0eb8 and three float
 * defaults at D_08965288/+0x04/+0x08. Its Allegrex sequence uses reciprocal,
 * reciprocal-square-root, square-root, inverse-sine, sign, complement, and
 * many vector comparison branches before returning an integer low-bit value.
 * The calculation and the forwarded caller registers are not an evidenced C
 * ABI; all scalar locals and the return value below are diagnostic placeholders.
 */
typedef unsigned char u8;

extern float D_08965288;
extern float D_0896528c;
extern float D_08965290;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

int FUN_0882c758(void *shared_state)
{
    float diagnostic_a = FIELD(shared_state, float, 0x0ea0);
    float diagnostic_b = FIELD(shared_state, float, 0x0ea8);
    float diagnostic_c = FIELD(shared_state, float, 0x0eb0);
    float diagnostic_d = FIELD(shared_state, float, 0x0eb8);
    float diagnostic_default = D_08965288 + D_0896528c + D_08965290;

    (void)diagnostic_a;
    (void)diagnostic_b;
    (void)diagnostic_c;
    (void)diagnostic_d;
    (void)diagnostic_default;
    return 0;
}
