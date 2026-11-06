/* FUN_08914d2c: update child effects from a five-frame transform history.
 * Main EBOOT, attempt-high-01 513-1024 byte batch 5. History roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned int u32;
extern int _DAT_08aace80;
extern int DAT_08969a50, DAT_08969a54;
int FUN_09c01fd4(void); int FUN_09ce92dc(); int FUN_088a0030();
int FUN_08913dec(); int FUN_08878f8c();
void FUN_08914108(); void FUN_08913e64(); void FUN_088759ec();

void FUN_08914d2c(char *state)
{
    u32 flags = *(u32 *)(state + 0x48);
    int *owner = *(int **)(state + 0xc);
    if ((flags & 8) == 0 && (flags & 2) == 0 && FUN_09c01fd4() != 0) {
        short timer = *(short *)(state + 0x50);
        if (timer != -1) {
            timer--;
            *(short *)(state + 0x50) = timer;
            if (timer < 1) goto stop;
            if (*(short *)((char *)owner + 0x18e) != *(short *)(state + 0x52) &&
                *(short *)(state + 0x66) != *(short *)((char *)owner + 0x18e) &&
                FUN_08913dec(state) != 0) return;
        }
        if (state[0x55] == 0) return;
        {
            int slot;
            for (slot = 0; slot < (u32)(u8)state[0x55]; slot++) {
                int history;
                float position[4];
                float matrix[16];
                char *child = *(char **)(state + 0x58) + slot * 0x30;
                *(u32 *)(child + 4) |= 4;
                for (history = 5; history > 0; history--) {
                    int i;
                    float *to = (float *)(state + (history * 2 + slot) * 0x40 + 0x70);
                    float *from = (float *)(state + (history - 1) * 0x80 + slot * 0x40 + 0x70);
                    for (i = 0; i < 16; i++) to[i] = from[i];
                }
                FUN_08914108(state, position, slot);
                FUN_08913e64(state, matrix, slot);
                FUN_088759ec(position, position, matrix);
                matrix[12] += position[0]; matrix[13] += position[1]; matrix[14] += position[2];
                {
                    int i;
                    float *current = (float *)(state + slot * 0x40 + 0x70);
                    for (i = 0; i < 16; i++) current[i] = matrix[i];
                    if ((owner[1] & 4) == 0 && FUN_088a0030(owner) != 0 &&
                        *(u8 *)(_DAT_08aace80 + 0x6bc) != 1) {
                        ((float *)child)[4] = current[12];
                        ((float *)child)[5] = current[13];
                        ((float *)child)[6] = current[14];
                        ((float *)child)[7] = 0.0f;
                        *(u32 *)(child + 4) &= ~4U;
                    }
                }
            }
        }
        return;
    }
stop:
    *(int *)(state + 0x5c) = 0x20;
    *(u32 *)(state + 0x48) = flags & ~0x10U;
    *(int *)(state + 0x60) = 1;
}
