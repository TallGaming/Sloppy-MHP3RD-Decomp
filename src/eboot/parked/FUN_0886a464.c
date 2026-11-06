/* Purpose: report a rank, its successor byte, and the next threshold. */
extern signed char FUN_0886639c(void *object);
#define FIELD(base,type,offset) (*(type *)((unsigned char *)(base)+(offset)))
void FUN_0886a464(void *object, signed char *next, unsigned int *rank, unsigned int *threshold)
{
    unsigned int *cursor = (unsigned int *)0x089c7658;
    unsigned int end = *(unsigned int *)0x089c76d0;
    *rank = FIELD(object, unsigned int, 0x5d480);
    if (*cursor != end) {
        unsigned int value = *cursor;
        do {
            if (FIELD(object, unsigned int, 0x5d480) < value) break;
            cursor++; value = *cursor;
        } while (value != end);
    }
    *next = FUN_0886639c(object) + 1;
    *threshold = *cursor;
}
