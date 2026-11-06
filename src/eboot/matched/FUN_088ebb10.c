/* Forward a byte-fill request and return the original destination. */
extern void *FUN_0880c468(void *destination, int value, unsigned int size);

void *FUN_088ebb10(void *destination, int value, unsigned int size)
{
    return FUN_0880c468(destination, value, size);
}
