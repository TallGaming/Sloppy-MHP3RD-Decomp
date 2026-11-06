/* Purpose: select the first valid one of four queued records and notify globally. */
extern unsigned int D_08a29198;
extern int FUN_088603ec(void *owner, void *entry);
extern void FUN_0882a34c(unsigned int value, unsigned int hundred,
                         unsigned int zero1, unsigned int zero2);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_08860888(void *owner)
{
    int index = 0;
    unsigned char *entry = (unsigned char *)owner + 4;
    while (FIELD(entry, signed char, 0) == 0 || FUN_088603ec(owner, entry) < 1) {
        index++;
        entry += 0x18;
        if (index == 4) {
            FIELD(owner, unsigned char, 0x78) = 0;
            return;
        }
    }
    FIELD(owner, signed char, 1) = index;
    FIELD(owner, unsigned char, 0x78) = 1;
    FUN_0882a34c(D_08a29198, 100, 0, 0);
}
