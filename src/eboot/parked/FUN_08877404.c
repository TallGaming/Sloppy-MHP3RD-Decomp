/* Purpose: form an orthonormal basis matrix from two direction vectors. */
extern float D_089667a0;
extern float sqrtf(float);

static void normalize(float *value)
{
    float length = sqrtf(value[0] * value[0] + value[1] * value[1] + value[2] * value[2]);
    if (length != 0.0f) {
        value[0] /= length;
        value[1] /= length;
        value[2] /= length;
    }
}

void FUN_08877404(float *matrix, const float *first, const float *second)
{
    float x[3] = {first[0], first[1], first[2]};
    float input[3] = {second[0], second[1], second[2]};
    float z[3];
    float y[3];

    normalize(x);
    normalize(input);
    z[0] = x[1] * input[2] - x[2] * input[1];
    z[1] = x[2] * input[0] - x[0] * input[2];
    z[2] = x[0] * input[1] - x[1] * input[0];
    normalize(z);
    y[0] = z[1] * x[2] - z[2] * x[1];
    y[1] = z[2] * x[0] - z[0] * x[2];
    y[2] = z[0] * x[1] - z[1] * x[0];
    matrix[0] = x[0]; matrix[1] = x[1]; matrix[2] = x[2]; matrix[3] = 0.0f;
    matrix[4] = y[0]; matrix[5] = y[1]; matrix[6] = y[2]; matrix[7] = 0.0f;
    matrix[8] = z[0]; matrix[9] = z[1]; matrix[10] = z[2]; matrix[11] = 0.0f;
    matrix[15] = D_089667a0;
}
