/* Purpose: register a stack-local callback record with a global subsystem. */
extern unsigned char D_0896b320[];
extern unsigned int D_09beb0bc;
extern void FUN_08900bf0(unsigned int context, void *data, unsigned int value,
                         unsigned int nine, unsigned int zero1,
                         unsigned int zero2, unsigned int zero3,
                         unsigned int zero4);

#define STACK_RECORD (*(void **volatile *)0x0897286c)
#define REGISTER_DATA ((void *)0x0897284c)

void FUN_08851c04(unsigned int unused, unsigned int value)
{
    void *local[4];
    (void)unused;
    STACK_RECORD = local;
    local[0] = D_0896b320 + 0xd8;
    FUN_08900bf0(D_09beb0bc, REGISTER_DATA, value, 9, 0, 0, 0, 0);
}
