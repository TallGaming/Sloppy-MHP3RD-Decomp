/* Purpose: compare four bytes against the third global signature. */
extern unsigned char D_08965c1c[];
extern int FUN_0880e8dc(const void *value, const void *signature, unsigned int size);

unsigned int FUN_08858fec(const void *value)
{
    return FUN_0880e8dc(value, D_08965c1c, 4) == 0;
}
