/* Purpose: copy 42 bytes from a deeply indexed archive record. */
extern void FUN_0880ea5c(void *destination, const void *source, unsigned int size);

#define GLOBAL_BASE (*(unsigned char **)0x09bc1ed8)

void FUN_0888d71c(void *object, unsigned char *archive, int index)
{
    int a = *(int *)(GLOBAL_BASE + 0x10fa34c);
    int b = *(int *)(archive + a * 4);
    int c = *(int *)(archive + *(int *)(archive + b + 0x18));
    int d = *(int *)(archive + c);
    FUN_0880ea5c((unsigned char *)object + index * 0x2b + 0x1490,
                 archive + d, 0x2a);
}
