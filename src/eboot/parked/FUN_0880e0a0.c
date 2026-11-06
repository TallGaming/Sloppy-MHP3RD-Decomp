/*
 * Purpose hypothesis: forward allocation to the reentrant allocator using the
 * current reentrancy context.
 * Public-source family hypothesis: newlib malloc wrapper.
 * Boundary hypothesis: the recorded 396-byte range contains several adjacent
 * functions; this draft reconstructs only the entry wrapper.
 */
typedef unsigned int size_t;

extern void *FUN_0880b474(void);
extern void *FUN_0880dfb4();

void *FUN_0880e0a0(size_t size)
{
    return FUN_0880dfb4(FUN_0880b474(), size);
}
