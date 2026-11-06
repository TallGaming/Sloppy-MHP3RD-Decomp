/* Purpose: run the selected checksum calculation worker and clear its busy flag. */
extern void FUN_0888f640(void *);
extern void FUN_0888e1dc(void *);
extern void FUN_08960c18(int);

int FUN_0888f730(int unused, unsigned char **argument)
{
    unsigned char *object = *argument;

    (void)unused;
    if (*(int *)(object + 0x654c) == 0)
        FUN_0888f640(object);
    else
        FUN_0888e1dc(object);
    object[0x6548] = 0;
    FUN_08960c18(0);
    return 0;
}
