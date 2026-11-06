/* Purpose: poll two asynchronous resource operations and clear completion flags. */
extern unsigned char *D_09bb7a7c;
extern int FUN_08960fe0(void);
extern void FUN_08961010(int);
extern void FUN_08960ff8(void);
extern int FUN_08961000(void);

void FUN_0888f520(unsigned char *state)
{
    int status;

    if (state[0x1450] != 0) {
        status = FUN_08960fe0();
        if (status == 2)
            FUN_08961010(2);
        else if (status == 3)
            FUN_08960ff8();
        else if (status == 0) {
            state[0x1450] = 0;
            D_09bb7a7c[0x1e] = 0;
        }
    }
    if (state[0x1451] != 0) {
        status = FUN_08961000();
        if (status == 0) {
            state[0x1451] = 0;
            D_09bb7a7c[0x1e] = 0;
        }
    }
}
