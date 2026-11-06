/* Purpose: query a compact identifier and rearrange selected bytes into two output words. */
extern void FUN_08960f38(void *);

void FUN_0888d77c(int unused, unsigned int *output)
{
    unsigned char value[12];
    unsigned int first;
    unsigned int second;

    (void)unused;
    FUN_08960f38(value);
    first = (unsigned int)value[4] + ((unsigned int)value[6] << 8) +
            ((unsigned int)value[8] << 16) + ((unsigned int)value[10] << 24);
    second = (unsigned int)value[0] + ((unsigned int)value[2] << 8);
    output[1] = second;
    output[0] = first;
}
