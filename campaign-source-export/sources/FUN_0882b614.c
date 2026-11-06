/*
 * Purpose: test the recovered group-B scalar interval predicate.
 *
 * The input vector is three floats.  The object contains a byte enable at
 * +0xe0a, three coefficients at +0xee8/+0xef8/+0xf08, a bias at +0xf18,
 * and lower/upper limits at +0x1130/+0x1134.
 */
typedef unsigned char u8;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

int FUN_0882b614(void *object, const float *vector, float radius)
{
    float value;

    if (FIELD(object, u8, 0xe0a) == 0)
        return 1;

    value = FIELD(object, float, 0xee8) * vector[0]
          + FIELD(object, float, 0xef8) * vector[1]
          + FIELD(object, float, 0xf08) * vector[2]
          + FIELD(object, float, 0xf18);
    if (FIELD(object, float, 0x1130) < value - radius)
        return 0;
    if (value + radius < FIELD(object, float, 0x1134))
        return 0;
    return 1;
}
