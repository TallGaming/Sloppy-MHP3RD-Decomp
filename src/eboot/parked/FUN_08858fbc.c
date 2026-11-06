/* Purpose: compare four bytes against the second global signature. */
extern unsigned char D_08965c14[];
extern int FUN_0880e8dc(const void *value, const void *signature, unsigned int size);

unsigned int FUN_08858fbc(const void *value)
{
    return FUN_0880e8dc(value, D_08965c14, 4) == 0;
}
