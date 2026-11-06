/* Purpose: signal a global object when a record halfword is nonzero. */
extern unsigned char D_08aace80[];
extern void FUN_08960bd8(unsigned int value, unsigned int one, unsigned int zero);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_0887c4f4(const void *record)
{
    if (FIELD(record, short, 0x14) == 0)
        return;
    FUN_08960bd8(*(unsigned int *)(D_08aace80 + 0x490c4), 1, 0);
}
