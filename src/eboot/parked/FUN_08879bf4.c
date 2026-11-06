/* Purpose: render the active animation state and clear transient object fields afterward. */
extern float D_08966824;
extern float D_08966828;
extern void FUN_088804dc(int, void *, int);
extern void FUN_088809b4(float, ...);

void FUN_08879bf4(unsigned char *state)
{
    unsigned char *object = *(unsigned char **)(state + 0x58);
    state[0x54] = 0;
    if (*(int *)(state + 0x28) == 1) {
        FUN_088804dc(*(int *)(state + 4), object, 0);
        if ((*(unsigned int *)(state + 0x40) & 4) != 0)
            FUN_088804dc(*(int *)(state + 0x18), object, 1);
        FUN_088809b4(D_08966824 - *(float *)(state + 0x3c), *(float *)(state + 0x3c), object);
    } else {
        FUN_088804dc(*(int *)(state + 4), object, 0);
        if (state[0x74] != 0) {
            FUN_088804dc(*(int *)(state + 4), object, 1);
            FUN_088809b4(D_08966824 - (float)*(unsigned short *)(state + 0x76) / D_08966828,
                         object);
        }
    }
    *(int *)(object + 0x1a8) = 0;
    *(int *)(object + 0x1a0) = 0;
    *(int *)(object + 0x1a4) = 0;
}
