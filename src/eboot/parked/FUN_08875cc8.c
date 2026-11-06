/* Purpose: post-multiply a four-by-four matrix by a second-axis rotation. */
extern void FUN_08875b04(float, float *);
extern void FUN_08875a3c(float *, const float *, const float *);

void FUN_08875cc8(float angle, float *output, const float *input)
{
    float rotation[16];
    FUN_08875b04(angle, rotation);
    FUN_08875a3c(output, input, rotation);
}
