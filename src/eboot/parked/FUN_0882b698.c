/*
 * Purpose: recover the enabled-object scalar bound predicate.
 *
 * ABI inferred from the register use: object pointer, three-float vector,
 * radius, and scalar upper limit.  Object float fields form three affine
 * expressions and their threshold products.
 */
typedef unsigned char u8;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

int FUN_0882b698(void *object, const float *vector, float radius, float upper_limit)
{
    float primary;
    float secondary;
    float tertiary;
    float weight_a;
    float weight_b;

    if (FIELD(object, u8, 0xe0a) == 0)
        return 1;

    primary = FIELD(object, float, 0xee8) * vector[0]
            + FIELD(object, float, 0xef8) * vector[1]
            + FIELD(object, float, 0xf08) * vector[2]
            + FIELD(object, float, 0xf18);
    if (FIELD(object, float, 0x1130) < primary - radius)
        return 0;
    if (primary + radius < upper_limit)
        return 0;

    secondary = FIELD(object, float, 0xee0) * vector[0]
              + FIELD(object, float, 0xef0) * vector[1];
    secondary += FIELD(object, float, 0xf00) * vector[2];
    secondary += FIELD(object, float, 0xf10);
    weight_a = FIELD(object, float, 0x10f0);
    weight_b = FIELD(object, float, 0x10f8);
    if (radius < secondary * weight_a + primary * weight_b)
        return 0;
    weight_a = FIELD(object, float, 0x1100);
    weight_b = FIELD(object, float, 0x1108);
    if (radius < secondary * weight_a + primary * weight_b)
        return 0;

    tertiary = FIELD(object, float, 0xee4) * vector[0]
             + FIELD(object, float, 0xef4) * vector[1];
    tertiary += FIELD(object, float, 0xf04) * vector[2];
    tertiary += FIELD(object, float, 0xf14);
    weight_a = FIELD(object, float, 0x1114);
    weight_b = FIELD(object, float, 0x1118);
    if (radius < tertiary * weight_a + primary * weight_b)
        return 0;
    weight_a = FIELD(object, float, 0x1124);
    weight_b = FIELD(object, float, 0x1128);
    if (radius < tertiary * weight_a + primary * weight_b)
        return 0;
    return 1;
}
