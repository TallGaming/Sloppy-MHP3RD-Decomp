/* Purpose: gather three player values and forward them with a selected mode. */
extern int D_09beb0bc;
extern int D_08a31df0;
extern void *D_08aace80;
extern void FUN_088fa2b0(int, int, int);
extern int FUN_0886821c(void *, int);
extern void FUN_0884c5c0(int, int, unsigned char, int, int);

void FUN_0888e848(int unused, unsigned char mode)
{
    int first;
    int second;
    int third;

    (void)unused;
    FUN_088fa2b0(D_09beb0bc, 8, 1);
    first = FUN_0886821c(D_08aace80, 0x1c);
    second = FUN_0886821c(D_08aace80, 0x2f);
    third = FUN_0886821c(D_08aace80, 0x30);
    FUN_0884c5c0(D_08a31df0, first, mode, second, third);
}
