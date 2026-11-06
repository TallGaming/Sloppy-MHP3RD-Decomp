/* Purpose: load one profile record and mirror its public fields globally. */
extern unsigned char *D_08aace80;
extern void FUN_08946558(void *, const void *, int);
extern void FUN_0880c468(void *, int, int);
extern void FUN_0880ea5c(void *, const void *, int);
extern void FUN_0880c088(void *, const void *, int);

void FUN_0888f3f0(unsigned char *state, int index,
                  const void *record, const void *label)
{
    unsigned char *table = *(unsigned char **)(state + 0x94c);
    unsigned char *destination = table + 0x28 + index * 0xa0;
    unsigned char *name = table + 0x668 + index * 0x10;

    FUN_08946558(destination, record, 0xc0);
    FUN_0880c468(name, 0, 0x10);
    FUN_0880ea5c(name, label, 0x10);
    FUN_0880c088(D_08aace80 + 0x5fbfc + index * 0xa0, destination, 0x98);
    FUN_0880ea5c(D_08aace80 + 0x6023c + index * 0x10, label, 0x10);
}
