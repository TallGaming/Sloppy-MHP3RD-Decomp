/* FUN_0890ec60: resolve a vertical coordinate from collision state and flags.
 * Main EBOOT, attempt-high-01 513-1024 byte batch 4. Collision roles are hypotheses. */
typedef unsigned short u16;
typedef unsigned int u32;
extern int _DAT_09c47be0, _DAT_09bb7e90, _DAT_08aace80;
extern float DAT_089698d4, DAT_089698d8, DAT_089698dc;
int FUN_088cca4c(int); void FUN_09c19408();

void FUN_0890ec60(char *object, int *position, float *height)
{
    int local[4] = {position[0], position[1], position[2], position[3]};
    int owner = *(int *)(object + 0xc);
    u16 flags;
    int value;
    if (*(short *)(object + 0x96) == 0) {
        *height = *(float *)(owner + 0xd8) + DAT_089698d4;
        return;
    }
    flags = *(u16 *)(owner + 0x130);
    if (flags & 0x406) {
        value = FUN_088cca4c(_DAT_09bb7e90);
        FUN_09c19408(_DAT_09c47be0, local, value, 0, 0, 0xffff, 2, height, 0);
        *height += DAT_089698d8;
        return;
    }
    if ((flags & 0x2080) == 0) {
        if ((flags & 0x1220) == 0 &&
            ((flags & 0x4000) == 0 || (*(u32 *)(_DAT_08aace80 + 0x60474) & 1) == 0)) {
            *height = *(float *)(owner + 0xd8);
            return;
        }
        value = FUN_088cca4c(_DAT_09bb7e90);
        FUN_09c19408(_DAT_09c47be0, local, value, 0, height, 0xffff, 2, 0, 0);
    } else {
        value = FUN_088cca4c(_DAT_09bb7e90);
        FUN_09c19408(_DAT_09c47be0, local, value, 0, 0, 0xffff, 2, 0, height);
    }
    *height += DAT_089698dc;
}
