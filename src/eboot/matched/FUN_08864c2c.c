/* Purpose: stop and release a positive handle using a temporary record. */
extern void FUN_08960a88(int handle, int zero1, int zero2, void *record, int zero3);
extern void FUN_08960a80(int handle);

void FUN_08864c2c(unsigned int unused, int handle)
{
    unsigned char local[16];
    (void)unused;
    if (handle > 0) {
        FUN_08960a88(handle, 0, 0, local, 0);
        FUN_08960a80(handle);
    }
}
