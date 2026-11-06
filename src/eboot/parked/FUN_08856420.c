/* Purpose: clear variable-length word arrays selected by a global count table. */
extern unsigned char D_0897d5f8[];

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_08856420(unsigned char *records)
{
    signed char *count = (signed char *)(D_0897d5f8 + 0x40);
    signed char *end = (signed char *)(D_0897d5f8 + 0x54);
    do {
        if (*count > 0) {
            unsigned int *word = FIELD(records, unsigned int *, 0x130);
            int index = 0;
            do {
                *word++ = 0;
                index++;
            } while (index < *count);
        }
        count++;
        records += 4;
    } while (count != end);
}
