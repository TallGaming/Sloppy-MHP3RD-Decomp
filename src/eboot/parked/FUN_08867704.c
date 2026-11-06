/* Purpose: count two resource slots whose global lookup succeeds. */
extern int FUN_0887f018(void *context, int index);

#define LOOKUP_CONTEXT (*(void **)0x08ab1568)

int FUN_08867704(void)
{
    short count = 0;
    int index;
    for (index = 6; index < 8; index++) {
        if (FUN_0887f018(LOOKUP_CONTEXT, index) != 0)
            count = (short)(count + 1);
    }
    return count;
}
