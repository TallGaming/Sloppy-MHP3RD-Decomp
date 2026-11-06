/* Purpose: submit a three-word stack record and return the pointed result. */
extern unsigned int D_08965c0c[];
extern void *FUN_08859e80(unsigned int code, const void *record,
                          unsigned int size);

unsigned int FUN_08859fac(unsigned int value)
{
    unsigned int local[3];
    unsigned int *result;
    local[0] = D_08965c0c[65];
    local[1] = D_08965c0c[66];
    local[2] = value;
    result = (unsigned int *)FUN_08859e80(0x309, local, 12);
    return *result;
}
