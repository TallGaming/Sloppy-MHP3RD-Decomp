/* FUN_08912b2c: animate three attached effects around their owner.
 * Main EBOOT, attempt-high-01 513-1024 byte batch 5. Effect roles are hypotheses. */
typedef unsigned int u32;
extern float DAT_08969998, DAT_0896999c, DAT_089699a0;
extern int _DAT_09bf5260;
int FUN_09c01fd4(void); void FUN_09c0cf1c(); int FUN_08955ac8();
void FUN_0889c4c8(); void FUN_09c0249c();

void FUN_08912b2c(char *state)
{
    u32 flags = *(u32 *)(state + 0x48);
    int slot;
    if ((flags & 8) == 0 && (flags & 2) == 0 && FUN_09c01fd4() != 0) {
        char scratch[64];
        FUN_09c0cf1c(state);
        for (slot = 0; slot < 3; slot++) {
            int effect = FUN_08955ac8(_DAT_09bf5260, *(int *)(state + 0x7c + slot * 4));
            if (effect != 0) {
                int *track = *(int **)(state + 0x10c + slot * 4);
                float angle = ((float)(*(short *)(state + 0x50) - *(short *)((char *)track + 6)) *
                               DAT_08969998 / DAT_0896999c) * DAT_089699a0 *
                              (slot & 1 ? 1.0f : -1.0f);
                float position[4];
                float scale[4];
                float rotation[4];
                position[0] = *(float *)(state + 0x20) + __builtin_sinf(angle) *
                              *(float *)(state + 0x210 + slot * 4) + *(float *)(track + 0x30);
                position[1] = *(float *)(state + 0x24) + *(float *)(track + 0x34);
                position[2] = *(float *)(state + 0x28) + __builtin_cosf(angle) *
                              *(float *)(state + 0x210 + slot * 4) + *(float *)(track + 0x38);
                position[3] = 0.0f;
                rotation[0] = *(float *)(state + 0x190) + *(float *)(track + 0x20);
                rotation[1] = *(float *)(state + 0x194) + *(float *)(track + 0x24);
                rotation[2] = *(float *)(state + 0x198) + *(float *)(track + 0x28);
                rotation[3] = 0.0f;
                scale[0] = *(float *)(state + 0x1a0) * *(float *)(track + 0x10);
                scale[1] = *(float *)(state + 0x1a4) * *(float *)(track + 0x14);
                scale[2] = *(float *)(state + 0x1a8) * *(float *)(track + 0x18);
                scale[3] = 0.0f;
                rotation[0] = rotation[0] / DAT_0896999c * DAT_089699a0;
                rotation[1] = rotation[1] / DAT_0896999c * DAT_089699a0;
                rotation[2] = rotation[2] / DAT_0896999c * DAT_089699a0;
                FUN_0889c4c8(scale, rotation, position, 7, scratch);
                FUN_09c0249c(effect, scratch);
            }
        }
        flags = *(u32 *)(state + 0x48);
        (*(short *)(state + 0x50))++;
        if (flags & 0x200) *(u32 *)(state + 0x48) = flags | 8;
        else if (flags & 0x400) *(u32 *)(state + 0x48) = flags | 0x100;
        return;
    }
    *(u32 *)(state + 0x48) = flags & ~0x10U;
    *(int *)(state + 0x5c) = 0x20;
    *(int *)(state + 0x60) = 1;
}
