/* Purpose: close a nonnegative handle and reset it to minus one. */
extern void FUN_08961050(int handle, unsigned int zero);

unsigned int FUN_0887af8c(int *handle)
{
    if (*handle >= 0) {
        FUN_08961050(*handle, 0);
        *handle = -1;
    }
    return 0;
}
