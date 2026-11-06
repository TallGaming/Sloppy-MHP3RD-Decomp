/* Purpose: advance eleven animation curves and periodically reseed one curve. */
extern float D_089664c8;
extern unsigned char *D_09bc1ed8;
extern int *D_089c6c8c[];
extern void FUN_0886515c(float, void *, int);
extern unsigned int FUN_088e62f0(void *, int);

void FUN_08865328(unsigned char *state)
{
    int channel;

    for (channel = 0; channel < 11; channel++) {
        unsigned char *curve = state + channel * 12;
        int *points = *(int **)(curve + 4);
        int frame = *(int *)(curve + 8);
        float value = 0.0f;
        int count = points[0] - 1;
        int i;

        for (i = 0; i < count; i++) {
            int *left = (int *)points[1] + i * 2;
            int *right = left + 2;
            if (left[0] <= frame && frame <= right[0]) {
                float blend = (float)(frame - left[0]) / (float)(right[0] - left[0]);
                value = (D_089664c8 - blend) * (float)left[1] + blend * (float)right[1];
                break;
            }
        }
        FUN_0886515c(value, state, channel);
        if (*(int *)(curve + 8) < *(int *)(curve + 0xc))
            *(int *)(curve + 8) += 1;
    }

    {
        int tick = *(int *)(state + 0x88);
        if (tick % 5 == 0 && tick < 55) {
            int slot = tick / 5;
            int *points = D_089c6c8c[(FUN_088e62f0(D_09bc1ed8, 1) % 3) * 6];
            unsigned char *curve = state + slot * 12;
            *(int *)(curve + 4) = (int)points;
            *(int *)(curve + 8) = 0;
            *(int *)(curve + 0xc) = *(int *)(points[0] * 8 + points[1] - 8);
        }
        tick++;
        *(int *)(state + 0x88) = tick > 90 ? 0 : tick;
    }
}
