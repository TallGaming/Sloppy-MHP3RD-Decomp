/* Purpose: initialize a global subsystem through four ordered calls. */
extern void FUN_08960c10(unsigned int zero, unsigned int size);
extern void FUN_08915278(void);
extern void FUN_088e6c40(unsigned int value);
extern void thunk_FUN_089150dc(void);

#define GLOBAL_ZERO (*(unsigned int *)0x09bc1ed0)
#define GLOBAL_VALUE (*(unsigned int *)0x09bc1ed8)

unsigned int FUN_0888c5e4(void)
{
    GLOBAL_ZERO = 0;
    FUN_08960c10(0, 0x30);
    FUN_08915278();
    FUN_088e6c40(GLOBAL_VALUE);
    thunk_FUN_089150dc();
    return 0;
}
