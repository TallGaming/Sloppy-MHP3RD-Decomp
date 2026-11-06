/* FUN_08911e48: update a repeated owner effect and copy its current attachment transform.
 * Main EBOOT, attempt-high-01 513-1024 byte batch 4. Effect roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned int u32;
extern int _DAT_09bb7e78, _DAT_09bb7e90;
int FUN_09c01fd4(void); int FUN_09c02010(); int FUN_088a0030();
u32 FUN_088cca4c(); int FUN_088a02ec(); int FUN_088a02f8();
void FUN_088cc8a4(); void FUN_088cc364(); int FUN_0889fbd0();

void FUN_08911e48(char *state)
{
    u32 flags = *(u32 *)(state + 0x48);
    int owner;
    int part;
    short frame;
    if ((flags & 8) == 0 && (flags & 2) == 0 && FUN_09c01fd4() != 0) {
        int i;
        *(u32 *)(state + 0x48) |= 0x10;
        for (i = 0; i < (u32)(u8)state[0x55]; i++) {
            char *child = *(char **)(state + 0x58) + i * 0x30;
            *(u32 *)(child + 4) |= 4;
        }
        owner = *(int *)(state + 0xc);
        if ((*(u32 *)(owner + 4) & 4) != 0 || FUN_088a0030(owner) == 0 ||
            FUN_09c02010(state) == 0) return;
        frame = *(short *)(state + 0x50);
        if (*(u8 *)(owner + 0xd6) == FUN_088cca4c(_DAT_09bb7e90) && frame % 0x2d == 0) {
            if (*(int *)(owner + 100) == 0) {
                FUN_088cc8a4(_DAT_09bb7e78, 3, 0x34, 0, FUN_088a02ec(owner),
                             FUN_088a02f8(owner), -1, owner + 0x80, 0, 0, 0);
            } else if (*(int *)(owner + 100) == 3) {
                FUN_088cc364(_DAT_09bb7e78, 3, 0x9a, 0, FUN_088a02ec(owner),
                             FUN_088a02f8(owner), -1, owner + 0x80, 0, -1,
                             *(int *)(state + 0x6c), 0, 0);
            }
        }
        *(short *)(state + 0x50) = frame + 1;
        part = FUN_0889fbd0(owner, *(short *)(state + 100));
        {
            int *destination = *(int **)(state + 0x58);
            int *source = (int *)(part + 0x30);
            destination[4] = source[0];
            destination[5] = source[1];
            destination[6] = source[2];
            destination[7] = source[3];
            *(u32 *)((char *)destination + 4) &= ~4U;
        }
        return;
    }
    *(int *)(state + 0x5c) = 0x20;
    *(u32 *)(state + 0x48) = flags & ~0x10U;
    *(int *)(state + 0x60) = 1;
}
