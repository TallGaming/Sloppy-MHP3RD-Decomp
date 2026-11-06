/* Purpose: find one identifier among 100 fixed-size object records. */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void *FUN_0888e7b4(void *object, int identifier)
{
    int index = 0;
    unsigned char *result = (unsigned char *)object + 0x954;
    do {
        index++;
        if (FIELD(result, int, 4) == identifier)
            return result;
        result += 0x1c;
    } while (index != 100);
    return 0;
}
