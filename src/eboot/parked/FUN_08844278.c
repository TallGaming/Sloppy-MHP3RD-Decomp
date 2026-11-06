/* Purpose: clear a volatile 16-byte local record before calling a handler. */
extern void FUN_08844098(void);

void FUN_08844278(void)
{
    volatile unsigned char local[16];
    int index;
    for (index = 0; index < 16; index++)
        local[index] = 0;
    FUN_08844098();
}
