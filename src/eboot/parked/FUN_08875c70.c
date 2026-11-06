/* Purpose: multiply a four-by-four matrix by a first-axis rotation matrix. */
extern void FUN_08875ac0(float, float *);
extern void FUN_08875a3c(float *, const float *, const float *);

void FUN_08875c70(float angle, float *output, const float *input)
{
    float rotation[16];

    FUN_08875ac0(angle, rotation);
    FUN_08875a3c(output, input, rotation);
}
