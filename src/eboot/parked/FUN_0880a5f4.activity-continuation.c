/*
 * Purpose hypothesis: dispatch registered exit handlers in reverse order,
 * then transfer the process exit status to the final termination routine.
 *
 * The handler block layout matches the old newlib `_atexit` representation:
 * a linked list, a count, 32 function slots, 32 argument slots, and a
 * bitset that selects callbacks taking `(int, void *)`.
 */
typedef unsigned int u32;
typedef unsigned char u8;

typedef void (*ExitHandler)(void);
typedef void (*ExitHandlerWithArgs)(int status, void *argument);

typedef struct ExitHandlerBlock {
    struct ExitHandlerBlock *next;
    int count;
    ExitHandler handlers[32];
    void *arguments[32];
    u32 handler_types;
} ExitHandlerBlock;

extern void *FUN_0880c5a4(void);
extern void FUN_088041c8(int status);

void FUN_0880a5f4(int status)
{
    ExitHandlerBlock *block;

    block = *(ExitHandlerBlock **)((u8 *)FUN_0880c5a4() + 0x148);
    while (block != 0) {
        int count = block->count;
        int index = count - 1;
        if (index >= 0) {
            void **arguments = block->arguments;
            ExitHandler *handler = block->handlers + index;
            void **argument = arguments + index;
            int type_bit = 1 << index;
            int called = 0;

            while (called != count) {
                if (((u32 *)arguments)[32] & type_bit)
                    ((ExitHandlerWithArgs)*handler)(status, *argument);
                else
                    (*handler)();
                ++called;
                type_bit >>= 1;
                --handler;
                --argument;
            }
        }
        block = block->next;
    }
    FUN_088041c8(status);
}
