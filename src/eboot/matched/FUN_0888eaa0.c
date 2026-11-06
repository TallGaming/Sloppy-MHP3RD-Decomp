/* Purpose: update two object bytes from a query, then run a final handler. */
extern unsigned char FUN_0888e9d0(void *object, unsigned int value);
extern void FUN_08960c18(unsigned int zero);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned int FUN_0888eaa0(unsigned int unused, void **holder)
{
    void *object = *holder;
    (void)unused;
    FIELD(object, unsigned char, 0x6549) =
        FUN_0888e9d0(object, FIELD(object, unsigned int, 0x6554));
    FIELD(object, unsigned char, 0x6548) = 0;
    FUN_08960c18(0);
    return 0;
}
