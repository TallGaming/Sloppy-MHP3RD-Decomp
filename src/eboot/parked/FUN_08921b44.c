/*
 * Purpose: query an external subsystem, reset three state bytes on success,
 * and report the query result as a boolean.
 * Hypothesis: the unresolved query target and global value are fixed runtime
 * addresses; named symbols are not yet present in source/eboot/symbols.s.
 */
typedef int (*QueryFunction)(unsigned int value);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))
#define QUERY_FUNCTION ((QueryFunction)0x09e6fb5c)
#define QUERY_VALUE (*(volatile unsigned int *)0x09e73180)

unsigned int FUN_08921b44(void *object)
{
    int status = QUERY_FUNCTION(QUERY_VALUE);
    if (status != 0) {
        FIELD(object, unsigned char, 0x1c5) = 12;
        FIELD(object, unsigned char, 0x1c0) = 0;
        FIELD(object, unsigned char, 0x1c1) = 0;
    }
    return status != 0;
}
