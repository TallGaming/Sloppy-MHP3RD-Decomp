/* Purpose: run the selected checksum verification worker and publish its result. */
extern unsigned char FUN_0888e4f4(void *, void *);
extern unsigned char FUN_0888e2ac(void *, void *, unsigned char);
extern void FUN_08960c18(int);

int FUN_0888e5c4(int unused, unsigned char **argument)
{
    unsigned char *object = *argument;
    unsigned char result;

    (void)unused;
    if (*(int *)(object + 0x654c) == 0)
        result = FUN_0888e4f4(object, *(void **)(object + 0x94c));
    else
        result = FUN_0888e2ac(object, *(void **)(object + 0x950), object[0x654a]);
    object[0x6549] = result;
    object[0x6548] = 0;
    FUN_08960c18(0);
    return 0;
}
