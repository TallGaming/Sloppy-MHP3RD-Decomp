/* Purpose: advance a timed fade and clear it when its countdown expires. */
extern float D_08966820;
extern int FUN_0889ed70(float, int, int, int, float, float, int);

void FUN_088795fc(unsigned char *fade)
{
    int remaining;
    float value;

    if (*(int *)(fade + 0x28) != 1)
        return;
    if (*(float *)(fade + 0x34) > 0.0f) {
        value = *(float *)(fade + 0x2c) - *(float *)(fade + 0x34);
        *(float *)(fade + 0x2c) = value;
        if (value < 0.0f)
            *(int *)(fade + 0x2c) = 0;
        remaining = --*(int *)(fade + 0x38);
    } else {
        remaining = *(int *)(fade + 0x38);
    }
    if (remaining < 1) {
        *(int *)(fade + 0x40) = 0;
        *(int *)(fade + 0x28) = 0;
        *(int *)(fade + 0x2c) = 0;
        *(int *)(fade + 0x30) = 0;
        *(int *)(fade + 0x34) = 0;
        *(int *)(fade + 0x38) = 0;
        *(int *)(fade + 0x3c) = 0;
        return;
    }
    *(int *)(fade + 0x3c) = FUN_0889ed70(*(float *)(fade + 0x2c) / *(float *)(fade + 0x30),
                                          0, 0, 0, D_08966820, D_08966820, 0);
}
