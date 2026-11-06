/* Purpose: dispatch and clear every pending graphics-operation bit in a command record. */
extern void FUN_08811810(unsigned short, unsigned short);
extern void FUN_088117ac(unsigned short, int, int, unsigned short, unsigned short);
extern void FUN_088118bc(unsigned short, unsigned short, unsigned short);
extern void FUN_08811860(unsigned short, int, int, int);
extern void FUN_08811734(unsigned short);
extern void FUN_08811770(unsigned short);

void FUN_08865aac(unsigned char *command)
{
    unsigned int mask = 1;

    while (*(unsigned int *)(command + 0xc) != 0) {
        unsigned int bit = *(unsigned int *)(command + 0xc) & mask;
        if (bit == 4)
            FUN_08811810(*(unsigned short *)(command + 6), *(unsigned short *)(command + 0x14));
        else if (bit == 0x400)
            FUN_088117ac(*(unsigned short *)(command + 6), *(short *)(command + 0x10),
                         *(short *)(command + 0x12), *(unsigned short *)(command + 0x20),
                         *(unsigned short *)(command + 0x22));
        else if (bit == 0x800)
            FUN_088118bc(*(unsigned short *)(command + 6), *(unsigned short *)(command + 0x16),
                         *(unsigned short *)(command + 0x18));
        else if (bit == 0x4000) {
            FUN_08811860(*(unsigned short *)(command + 6), *(int *)(command + 0x24),
                         *(int *)(command + 0x28), 1);
            FUN_08811734(*(unsigned short *)(command + 6));
        } else if (bit == 0x8000)
            FUN_08811770(*(unsigned short *)(command + 6));
        *(unsigned int *)(command + 0xc) &= ~mask;
        mask <<= 1;
    }
}
