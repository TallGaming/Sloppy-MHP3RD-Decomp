/* Purpose: resolve duplicate records by priority and compact later records when needed. */
void *memcpy(void *, const void *, unsigned int);

int FUN_0886d108(unsigned char *object, int *candidate)
{
    unsigned int index;

    if ((short)candidate[1] >= 5)
        return 1;
    for (index = 0; index < 10; index++) {
        int *record = (int *)(object + 0x592a4 + index * 0xa4);
        short priority;
        if (record[0] != candidate[0])
            break;
        priority = (short)record[1];
        if (priority < 5 && priority != 3 &&
            *(short *)((unsigned char *)record + 6) == *(short *)((unsigned char *)candidate + 6)) {
            unsigned int move;
            if ((short)candidate[1] < priority)
                return 0;
            if (priority == 4 || index > 8)
                return 1;
            for (move = index + 1; move != 9; move++)
                memcpy(object + 0x592a4 + index * 0xa4,
                       object + 0x592a4 + move * 0xa4, 0xa4);
            return 1;
        }
    }
    return 1;
}
