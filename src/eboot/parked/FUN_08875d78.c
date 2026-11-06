/* Purpose: rotate a matrix's upper three-by-three block around the first axis. */
extern void FUN_08875ac0(float, float *);
extern void FUN_08875a78(float *, const float *, const float *);

void FUN_08875d78(float angle, float *output, const float *input)
{
    float rotation[16];
    int index;

    FUN_08875ac0(angle, rotation);
    FUN_08875a78(output, input, rotation);
    for (index = 0; index < 3; index++)
        output[index * 4 + 3] = 0.0f;
    for (index = 12; index < 16; index++)
        output[index] = input[index];
}
