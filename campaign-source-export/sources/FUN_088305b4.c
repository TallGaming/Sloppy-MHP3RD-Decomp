/* Return whether two six-byte game records differ. */
extern int memcmp(const void *left, const void *right, unsigned int size);

int FUN_088305b4(const void *left, const void *right)
{
    return memcmp(left, right, 6) != 0;
}
