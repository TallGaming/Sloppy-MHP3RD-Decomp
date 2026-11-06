/* Forward a byte-copy request to the independently identified public memcpy.
 * The three argument widths are corroborated by existing callers and the new
 * packet-buffer append function; an argument-free tail-call body did not prove
 * an argument-free interface. Existing callers ignore the memcpy result. */
extern void *FUN_0880c088(void *destination, const void *source, unsigned int size);

void FUN_088ebb18(void *destination, const void *source, unsigned int size)
{
    (void)FUN_0880c088(destination, source, size);
}
