/* Purpose: post-multiply a four-by-four matrix by a third-axis rotation. */
extern void FUN_08875b48(float, float *);
extern void FUN_08875a3c(float *, const float *, const float *);

void FUN_08875d20(float angle, float *output, const float *input)
{
    float rotation[16];
    FUN_08875b48(angle, rotation);
    FUN_08875a3c(output, input, rotation);
}
