/* Purpose: obtain a short system value and copy six bytes on success. */
extern int FUN_089610d0(void *output);
extern void thunk_FUN_0880c088(void *destination, const void *source,
                               unsigned int size);

int FUN_08830604(void *destination)
{
    unsigned char local[16];
    int result = FUN_089610d0(local);
    if (result < 0)
        return result;
    thunk_FUN_0880c088(destination, local, 6);
    return 0;
}
