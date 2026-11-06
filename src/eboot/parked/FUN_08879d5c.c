/* Purpose: evaluate an animation transform and apply it to an input vector. */
extern float D_0896682c;
extern void FUN_088806ec(float, float, void *, float *, int);
extern void FUN_08876178(float, float, float *, const float *, const float *);

void FUN_08879d5c(unsigned char *state, float *output, const float *matrix)
{
    float transform[4] = {0.0f, 0.0f, 0.0f, 0.0f};
    int row;
    int column;

    if (*(int *)(state + 0x4c) > 0) {
        *(int *)(state + 0x4c) -= 1;
        output[0] = output[1] = output[2] = 0.0f;
        output[3] = D_0896682c;
        return;
    }
    if (*(int *)(state + 0x28) == 1 && (*(unsigned int *)(state + 0x40) & 2) != 0) {
        output[0] = output[1] = output[2] = 0.0f;
        output[3] = D_0896682c;
        return;
    }
    {
        float duration = *(float *)(state + 0xc);
        float first_time = *(float *)(state + 4) - duration;
        float first_frame = *(float *)(state + 4);
        if (first_time < 0.0f) { first_time = 0.0f; first_frame = duration; }
        if (*(int *)(state + 0x28) == 1) {
            float second_time = *(float *)(state + 0x18) - duration;
            float second_frame = *(float *)(state + 0x18);
            float first[4];
            float second[4];
            if (second_time < 0.0f) { second_time = 0.0f; second_frame = duration; }
            FUN_088806ec(first_time, first_frame, *(void **)(state + 0x58), first, 0);
            FUN_088806ec(second_time, second_frame, *(void **)(state + 0x58), second, 1);
            FUN_08876178(D_0896682c - *(float *)(state + 0x3c), *(float *)(state + 0x3c),
                         transform, first, second);
        } else {
            FUN_088806ec(first_time, first_frame, *(void **)(state + 0x58), transform, 0);
        }
    }
    for (row = 0; row < 4; row++) {
        float value = 0.0f;
        for (column = 0; column < 4; column++)
            value += matrix[column * 4 + row] * transform[column];
        output[row] = value;
    }
}
