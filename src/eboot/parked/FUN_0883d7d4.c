/* Purpose: test a record byte through a global query or a fallback flag. */
extern unsigned char D_08a333c0[];
extern int FUN_0885f610(unsigned int context, unsigned char value);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned int FUN_0883d7d4(unsigned int unused, const void *record)
{
    unsigned int context = *(unsigned int *)(D_08a333c0 + 0x9c);
    int status;
    (void)unused;
    status = FUN_0885f610(context, FIELD(record, unsigned char, 0x479));
    unsigned int result = 0;
    if (status == 1 || FIELD(record, signed char, 0x5a8) != 0)
        result = 1;
    return result;
}
