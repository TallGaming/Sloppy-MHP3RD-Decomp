/* Purpose: conditionally run a final operation after two readiness checks. */
extern int FUN_08828be0(void);
extern void FUN_08828e64(void);
extern int FUN_08826f90(void);
extern void FUN_08828e38(void);

void FUN_08826c8c(void)
{
    if (FUN_08828be0() != 0) {
        FUN_08828e64();
        if (FUN_08826f90() != 0)
            FUN_08828e38();
    }
}
