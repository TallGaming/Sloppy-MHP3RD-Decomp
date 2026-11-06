/*
 * FUN_0882fc5c: partial packet clear-and-copy model.
 *
 * This is an ABI diagnostic only, not a whole candidate: the target invokes
 * the clear and copy primitives, but its fixed/derived packet destinations,
 * source fields, extents, and formal arguments remain unbound.
 */
typedef unsigned int u32;

extern void FUN_088ebb10(void *destination, int value, u32 size);
extern void FUN_088ebb18(void *destination, const void *source, u32 size);

void FUN_0882fc5c(void *destination, const void *source, u32 size)
{
    FUN_088ebb10(destination, 0, size);
    FUN_088ebb18(destination, source, size);
}
