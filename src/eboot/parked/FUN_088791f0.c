/* Purpose: initialize or retarget an animation channel and its frame timing. */
extern float D_0896680c;
extern float D_08966814;
extern float D_08966818;
extern void FUN_088804dc(float, void *, int);
extern void FUN_088809b4(float, void *);
extern void FUN_0888093c(void *);
extern void FUN_08880de0(void *, void *, int);
extern void FUN_088805e4(void *);
extern int FUN_08880678(void *, void *);

void FUN_088791f0(int frame, float speed, unsigned char *state,
                  unsigned char *animation, unsigned int flags)
{
    float duration = *(float *)(state + 0xc);
    if (animation == 0)
        return;
    if (speed == 0.0f || *(int *)(state + 0x44) == 0) {
        *(int *)(state + 0x28) = 0;
        *(int *)(state + 0x2c) = 0;
        *(int *)(state + 0x30) = 0;
        *(int *)(state + 0x34) = 0;
        *(int *)(state + 0x38) = 0;
        *(int *)(state + 0x3c) = 0;
        *(int *)(state + 0x40) = 0;
    } else {
        if (state[0x54] == 0) {
            state[0x54] = 1;
            if (*(int *)(state + 0x28) == 1) {
                FUN_088804dc(*(float *)(state + 4), *(void **)(state + 0x58), 0);
                FUN_088809b4(D_0896680c - *(float *)(state + 0x3c), *(void **)(state + 0x58));
                FUN_0888093c(*(void **)(state + 0x58));
            }
            FUN_08880de0(*(void **)(state + 0x58), *(void **)(state + 0x44), 1);
            *(unsigned short *)(state + 0x52) = *(unsigned short *)(state + 0x50);
            *(int *)(state + 0x18) = *(int *)(state + 4);
            *(float *)(state + 0x1c) = duration;
            *(int *)(state + 0x20) = *(int *)(state + 0x10);
            *(int *)(state + 0x24) = *(int *)(state + 0x14);
            if (*(int *)(state + 0x28) != 1 && state[0x74] == 0 && (flags & 4) == 0)
                FUN_088805e4(*(void **)(state + 0x58));
        }
        *(unsigned int *)(state + 0x40) = flags;
        if (speed < 0.0f) {
            speed = -speed;
            *(unsigned int *)(state + 0x40) |= 2;
        }
        speed += D_08966814;
        *(int *)(state + 0x28) = 1;
        *(float *)(state + 0x2c) = speed;
        *(float *)(state + 0x30) = speed;
        if (duration > 0.0f) {
            unsigned int steps = (unsigned int)(speed / duration + D_08966818);
            *(int *)(state + 0x38) = steps == 0 ? 1 : steps;
            *(float *)(state + 0x34) = speed / (steps == 0 ? D_0896680c : (float)steps);
        } else {
            *(float *)(state + 0x34) = 0.0f;
            *(int *)(state + 0x38) = 1;
        }
    }
    FUN_08880de0(*(void **)(state + 0x58), animation, 0);
    *(int *)(state + 4) = frame;
    *(int *)(state + 8) = frame;
    *(int *)(state + 0x10) = *(int *)(animation + 0xc);
    *(int *)(state + 0x14) = FUN_08880678(*(void **)(state + 0x58), animation);
    *(void **)(state + 0x44) = animation;
    if (*(int *)(animation + 8) == 0)
        *(unsigned short *)(state + 0x50) = (*(unsigned short *)(state + 0x50) & ~1U) | 2;
    else
        *(unsigned short *)(state + 0x50) |= 3;
}
