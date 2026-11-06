/* Purpose: require every identifier in one selected secondary list. */
extern unsigned int FUN_08866614(void *object, unsigned short identifier);
unsigned int FUN_0886b838(void *object, int list)
{
    short **lists = (short **)0x089e2b84; short *item = lists[list];
    while (*item != 0) {
        if (FUN_08866614(object, *item++) == 0) return 0;
    }
    return 1;
}
