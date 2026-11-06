/*
 * Purpose: release a handle, then wait until a status query reaches zero.
 * Hypothesis: the handle is the word at object offset 0x297a4.
 */
extern void FUN_08960c48(unsigned int handle);
extern int FUN_08960e40(void);
extern void FUN_08960c00(unsigned int delay);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_08862380(const void *object)
{
    FUN_08960c48(FIELD(object, unsigned int, 0x297a4));
    while (FUN_08960e40() != 0) {
        FUN_08960c00(10000);
    }
}
