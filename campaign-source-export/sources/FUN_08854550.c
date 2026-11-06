/* Initialize the audio services and mark all channel slots unused. */
extern int D_08a31dfc;
extern int D_08a31e00[];

extern int FUN_08858024(void);
extern unsigned int FUN_088598d0(void);
extern void FUN_088585a8(void);
extern unsigned int FUN_08859fac(unsigned int mode);
extern int FUN_0885af64(void);

int FUN_08854550(unsigned int mode)
{
    int *slot;

    FUN_08858024();
    FUN_088598d0();
    FUN_088585a8();
    FUN_08859fac(mode);
    FUN_0885af64();

    D_08a31dfc = 0;
    for (slot = D_08a31e00; slot != D_08a31e00 + 32; ++slot)
        *slot = -1;
    return 0;
}

