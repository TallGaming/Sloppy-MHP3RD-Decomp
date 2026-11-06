/* Purpose: compose node transforms, submit them, and propagate to relatives. */
typedef void (*NodeTransform)(float, float, float, void *, float *, float *);
typedef void (*SubmitTransform)(void *, float *, float *, unsigned short);

extern void *D_09da9600;
extern float D_08966930;
extern void FUN_0887799c(float, float, float, float *);

static void matrix_product(float *out, const float *a, const float *b)
{
    float temporary[16];
    int row;
    int column;
    int k;
    for (row = 0; row < 4; row++)
        for (column = 0; column < 4; column++) {
            float value = 0.0f;
            for (k = 0; k < 4; k++)
                value += a[k * 4 + row] * b[column * 4 + k];
            temporary[column * 4 + row] = value;
        }
    for (row = 0; row < 16; row++)
        out[row] = temporary[row];
}

void FUN_08880ef0(unsigned char *node, float *first_parent, float *second_parent)
{
    float *base = (float *)(node + 0x90);
    float *first = (float *)(node + 0xd0);
    void *renderer = D_09da9600;
    void *child;
    void *sibling;

    FUN_0887799c(*(float *)(node + 0x1b0), *(float *)(node + 0x1b4),
                 *(float *)(node + 0x1b8), base);
    matrix_product(base, base, (float *)(node + 0x170));
    matrix_product(first, base, first_parent);
    matrix_product(base, base, second_parent);
    (*(SubmitTransform *)(*(unsigned char **)renderer + 8))(
        renderer, first, base, *(unsigned short *)(node + 0x116));

    child = *(void **)(node + 0x14c);
    if (child != 0)
        (*(NodeTransform *)(*(unsigned char **)child + 8))(
            D_08966930, D_08966930, D_08966930, child, first, base);
    sibling = *(void **)(node + 0x148);
    if (sibling != 0)
        (*(NodeTransform *)(*(unsigned char **)sibling + 8))(
            D_08966930, D_08966930, D_08966930, sibling, first_parent, second_parent);
}
