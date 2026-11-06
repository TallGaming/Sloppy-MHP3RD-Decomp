/*
 * Purpose: clear a fixed workspace, then copy a caller-sized payload into it.
 * Hypothesis: the size is the word at offset 8 in the descriptor.
 */
extern void FUN_08960c90(void *destination, unsigned int size);
extern void FUN_08960a10(const void *source, void *destination, unsigned int size);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_088623d8(void *context, const void *source, const void *descriptor)
{
    void *workspace = (unsigned char *)context + 0x9780;
    FUN_08960c90(workspace, 0x20000);
    FUN_08960a10(source, workspace, FIELD(descriptor, unsigned int, 8));
}
