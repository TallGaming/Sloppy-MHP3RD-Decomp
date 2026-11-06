/*
 * Purpose: update the object's vector-derived state using the supplied
 * three-component input and its configured threshold.
 *
 * Hypothesis: the surrounding object stores the threshold at 0x1134.  The
 * callee consumes the object, a three-float input, the caller's supplied
 * scalar, and this stored scalar; its body uses the stored scalar in a
 * floating-point comparison.  The integer result reaches the caller, which
 * branches on it.  The object and vector layouts remain intentionally partial
 * until their owners are recovered.
 */
typedef float f32;

struct Vector3_0882b7f8 {
    f32 x;
    f32 y;
    f32 z;
};

struct State_0882b7f8 {
    unsigned char unknown_0000[0x1134];
    f32 threshold_1134;
};

extern int FUN_0882b698(struct State_0882b7f8 *state,
                         const struct Vector3_0882b7f8 *input,
                         f32 supplied_value,
                         f32 threshold);

int FUN_0882b7f8(struct State_0882b7f8 *state,
                 const struct Vector3_0882b7f8 *input,
                 f32 supplied_value)
{
    int accepted;

    accepted = FUN_0882b698(state, input, supplied_value, state->threshold_1134);
    return accepted;
}
