/* Purpose: clear a global flag when it is set and a query succeeds. */
extern unsigned char *D_09bb7a7c;
extern int FUN_0886c990(void);

void FUN_0886ca10(void)
{
    if (D_09bb7a7c[0x1e] == 0 || FUN_0886c990() == 0)
        return;
    D_09bb7a7c[0x1e] = 0;
}
