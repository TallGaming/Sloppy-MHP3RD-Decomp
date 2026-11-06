/* Purpose: initialize a scene node's local and inherited transform state. */
extern void FUN_088ebb18(void *, const void *, unsigned int);
extern void FUN_0887799c(float, float, float, float *);

static void multiply_matrix(float *out, const float *left, const float *right)
{
    float temporary[16];
    int row;
    int column;
    int k;

    for (column = 0; column < 4; column++) {
        for (row = 0; row < 4; row++) {
            float value = 0.0f;
            for (k = 0; k < 4; k++)
                value += left[k * 4 + row] * right[column * 4 + k];
            temporary[column * 4 + row] = value;
        }
    }
    for (k = 0; k < 16; k++)
        out[k] = temporary[k];
}

void FUN_08880a80(unsigned char *node, const unsigned char *source)
{
    float *local = (float *)(node + 0x170);
    float *basis = (float *)(node + 0x90);

    *(float *)(node + 0x120) = *(const float *)(source + 0x1c);
    *(float *)(node + 0x124) = *(const float *)(source + 0x20);
    *(float *)(node + 0x128) = *(const float *)(source + 0x24);
    *(float *)(node + 0x12c) = *(const float *)(source + 0x2c);
    *(float *)(node + 0x130) = *(const float *)(source + 0x30);
    *(float *)(node + 0x134) = *(const float *)(source + 0x34);
    *(float *)(node + 0x138) = *(const float *)(source + 0x3c);
    *(float *)(node + 0x13c) = *(const float *)(source + 0x40);
    *(float *)(node + 0x140) = *(const float *)(source + 0x44);

    *(float *)(node + 0x1b0) = *(const float *)(source + 0x1c);
    *(float *)(node + 0x1b4) = *(const float *)(source + 0x20);
    *(float *)(node + 0x1b8) = *(const float *)(source + 0x24);
    *(float *)(node + 0x1bc) = *(const float *)(source + 0x2c);
    *(float *)(node + 0x1c0) = *(const float *)(source + 0x30);
    *(float *)(node + 0x1c4) = *(const float *)(source + 0x34);
    *(float *)(node + 0x1c8) = *(const float *)(source + 0x3c);
    *(float *)(node + 0x1cc) = *(const float *)(source + 0x40);
    *(float *)(node + 0x1d0) = *(const float *)(source + 0x44);

    *(unsigned int *)(node + 0x118) = *(const unsigned int *)(source + 0x4c);
    *(unsigned short *)(node + 0x110) = *(const unsigned short *)(source + 0x00);
    *(unsigned short *)(node + 0x114) = *(const unsigned short *)(source + 0x50);
    *(unsigned short *)(node + 0x116) = *(const unsigned short *)(source + 0x0c);
    FUN_088ebb18(node + 0x270, source + 0x54, 8);

    FUN_0887799c(*(const float *)(source + 0x1c),
                 *(const float *)(source + 0x20),
                 *(const float *)(source + 0x24), local);
    multiply_matrix(local, local, basis);
    multiply_matrix(local, local, basis);
    multiply_matrix(local, local, basis);
    local[12] = *(const float *)(source + 0x3c);
    local[13] = *(const float *)(source + 0x40);
    local[14] = *(const float *)(source + 0x44);
}
