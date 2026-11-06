/* Purpose: run two follow-up operations when the subsystem is ready. */
extern int FUN_08828be0(void);
extern void FUN_08828e64(void);
extern void FUN_08828e38(void);

void FUN_08826c4c(void)
{
    if (FUN_08828be0() == 0)
        return;
    FUN_08828e64();
    FUN_08828e38();
}
