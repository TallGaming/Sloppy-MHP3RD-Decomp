/* FUN_08913118: place a child effect at a mode-specific owner transform.
 * Main EBOOT, attempt-high-01 513-1024 byte batch 5. Mode roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned int u32;
extern float DAT_089699b4, DAT_089699b8, DAT_089699bc, DAT_089699c0;
extern float DAT_08a03e84[];
int FUN_09c01fd4(void); int FUN_09c02010(); int FUN_088a0030();
void FUN_088a84e4();

void FUN_08913118(char *state)
{
    u32 flags = *(u32 *)(state + 0x48);
    int *owner = *(int **)(*(int *)(state + 0xc) + 0x17c);
    int pose = 0;
    short frame;
    *(u32 *)(state + 0x48) = flags & ~0x10U;
    if ((flags & 8) || (flags & 2) || FUN_09c01fd4() == 0) {
        *(int *)(state + 0x5c) = 0x20;
        *(int *)(state + 0x60) = 1;
        return;
    }
    if (owner == 0 || (*(u32 *)(*(int *)(state + 0xc) + 4) & 2) == 0 ||
        FUN_088a0030(owner) == 0 || FUN_09c02010(state) == 0) return;
    frame = *(short *)(state + 0x50) + 1;
    *(short *)(state + 0x50) = frame;
    if (owner[0x19] == 0) {
        if (*((u8 *)owner + 0x144d) != 0 && (short)owner[0x374] != 0) pose = 6;
    } else if (owner[0x19] == 3) {
        pose = 7;
    } else if (owner[0x19] == 2) {
        if (*((u8 *)owner + 0x3a2) == 1) return;
        switch (*((u8 *)owner + 0x62)) {
        case 0: case 3: case 4: case 7: pose = 2; break;
        case 1: pose = *((u8 *)owner + 0x3a1) == 6 ? 0 : 1; break;
        case 2: pose = *((u8 *)owner + 0x3a1) == 2 ? 5 : 3; break;
        case 9: pose = 3; break;
        case 6: pose = *((u8 *)owner + 0x3a1) == 1 ? 4 : 1; break;
        default: pose = 0; break;
        }
    }
    {
        float bob = __builtin_sinf((float)((frame & 0x3f) << 10) * DAT_089699b8 *
                                    DAT_089699bc) * DAT_089699c0;
        float *child = *(float **)(state + 0x58);
        if (pose == 7) {
            int (**vtable)(int *) = (int (**)(int *))owner[0];
            if (vtable[0x15](owner) == 1 && vtable[0x29](owner) == 1) {
                FUN_088a84e4(owner, 1, child + 4);
                child[5] += bob;
                *(u32 *)(state + 0x48) |= 0x10;
            }
        } else {
            child[4] = *(float *)(owner + 0x20);
            child[5] = *(float *)(owner + 0x21) + bob + DAT_08a03e84[pose];
            child[6] = *(float *)(owner + 0x22);
            child[7] = *(float *)(owner + 0x23);
            *(u32 *)(state + 0x48) |= 0x10;
        }
    }
}
