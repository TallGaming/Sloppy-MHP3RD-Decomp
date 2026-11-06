/* Purpose: store a byte and mirror it into one of two global modes. */
extern void *D_08aace80;
extern void FUN_0886d948(void *object, unsigned int mode, unsigned char value);

void FUN_0887fda0(unsigned char *output, int mode, unsigned char value)
{
    unsigned int mapped = 1;
    *output = value;
    if (mode == 0 || (mapped = 2, mode == 1))
        FUN_0886d948(D_08aace80, mapped, value);
}
