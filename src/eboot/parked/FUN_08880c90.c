/* Purpose: build two derived transform matrices and propagate them to children. */
typedef void (*TransformCallback)(float, float, float, void *, float *, float *);

static void multiply_matrix(float *out, const float *left, const float *right)
{
    int row;
    int column;
    int k;
    for (row = 0; row < 4; row++) {
        for (column = 0; column < 4; column++) {
            float value = 0.0f;
            for (k = 0; k < 4; k++)
                value += left[k * 4 + row] * right[column * 4 + k];
            out[column * 4 + row] = value;
        }
    }
}

void FUN_08880c90(float x, float y, float z, unsigned char *node,
                  float *first_parent, float *second_parent)
{
    float local[16] = {0};
    float base[16];
    float inverse_scale[16] = {0};
    float first[16];
    float second[16];
    void *child;
    void *sibling;
    int i;

    local[0] = x;
    local[5] = y;
    local[10] = z;
    local[15] = 1.0f;
    multiply_matrix(base, local, (float *)(node + 0x170));
    inverse_scale[0] = 1.0f / x;
    inverse_scale[5] = 1.0f / y;
    inverse_scale[10] = 1.0f / z;
    inverse_scale[15] = 1.0f;
    inverse_scale[12] = *(float *)(node + 0x1a0);
    inverse_scale[13] = *(float *)(node + 0x1a4);
    inverse_scale[14] = *(float *)(node + 0x1a8);
    multiply_matrix(local, base, inverse_scale);
    multiply_matrix(first, local, first_parent);
    multiply_matrix(second, local, second_parent);
    for (i = 0; i < 16; i++) {
        *(float *)(node + 0xd0 + i * 4) = first[i];
        *(float *)(node + 0x90 + i * 4) = second[i];
    }
    child = *(void **)(node + 0x14c);
    if (child != 0)
        (*(TransformCallback *)(*(unsigned char **)child + 8))(base[0], base[5], base[10], child,
                                                               (float *)(node + 0xd0),
                                                               (float *)(node + 0x90));
    sibling = *(void **)(node + 0x148);
    if (sibling != 0)
        (*(TransformCallback *)(*(unsigned char **)sibling + 8))(x, y, z, sibling,
                                                                 first_parent, second_parent);
}
