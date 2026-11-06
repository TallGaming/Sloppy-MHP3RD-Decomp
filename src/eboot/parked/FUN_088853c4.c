/*
 * Purpose: publish a 16-bit value and mark it valid in an embedded state.
 * Hypothesis: the pointer at offset 8 owns the fields near offset 0x24e8.
 */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_088853c4(const void *object)
{
    unsigned int value = FIELD(object, unsigned int, 0x10);
    void *state = FIELD(object, void *, 8);
    FIELD(state, unsigned char, 0x24ec) = 1;
    FIELD(state, unsigned int, 0x24e8) = value & 0xffff;
}
