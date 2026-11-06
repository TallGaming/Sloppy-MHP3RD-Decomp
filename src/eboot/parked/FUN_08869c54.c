/* Purpose: choose an indexed short value using the active mode or a random variant. */
extern void *D_09bc1ed8;
extern unsigned int D_09bb7a64;
extern short DAT_089c87b0[];
extern unsigned int FUN_088e62f0(void *, int);

int FUN_08869c54(int unused, unsigned int group, unsigned int item)
{
    unsigned int variant = 0;
    unsigned int index;

    (void)unused;
    FUN_088e62f0(D_09bc1ed8, 1);
    FUN_088e62f0(D_09bc1ed8, 1);
    FUN_088e62f0(D_09bc1ed8, 1);
    if ((D_09bb7a64 & 0xf0) == 0)
        variant = FUN_088e62f0(D_09bc1ed8, 1) & 3;
    else if ((D_09bb7a64 & 0x10) == 0) {
        variant = 1;
        if ((D_09bb7a64 & 0x40) == 0) {
            variant = 2;
            if ((D_09bb7a64 & 0x80) == 0)
                variant = 3;
        }
    }
    index = (((group & 0xff) * 0x14 + (item & 0xff)) * 4 + variant);
    return DAT_089c87b0[index];
}
