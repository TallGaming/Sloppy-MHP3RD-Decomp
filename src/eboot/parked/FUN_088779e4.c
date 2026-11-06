/* Purpose: initialize an identity transform and orient it from the current three-value state. */
extern void FUN_088761d0(float *);
extern void FUN_08875e80(float, float, float, float *);

void FUN_088779e4(float *matrix)
{
    float state[3];
    int index;

    FUN_088761d0(state);
    for (index = 0; index < 16; index++)
        matrix[index] = 0.0f;
    matrix[0] = 1.0f;
    matrix[5] = 1.0f;
    matrix[10] = 1.0f;
    matrix[15] = 1.0f;
    FUN_08875e80(state[0], state[1], state[2], matrix);
}
