/* Purpose: clear the local utility-ready flag and reset the system utility. */
extern unsigned char D_08aaceb5;
extern void FUN_08960c28(void);

void FUN_088755b0(void)
{
    D_08aaceb5 = 0;
    FUN_08960c28();
}
