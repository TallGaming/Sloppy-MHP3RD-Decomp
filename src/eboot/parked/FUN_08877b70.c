/* Purpose: build a third-axis rotation and apply it to a three-by-three matrix. */
extern void FUN_08875d20(float, float *, const float *);
extern void FUN_08875a78(float *, const float *, const float *);

void FUN_08877b70(float angle, float *output, const float *input)
{
    float rotation[16] = {1.0f, 0.0f, 0.0f, 0.0f,
                          0.0f, 1.0f, 0.0f, 0.0f,
                          0.0f, 0.0f, 1.0f, 0.0f,
                          0.0f, 0.0f, 0.0f, 1.0f};
    FUN_08875d20(angle, rotation, rotation);
    FUN_08875a78(output, rotation, input);
}
