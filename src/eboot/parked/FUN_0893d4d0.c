/* FUN_0893d4d0: update a three-phase attached effect position.
 * Main EBOOT, attempt-high-01 241-512 byte batch 16. Effect roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned int u32;

extern float D_0896a230;

int FUN_08876e84(void *, void *);
void FUN_08876420(void *, void *, int);

void FUN_0893d4d0(u8 *effect)
{
    u8 *owner = *(u8 **)(effect + 0xc0);
    signed char phase;
    u8 variant;
    int timer;

    if ((signed char)owner[0x33] != 0xe ||
        (*(u32 *)(owner + 0x48) & 8) != 0) {
        effect[0x39] = 4;
        effect[0x3a] = 0;
        return;
    }

    phase = (signed char)effect[0x3a];
    if (phase != 1) {
        if (phase == 0) {
            effect[0x3a] = 1;
            *(int *)(effect + 0xe0) = 10;
        } else {
            if (phase != 2) {
                return;
            }
            variant = effect[0xda];
            *(int *)(effect + 0xa0) = -0x4000;
            if (variant == 1) {
                *(int *)(effect + 0xa0) = -0x3000;
            } else if (variant == 2) {
                *(int *)(effect + 0xa0) = -0x5000;
            }
            *(int *)(effect + 0x20) = *(int *)(owner + 0x20);
            *(float *)(effect + 0x24) =
                *(float *)(owner + 0x24) + (float)variant * D_0896a230;
            *(int *)(effect + 0x28) = *(int *)(owner + 0x28);
            *(int *)(effect + 0x2c) = *(int *)(owner + 0x2c);
            return;
        }
    }

    *(u32 *)(effect + 0xc8) =
        FUN_08876e84(effect + 0x20, owner + 0x20) + effect[0xda] * 0x1000;
    FUN_08876420(effect + 0xa4, effect + 0xc8, 0x800);
    *(int *)(effect + 0x20) = *(int *)(owner + 0x20);
    *(int *)(effect + 0x28) = *(int *)(owner + 0x28);
    timer = *(int *)(effect + 0xe0) - 1;
    *(int *)(effect + 0xe0) = timer;
    if (timer < 1) {
        *(int *)(effect + 0xe0) = 10;
    }
    if (owner[0x39] > 3) {
        effect[0x3a]++;
        effect[0xd9] = 1;
    }
}
