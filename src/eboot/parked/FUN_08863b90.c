/* Purpose: wait for a selected transfer block, record it, and publish it. */
extern int FUN_08960a48(unsigned int handle);
extern void FUN_08960c00(unsigned int delay);
extern void FUN_0886233c(void *object, int block);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_08863b90(void *object, unsigned short index)
{
    int block = FIELD(object, int, 0x3a40 + (unsigned int)index * 4);
    FIELD(object, unsigned char, 0x11a4) = 1;
    FIELD(object, unsigned short, 0x11a6) = index;
    while (FUN_08960a48(FIELD(object, unsigned int, 0x1098)) != block * 0x800)
        FUN_08960c00(10000);
    block = FIELD(object, int, 0x3a40 + (unsigned int)index * 4) * 0x800;
    FIELD(object, int, 0x2f538) = block;
    if (block < 0)
        block += 0x7ff;
    FUN_0886233c(object, block >> 11);
}
