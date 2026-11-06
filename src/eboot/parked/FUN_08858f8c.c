/* Purpose: compare four bytes against the first global signature. */
extern unsigned char D_08965c0c[];
extern int FUN_0880e8dc(const void *value, const void *signature, unsigned int size);

unsigned int FUN_08858f8c(const void *value)
{
    return FUN_0880e8dc(value, D_08965c0c, 4) == 0;
}
