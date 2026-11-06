/* FUN_0890e6f8: spawn an action effect and optionally emit its associated sound.
 * Main EBOOT, attempt-high-01 513-1024 byte batch 4. Action roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned int u32;
extern int DAT_089698c8, DAT_089698cc, DAT_089698d0;
extern int _DAT_09bb7e78, _DAT_09bb7e90, _DAT_09bf5260;
int FUN_09c06b4c(); int FUN_09c06ffc(); int FUN_09c06cb0();
void FUN_09c05e54(); int FUN_08955ac8(); u32 FUN_088cca4c();
int FUN_088a02ec(); int FUN_088a02f8(); void FUN_088cc8a4();

void FUN_0890e6f8(int *object, int action)
{
    int mode;
    int effect;
    int handle;
    int vector[4] = {0, DAT_089698c8, 0, 0};
    if (object == 0) return;
    mode = object[0x19];
    if (mode == 3 && (object[0x50c] & 0x400)) return;

    if (action == 1 || action == 2 || action == 9 || action == 0xb) {
        int variant = (mode == 0 || mode == 3) ? 2 : 0;
        if (action == 1 || action == 0xb) {
            FUN_09c06b4c(0x2c, 0x44, object, variant, 0, 1, 4, 0);
        } else if (action == 2) {
            FUN_09c06b4c(0x2c, 0x49, object, variant, 0, 1, 4, 0);
        } else if (action == 9) {
            FUN_09c06b4c(0x2c, 0x4a, object, variant, 0, 1, 4, 0);
        }
        if (action == 0xb) return;
    } else {
        int variant = mode == 0 ? 3 : (mode == 3 ? 2 : 0);
        if (action == 0 || action == 10 || action == 4) {
            int kind = action == 4 ? 4 : 3;
            int table = action == 10 ? DAT_089698cc : DAT_089698d0;
            FUN_09c06ffc(table, 0x2b, kind, object, variant, vector, 0, 1, 0, 0);
            if (*(u8 *)((char *)object + 0xd6) != FUN_088cca4c(_DAT_09bb7e90)) return;
        } else {
            effect = FUN_09c06cb0(0x2b, 0, object, variant, vector, 0, 1, 4, 0);
            handle = FUN_08955ac8(_DAT_09bf5260, effect);
            if (handle != 0) FUN_09c05e54(handle, *(int *)(0x08a03b4c + action * 4));
            FUN_09c06cb0(0x2b, 1, object, variant, vector, 0, 1, 4, 0);
            effect = FUN_09c06cb0(0x2b, 2, object, variant, vector, 0, 1, 4, 0);
            handle = FUN_08955ac8(_DAT_09bf5260, effect);
            if (handle != 0) FUN_09c05e54(handle, *(int *)(0x08a03a9c + action * 4));
        }
    }
    if (*(u8 *)((char *)object + 0xd6) != FUN_088cca4c(_DAT_09bb7e90)) return;
    if (object[0x19] == 0) {
        int active = ((int (*)(int *))(*(int *)(object[0] + 0x134)))(object);
        FUN_088cc8a4(_DAT_09bb7e78, 3, active ? 0x32 : 0x52, 0,
                     FUN_088a02ec(object), FUN_088a02f8(object), -1,
                     object + 0x20, 0, 0, 0);
    } else if (object[0x19] == 3) {
        FUN_088cc8a4(_DAT_09bb7e78, 3, 0x99, 0, FUN_088a02ec(object),
                     FUN_088a02f8(object), -1, object + 0x20, 0, 0, 0);
    }
}
