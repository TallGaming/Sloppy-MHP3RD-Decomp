/* Compare two six-byte game records and report an unsigned-positive order. */
extern int memcmp(const void *left, const void *right, unsigned int size);

int FUN_088305b4(const void *left, const void *right)
{
    return (unsigned int)memcmp(left, right, 6) > 0U;
}
