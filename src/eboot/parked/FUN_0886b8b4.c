/* Purpose: require every identifier in the first fixed list. */
extern unsigned int FUN_08866614(void *object, unsigned short identifier);
unsigned int FUN_0886b8b4(void *object)
{
    short *item = (short *)0x089e2994;
    if (*item != 0) {
        item++;
        do {
            if (FUN_08866614(object, *item) == 0) return 0;
        } while (*item++ != 0);
    }
    return 1;
}
