/* Purpose: acquire a reference-counted subsystem on its first user. */
extern int FUN_08811ba8(void);

unsigned int FUN_088658c4(void)
{
    unsigned int *count = (unsigned int *)0x08a33884;
    if (*count == 0) {
        if (FUN_08811ba8() != 0)
            return 0x80000015;
    }
    *count = *count + 1;
    return 0;
}
