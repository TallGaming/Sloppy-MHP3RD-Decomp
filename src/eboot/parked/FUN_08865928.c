/* Purpose: acquire a second reference-counted subsystem on its first user. */
extern int FUN_08811b8c(void);

unsigned int FUN_08865928(void)
{
    unsigned int *count = (unsigned int *)0x08a33880;
    if (*count == 0) {
        if (FUN_08811b8c() != 0)
            return 0x80000017;
    }
    *count = *count + 1;
    return 0;
}
