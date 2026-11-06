/* FUN_0893d910: advance an effect state and copy its final transform.
 * Main EBOOT, attempt-high-01 241-512 byte batch 16. Vector roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned int u32;

void FUN_0893c314(void *);
void FUN_0893bf64(void *);
void FUN_0893c644(void *);
void FUN_0893d4d0(void *);
void FUN_0893bebc(void *);
void FUN_0893d670(void *);
void FUN_0893be50(void *);
float FUN_088760b8(void *);
void FUN_08811efc(void *, void *, void *);

void FUN_0893d910(u8 *effect)
{
    float delta[4];
    u8 *output;
    u32 flags = *(u32 *)(effect + 0x48);
    int i;

    if ((flags & 8) != 0) {
        *(int *)(effect + 0x5c) = 0x20;
        *(u32 *)(effect + 0x48) = flags & ~0x10;
        *(int *)(effect + 0x60) = 1;
        return;
    }
    *(u32 *)(effect + 0x48) = flags | 0x10;
    switch (effect[0x39]) {
    case 0: FUN_0893c314(effect); break;
    case 1: FUN_0893bf64(effect); break;
    case 2: FUN_0893c644(effect); break;
    case 3: FUN_0893d4d0(effect); break;
    case 4: FUN_0893bebc(effect); break;
    case 5: FUN_0893d670(effect); break;
    case 6: FUN_0893be50(effect); break;
    }
    if (effect[0x39] < 3) {
        for (i = 0; i < 3; i++) {
            delta[i] = ((float *)(effect + 0x20))[i] -
                       ((float *)(effect + 0x80))[i];
        }
        delta[3] = 0.0f;
        if (*(float *)(effect + 0xb4) < FUN_088760b8(delta)) {
            FUN_08811efc(effect + 0x20, effect + 0x80, delta);
        }
    }
    *(int *)(effect + 0x70) = *(int *)(effect + 0xa0);
    *(int *)(effect + 0x74) = *(int *)(effect + 0xa4) + *(int *)(effect + 0xd0);
    *(int *)(effect + 0x78) = *(int *)(effect + 0xa8);
    output = *(u8 **)(effect + 0x58);
    *(int *)(output + 0x10) = *(int *)(effect + 0x20);
    *(int *)(output + 0x14) = *(int *)(effect + 0x24);
    *(int *)(output + 0x18) = *(int *)(effect + 0x28);
    *(int *)(output + 0x1c) = *(int *)(effect + 0x2c);
}
