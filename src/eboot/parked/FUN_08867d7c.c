/* Purpose: map a category to its table selector and resolve an entry. */
extern unsigned int FUN_08867cc0(unsigned int context, unsigned int selector,
                                 unsigned short index);

unsigned int FUN_08867d7c(unsigned int context, short category, unsigned short index)
{
    if (category == 0) return FUN_08867cc0(context, 3, index);
    if (category == 1) return FUN_08867cc0(context, 5, index);
    if (category == 2) return FUN_08867cc0(context, 7, index);
    if (category == 3) return FUN_08867cc0(context, 9, index);
    if (category == 7) return FUN_08867cc0(context, 0x0f, index);
    if (category == 8) return FUN_08867cc0(context, 0x11, index);
    if (category == 9) return FUN_08867cc0(context, 0x13, index);
    if (category == 0x0b) return FUN_08867cc0(context, 0x17, index);
    if (category == 0x0c) return FUN_08867cc0(context, 0x19, index);
    return 0;
}
