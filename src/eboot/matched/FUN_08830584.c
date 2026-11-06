/* Return whether a six-byte game record differs from the shared record. */
extern unsigned char D_08a297c0[6];
extern int memcmp(const void *left, const void *right, unsigned int size);

int FUN_08830584(const unsigned char *record)
{
    return memcmp(record, D_08a297c0, 6) != 0;
}
