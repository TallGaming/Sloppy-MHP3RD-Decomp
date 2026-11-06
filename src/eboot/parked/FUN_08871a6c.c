/* Purpose: run an update, clear a global flag, and notify another subsystem. */
extern unsigned char *D_09bb7a7c;
extern unsigned int D_09bee670;
extern void FUN_0886c6f0(void);
extern void FUN_08921d38(unsigned int value);

void FUN_08871a6c(void)
{
    unsigned int value;
    FUN_0886c6f0();
    value = D_09bee670;
    D_09bb7a7c[0x1e] = 0;
    FUN_08921d38(value);
}
