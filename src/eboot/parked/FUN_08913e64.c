/* FUN_08913e64: build and scale a transform for the selected attachment mode.
 * Main EBOOT, attempt-high-01 513-1024 byte batch 5. Mode roles are hypotheses. */
typedef unsigned char u8;
extern float DAT_08a03ec0[], DAT_08a03ee0[];
extern float DAT_08969a28, DAT_08969a2c, DAT_08969a30;
float *FUN_0889fbd0(); void FUN_08877b70(); void FUN_08877b10();

static void copy_matrix(float *destination, const float *source)
{
    int i;
    for (i = 0; i < 16; i++) destination[i] = source[i];
}

void FUN_08913e64(char *state, float *matrix, short variant)
{
    short selection = *(short *)(state + 100);
    int owner = *(int *)(state + 0xc);
    float *source;
    if (selection != -1) {
        float *scale;
        if (state[0x34] == 1 || (state[0x34] == 3 && variant == 0)) {
            scale = DAT_08a03ec0 + selection * 16;
            source = FUN_0889fbd0(owner, 7);
            copy_matrix(matrix, source);
        } else {
            scale = DAT_08a03ee0 + selection * 16;
            source = FUN_0889fbd0(owner, 0xb);
            copy_matrix(matrix, source);
            FUN_08877b70(DAT_08969a28, matrix, matrix);
        }
        matrix[0] *= scale[0]; matrix[1] *= scale[0]; matrix[2] *= scale[0];
        matrix[4] *= scale[1]; matrix[5] *= scale[1]; matrix[6] *= scale[1];
        matrix[8] *= scale[2]; matrix[9] *= scale[2]; matrix[10] *= scale[2];
    } else if ((u8)state[0x34] == 4) {
        source = FUN_0889fbd0(owner, 0xb);
        copy_matrix(matrix, source);
        FUN_08877b10(DAT_08969a28, matrix, matrix);
        matrix[8] *= DAT_08969a2c; matrix[9] *= DAT_08969a2c; matrix[10] *= DAT_08969a2c;
    } else {
        source = FUN_0889fbd0(owner, 7);
        copy_matrix(matrix, source);
        if ((u8)state[0x34] >= 4 && (u8)state[0x34] <= 6) {
            matrix[8] *= DAT_08969a30; matrix[9] *= DAT_08969a30; matrix[10] *= DAT_08969a30;
        }
    }
}
