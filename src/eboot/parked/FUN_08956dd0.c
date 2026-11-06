/* FUN_08956dd0: allocate and initialize a render object.
 * Main EBOOT, attempt-high-01 241-512 byte batch 23. Object roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

extern void *D_09bf5260;
int FUN_08878c28(void *, int, int);
void *FUN_09c01d70(int, int);
void FUN_09c02058(void *);

u32 *FUN_08956dd0(u8 *owner)
{
    u32 *object = 0;
    int allocation = FUN_08878c28(D_09bf5260, 0x1e0, 0x10);
    int i;

    if (allocation == 0) return 0;
    object = FUN_09c01d70(0x1e0, allocation);
    FUN_09c02058(object);
    for (i = 0; i < 0x78; i++) object[i] = 0;
    object[0] = 0x09c44290;
    for (i = 0; i < 16; i++) {
        object[0x54 + i] = (i % 5) == 0 ? 0x3f800000 : 0;
        object[0x64 + i] = (i % 5) == 0 ? 0x3f800000 : 0;
    }
    ((u8 *)object)[0x1d0] = 0xff;
    ((u8 *)object)[0x1d8] = 0xff;
    ((u8 *)object)[0x1d9] = 0xff;
    ((u8 *)object)[0x1da] = 0xff;
    ((u8 *)object)[0x1db] = 0xff;
    object[0x75] = 0;
    object[0xc] = ((*(u32 *)(owner + 0x28))++ & 0xffffff) | 0x4b000000;
    return object;
}
