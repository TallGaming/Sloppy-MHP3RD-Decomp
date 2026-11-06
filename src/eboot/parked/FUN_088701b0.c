/* Purpose: report whether a selected player slot is active under the current network mode. */
extern unsigned char *D_09bc1ed8;
extern unsigned char *D_08aace80;
extern void *D_09bb7e90;
extern int FUN_088cca4c(void *);
extern int FUN_0886a004(void *);
extern int FUN_08869f8c(void *);
extern int FUN_0886cee8(void *, unsigned int);

int FUN_088701b0(int unused, unsigned int slot)
{
    int result;
    (void)unused;
    slot &= 0xff;
    if ((*(unsigned int *)(D_09bc1ed8 + 0x10fa354) & 1) != 0)
        result = FUN_0886cee8(D_08aace80, slot);
    else if (FUN_088cca4c(D_09bb7e90) == 2)
        return (*(int *)(D_08aace80 + slot * 0xfc + 0x38) << 10) < 0;
    else if (slot == 0)
        result = FUN_0886a004(D_08aace80);
    else if (slot == 1)
        result = FUN_08869f8c(D_08aace80);
    else
        return 0;
    return result != 0;
}
