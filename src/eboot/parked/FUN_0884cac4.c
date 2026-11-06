/* Purpose: register a stack-local callback record with a global subsystem. */
extern unsigned char D_0896b320[];
extern unsigned int D_09beb0bc;
extern void FUN_08901000(unsigned int context, void *data, unsigned int one,
                         unsigned int zero1, unsigned int zero2,
                         unsigned int zero3);

#define STACK_RECORD (*(void **volatile *)0x0897bad0)
#define REGISTER_DATA ((void *)0x0897bab0)

void FUN_0884cac4(void)
{
    void *local[4];
    STACK_RECORD = local;
    local[0] = D_0896b320 + 0xd8;
    FUN_08901000(D_09beb0bc, REGISTER_DATA, 1, 0, 0, 0);
}
